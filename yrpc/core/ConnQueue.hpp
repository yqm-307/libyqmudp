#pragma once
#include "RpcSession.h"
#include "../network/all.h"
#include "ServiceModule.h"
#include <vector>
#include <map>

namespace yrpc::rpc::detail
{


/**
 * @brief 半连接队列
 *  为了实现连接复用，做了握手机制，那么两个节点连接的时候会进行握手。
 * 正在握手中的连接都会被管理在连接队列中;
 *  等到握手完成后，一个 RpcSession 才算是完成，才会到 SessionManager
 * 中做最后处理（丢弃或应用）
 * 
 * 简化理解：
 *      可以思考在YRPC中一个RpcSession真正可以被用户使用（加入到Session-
 * Manager的管理中），就只有一个渠道，就是完成半连接队列。根据时序不同，
 * 我们考虑几种可能出现的极限情况：
 *  (1)节点a连接到节点b，连接完全建立。此时节点b再尝试connect到节点a，会
 * 复用连接，反之亦然。
 *  (2)在ConnQueue中，存在节点a到节点b的临时RpcSession，同时存在节点b到
 * 节点a的临时RpcSession。那么这个时候是个临界点，对于tcp连接不是问题（
 * 可以支持两个进程之间多连接）。但是在ConnQueue中就需要判断了，ConnQueue
 * 一定要让握手最后阶段完成时，先完成的连接保存在SessionManager中，后完
 * 成的释放自己的连接。
 */
class ConnQueue : bbt::noncopyable
{
    typedef uint64_t SessionID;
    typedef std::shared_ptr<RpcSession>         SessionPtr;
    typedef std::function<void(SessionPtr)>     OnSessionCallback;
    typedef yrpc::detail::net::YAddress         YAddress;
    typedef std::map<SessionID,OnSessionCallback>       Map;
public:
    typedef std::unique_ptr<ConnQueue>  Ptr;
    /* 弹出一个元素 , 失败返回 nullptr*/
    std::pair<OnSessionCallback,bool> PopUpById(SessionID id);
    /**
     * @brief 查找并插入一个半连接SessionID(连接中的Session)
     * 
     * @param id    会话ID
     * @param func  会话建立时的回调
     * @return int  # -1(已经存在), 1(插入成功)
     */
    int FindAndPush(SessionID id, const OnSessionCallback& func);
    OnSessionCallback Find(SessionID id);

private:
    Map m_map;
};

}// yrpc::rpc::detail