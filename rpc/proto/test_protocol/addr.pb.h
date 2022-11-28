// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: test_protocol/addr.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_test_5fprotocol_2faddr_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_test_5fprotocol_2faddr_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3021000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3021005 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_test_5fprotocol_2faddr_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_test_5fprotocol_2faddr_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_test_5fprotocol_2faddr_2eproto;
class addreq;
struct addreqDefaultTypeInternal;
extern addreqDefaultTypeInternal _addreq_default_instance_;
class address;
struct addressDefaultTypeInternal;
extern addressDefaultTypeInternal _address_default_instance_;
class addrsp;
struct addrspDefaultTypeInternal;
extern addrspDefaultTypeInternal _addrsp_default_instance_;
PROTOBUF_NAMESPACE_OPEN
template<> ::addreq* Arena::CreateMaybeMessage<::addreq>(Arena*);
template<> ::address* Arena::CreateMaybeMessage<::address>(Arena*);
template<> ::addrsp* Arena::CreateMaybeMessage<::addrsp>(Arena*);
PROTOBUF_NAMESPACE_CLOSE

// ===================================================================

class address final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:address) */ {
 public:
  inline address() : address(nullptr) {}
  ~address() override;
  explicit PROTOBUF_CONSTEXPR address(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  address(const address& from);
  address(address&& from) noexcept
    : address() {
    *this = ::std::move(from);
  }

  inline address& operator=(const address& from) {
    CopyFrom(from);
    return *this;
  }
  inline address& operator=(address&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const address& default_instance() {
    return *internal_default_instance();
  }
  static inline const address* internal_default_instance() {
    return reinterpret_cast<const address*>(
               &_address_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(address& a, address& b) {
    a.Swap(&b);
  }
  inline void Swap(address* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(address* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  address* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<address>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const address& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const address& from) {
    address::MergeImpl(*this, from);
  }
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  uint8_t* _InternalSerialize(
      uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _impl_._cached_size_.Get(); }

  private:
  void SharedCtor(::PROTOBUF_NAMESPACE_ID::Arena* arena, bool is_message_owned);
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(address* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "address";
  }
  protected:
  explicit address(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kCFieldNumber = 3,
    kAFieldNumber = 1,
    kBFieldNumber = 2,
    kDFieldNumber = 4,
  };
  // optional string c = 3;
  bool has_c() const;
  private:
  bool _internal_has_c() const;
  public:
  void clear_c();
  const std::string& c() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_c(ArgT0&& arg0, ArgT... args);
  std::string* mutable_c();
  PROTOBUF_NODISCARD std::string* release_c();
  void set_allocated_c(std::string* c);
  private:
  const std::string& _internal_c() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_c(const std::string& value);
  std::string* _internal_mutable_c();
  public:

  // optional int32 a = 1;
  bool has_a() const;
  private:
  bool _internal_has_a() const;
  public:
  void clear_a();
  int32_t a() const;
  void set_a(int32_t value);
  private:
  int32_t _internal_a() const;
  void _internal_set_a(int32_t value);
  public:

  // optional bool b = 2;
  bool has_b() const;
  private:
  bool _internal_has_b() const;
  public:
  void clear_b();
  bool b() const;
  void set_b(bool value);
  private:
  bool _internal_b() const;
  void _internal_set_b(bool value);
  public:

  // optional int64 d = 4;
  bool has_d() const;
  private:
  bool _internal_has_d() const;
  public:
  void clear_d();
  int64_t d() const;
  void set_d(int64_t value);
  private:
  int64_t _internal_d() const;
  void _internal_set_d(int64_t value);
  public:

  // @@protoc_insertion_point(class_scope:address)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr c_;
    int32_t a_;
    bool b_;
    int64_t d_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_test_5fprotocol_2faddr_2eproto;
};
// -------------------------------------------------------------------

class addreq final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:addreq) */ {
 public:
  inline addreq() : addreq(nullptr) {}
  ~addreq() override;
  explicit PROTOBUF_CONSTEXPR addreq(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  addreq(const addreq& from);
  addreq(addreq&& from) noexcept
    : addreq() {
    *this = ::std::move(from);
  }

  inline addreq& operator=(const addreq& from) {
    CopyFrom(from);
    return *this;
  }
  inline addreq& operator=(addreq&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const addreq& default_instance() {
    return *internal_default_instance();
  }
  static inline const addreq* internal_default_instance() {
    return reinterpret_cast<const addreq*>(
               &_addreq_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(addreq& a, addreq& b) {
    a.Swap(&b);
  }
  inline void Swap(addreq* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(addreq* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  addreq* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<addreq>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const addreq& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const addreq& from) {
    addreq::MergeImpl(*this, from);
  }
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  uint8_t* _InternalSerialize(
      uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _impl_._cached_size_.Get(); }

  private:
  void SharedCtor(::PROTOBUF_NAMESPACE_ID::Arena* arena, bool is_message_owned);
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(addreq* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "addreq";
  }
  protected:
  explicit addreq(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kRintFieldNumber = 1,
    kLintFieldNumber = 2,
  };
  // optional int32 rint = 1;
  bool has_rint() const;
  private:
  bool _internal_has_rint() const;
  public:
  void clear_rint();
  int32_t rint() const;
  void set_rint(int32_t value);
  private:
  int32_t _internal_rint() const;
  void _internal_set_rint(int32_t value);
  public:

  // optional int32 lint = 2;
  bool has_lint() const;
  private:
  bool _internal_has_lint() const;
  public:
  void clear_lint();
  int32_t lint() const;
  void set_lint(int32_t value);
  private:
  int32_t _internal_lint() const;
  void _internal_set_lint(int32_t value);
  public:

  // @@protoc_insertion_point(class_scope:addreq)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
    int32_t rint_;
    int32_t lint_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_test_5fprotocol_2faddr_2eproto;
};
// -------------------------------------------------------------------

class addrsp final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:addrsp) */ {
 public:
  inline addrsp() : addrsp(nullptr) {}
  ~addrsp() override;
  explicit PROTOBUF_CONSTEXPR addrsp(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  addrsp(const addrsp& from);
  addrsp(addrsp&& from) noexcept
    : addrsp() {
    *this = ::std::move(from);
  }

  inline addrsp& operator=(const addrsp& from) {
    CopyFrom(from);
    return *this;
  }
  inline addrsp& operator=(addrsp&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const addrsp& default_instance() {
    return *internal_default_instance();
  }
  static inline const addrsp* internal_default_instance() {
    return reinterpret_cast<const addrsp*>(
               &_addrsp_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    2;

  friend void swap(addrsp& a, addrsp& b) {
    a.Swap(&b);
  }
  inline void Swap(addrsp* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(addrsp* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  addrsp* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<addrsp>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const addrsp& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const addrsp& from) {
    addrsp::MergeImpl(*this, from);
  }
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  uint8_t* _InternalSerialize(
      uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _impl_._cached_size_.Get(); }

  private:
  void SharedCtor(::PROTOBUF_NAMESPACE_ID::Arena* arena, bool is_message_owned);
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(addrsp* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "addrsp";
  }
  protected:
  explicit addrsp(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kResultFieldNumber = 1,
  };
  // optional int32 result = 1;
  bool has_result() const;
  private:
  bool _internal_has_result() const;
  public:
  void clear_result();
  int32_t result() const;
  void set_result(int32_t value);
  private:
  int32_t _internal_result() const;
  void _internal_set_result(int32_t value);
  public:

  // @@protoc_insertion_point(class_scope:addrsp)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
    int32_t result_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_test_5fprotocol_2faddr_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// address

// optional int32 a = 1;
inline bool address::_internal_has_a() const {
  bool value = (_impl_._has_bits_[0] & 0x00000002u) != 0;
  return value;
}
inline bool address::has_a() const {
  return _internal_has_a();
}
inline void address::clear_a() {
  _impl_.a_ = 0;
  _impl_._has_bits_[0] &= ~0x00000002u;
}
inline int32_t address::_internal_a() const {
  return _impl_.a_;
}
inline int32_t address::a() const {
  // @@protoc_insertion_point(field_get:address.a)
  return _internal_a();
}
inline void address::_internal_set_a(int32_t value) {
  _impl_._has_bits_[0] |= 0x00000002u;
  _impl_.a_ = value;
}
inline void address::set_a(int32_t value) {
  _internal_set_a(value);
  // @@protoc_insertion_point(field_set:address.a)
}

// optional bool b = 2;
inline bool address::_internal_has_b() const {
  bool value = (_impl_._has_bits_[0] & 0x00000004u) != 0;
  return value;
}
inline bool address::has_b() const {
  return _internal_has_b();
}
inline void address::clear_b() {
  _impl_.b_ = false;
  _impl_._has_bits_[0] &= ~0x00000004u;
}
inline bool address::_internal_b() const {
  return _impl_.b_;
}
inline bool address::b() const {
  // @@protoc_insertion_point(field_get:address.b)
  return _internal_b();
}
inline void address::_internal_set_b(bool value) {
  _impl_._has_bits_[0] |= 0x00000004u;
  _impl_.b_ = value;
}
inline void address::set_b(bool value) {
  _internal_set_b(value);
  // @@protoc_insertion_point(field_set:address.b)
}

// optional string c = 3;
inline bool address::_internal_has_c() const {
  bool value = (_impl_._has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline bool address::has_c() const {
  return _internal_has_c();
}
inline void address::clear_c() {
  _impl_.c_.ClearToEmpty();
  _impl_._has_bits_[0] &= ~0x00000001u;
}
inline const std::string& address::c() const {
  // @@protoc_insertion_point(field_get:address.c)
  return _internal_c();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void address::set_c(ArgT0&& arg0, ArgT... args) {
 _impl_._has_bits_[0] |= 0x00000001u;
 _impl_.c_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:address.c)
}
inline std::string* address::mutable_c() {
  std::string* _s = _internal_mutable_c();
  // @@protoc_insertion_point(field_mutable:address.c)
  return _s;
}
inline const std::string& address::_internal_c() const {
  return _impl_.c_.Get();
}
inline void address::_internal_set_c(const std::string& value) {
  _impl_._has_bits_[0] |= 0x00000001u;
  _impl_.c_.Set(value, GetArenaForAllocation());
}
inline std::string* address::_internal_mutable_c() {
  _impl_._has_bits_[0] |= 0x00000001u;
  return _impl_.c_.Mutable(GetArenaForAllocation());
}
inline std::string* address::release_c() {
  // @@protoc_insertion_point(field_release:address.c)
  if (!_internal_has_c()) {
    return nullptr;
  }
  _impl_._has_bits_[0] &= ~0x00000001u;
  auto* p = _impl_.c_.Release();
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.c_.IsDefault()) {
    _impl_.c_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  return p;
}
inline void address::set_allocated_c(std::string* c) {
  if (c != nullptr) {
    _impl_._has_bits_[0] |= 0x00000001u;
  } else {
    _impl_._has_bits_[0] &= ~0x00000001u;
  }
  _impl_.c_.SetAllocated(c, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.c_.IsDefault()) {
    _impl_.c_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:address.c)
}

// optional int64 d = 4;
inline bool address::_internal_has_d() const {
  bool value = (_impl_._has_bits_[0] & 0x00000008u) != 0;
  return value;
}
inline bool address::has_d() const {
  return _internal_has_d();
}
inline void address::clear_d() {
  _impl_.d_ = int64_t{0};
  _impl_._has_bits_[0] &= ~0x00000008u;
}
inline int64_t address::_internal_d() const {
  return _impl_.d_;
}
inline int64_t address::d() const {
  // @@protoc_insertion_point(field_get:address.d)
  return _internal_d();
}
inline void address::_internal_set_d(int64_t value) {
  _impl_._has_bits_[0] |= 0x00000008u;
  _impl_.d_ = value;
}
inline void address::set_d(int64_t value) {
  _internal_set_d(value);
  // @@protoc_insertion_point(field_set:address.d)
}

// -------------------------------------------------------------------

// addreq

// optional int32 rint = 1;
inline bool addreq::_internal_has_rint() const {
  bool value = (_impl_._has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline bool addreq::has_rint() const {
  return _internal_has_rint();
}
inline void addreq::clear_rint() {
  _impl_.rint_ = 0;
  _impl_._has_bits_[0] &= ~0x00000001u;
}
inline int32_t addreq::_internal_rint() const {
  return _impl_.rint_;
}
inline int32_t addreq::rint() const {
  // @@protoc_insertion_point(field_get:addreq.rint)
  return _internal_rint();
}
inline void addreq::_internal_set_rint(int32_t value) {
  _impl_._has_bits_[0] |= 0x00000001u;
  _impl_.rint_ = value;
}
inline void addreq::set_rint(int32_t value) {
  _internal_set_rint(value);
  // @@protoc_insertion_point(field_set:addreq.rint)
}

// optional int32 lint = 2;
inline bool addreq::_internal_has_lint() const {
  bool value = (_impl_._has_bits_[0] & 0x00000002u) != 0;
  return value;
}
inline bool addreq::has_lint() const {
  return _internal_has_lint();
}
inline void addreq::clear_lint() {
  _impl_.lint_ = 0;
  _impl_._has_bits_[0] &= ~0x00000002u;
}
inline int32_t addreq::_internal_lint() const {
  return _impl_.lint_;
}
inline int32_t addreq::lint() const {
  // @@protoc_insertion_point(field_get:addreq.lint)
  return _internal_lint();
}
inline void addreq::_internal_set_lint(int32_t value) {
  _impl_._has_bits_[0] |= 0x00000002u;
  _impl_.lint_ = value;
}
inline void addreq::set_lint(int32_t value) {
  _internal_set_lint(value);
  // @@protoc_insertion_point(field_set:addreq.lint)
}

// -------------------------------------------------------------------

// addrsp

// optional int32 result = 1;
inline bool addrsp::_internal_has_result() const {
  bool value = (_impl_._has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline bool addrsp::has_result() const {
  return _internal_has_result();
}
inline void addrsp::clear_result() {
  _impl_.result_ = 0;
  _impl_._has_bits_[0] &= ~0x00000001u;
}
inline int32_t addrsp::_internal_result() const {
  return _impl_.result_;
}
inline int32_t addrsp::result() const {
  // @@protoc_insertion_point(field_get:addrsp.result)
  return _internal_result();
}
inline void addrsp::_internal_set_result(int32_t value) {
  _impl_._has_bits_[0] |= 0x00000001u;
  _impl_.result_ = value;
}
inline void addrsp::set_result(int32_t value) {
  _internal_set_result(value);
  // @@protoc_insertion_point(field_set:addrsp.result)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)


// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_test_5fprotocol_2faddr_2eproto
