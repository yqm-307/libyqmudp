// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: addr.proto

#include "addr.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>

PROTOBUF_PRAGMA_INIT_SEG

namespace _pb = ::PROTOBUF_NAMESPACE_ID;
namespace _pbi = _pb::internal;

PROTOBUF_CONSTEXPR address::address(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_._has_bits_)*/{}
  , /*decltype(_impl_._cached_size_)*/{}
  , /*decltype(_impl_.c_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.a_)*/0
  , /*decltype(_impl_.b_)*/false
  , /*decltype(_impl_.d_)*/int64_t{0}} {}
struct addressDefaultTypeInternal {
  PROTOBUF_CONSTEXPR addressDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~addressDefaultTypeInternal() {}
  union {
    address _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 addressDefaultTypeInternal _address_default_instance_;
PROTOBUF_CONSTEXPR addreq::addreq(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_._has_bits_)*/{}
  , /*decltype(_impl_._cached_size_)*/{}
  , /*decltype(_impl_.rint_)*/0
  , /*decltype(_impl_.lint_)*/0} {}
struct addreqDefaultTypeInternal {
  PROTOBUF_CONSTEXPR addreqDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~addreqDefaultTypeInternal() {}
  union {
    addreq _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 addreqDefaultTypeInternal _addreq_default_instance_;
PROTOBUF_CONSTEXPR addrsp::addrsp(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_._has_bits_)*/{}
  , /*decltype(_impl_._cached_size_)*/{}
  , /*decltype(_impl_.result_)*/0} {}
struct addrspDefaultTypeInternal {
  PROTOBUF_CONSTEXPR addrspDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~addrspDefaultTypeInternal() {}
  union {
    addrsp _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 addrspDefaultTypeInternal _addrsp_default_instance_;
static ::_pb::Metadata file_level_metadata_addr_2eproto[3];
static constexpr ::_pb::EnumDescriptor const** file_level_enum_descriptors_addr_2eproto = nullptr;
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_addr_2eproto = nullptr;

const uint32_t TableStruct_addr_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  PROTOBUF_FIELD_OFFSET(::address, _impl_._has_bits_),
  PROTOBUF_FIELD_OFFSET(::address, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::address, _impl_.a_),
  PROTOBUF_FIELD_OFFSET(::address, _impl_.b_),
  PROTOBUF_FIELD_OFFSET(::address, _impl_.c_),
  PROTOBUF_FIELD_OFFSET(::address, _impl_.d_),
  1,
  2,
  0,
  3,
  PROTOBUF_FIELD_OFFSET(::addreq, _impl_._has_bits_),
  PROTOBUF_FIELD_OFFSET(::addreq, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::addreq, _impl_.rint_),
  PROTOBUF_FIELD_OFFSET(::addreq, _impl_.lint_),
  0,
  1,
  PROTOBUF_FIELD_OFFSET(::addrsp, _impl_._has_bits_),
  PROTOBUF_FIELD_OFFSET(::addrsp, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::addrsp, _impl_.result_),
  0,
};
static const ::_pbi::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 10, -1, sizeof(::address)},
  { 14, 22, -1, sizeof(::addreq)},
  { 24, 31, -1, sizeof(::addrsp)},
};

static const ::_pb::Message* const file_default_instances[] = {
  &::_address_default_instance_._instance,
  &::_addreq_default_instance_._instance,
  &::_addrsp_default_instance_._instance,
};

const char descriptor_table_protodef_addr_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\naddr.proto\"a\n\007address\022\016\n\001a\030\001 \001(\005H\000\210\001\001\022"
  "\016\n\001b\030\002 \001(\010H\001\210\001\001\022\016\n\001c\030\003 \001(\tH\002\210\001\001\022\016\n\001d\030\004 \001"
  "(\003H\003\210\001\001B\004\n\002_aB\004\n\002_bB\004\n\002_cB\004\n\002_d\"@\n\006addre"
  "q\022\021\n\004rint\030\001 \001(\005H\000\210\001\001\022\021\n\004lint\030\002 \001(\005H\001\210\001\001B"
  "\007\n\005_rintB\007\n\005_lint\"(\n\006addrsp\022\023\n\006result\030\001 "
  "\001(\005H\000\210\001\001B\t\n\007_resultb\006proto3"
  ;
static ::_pbi::once_flag descriptor_table_addr_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_addr_2eproto = {
    false, false, 227, descriptor_table_protodef_addr_2eproto,
    "addr.proto",
    &descriptor_table_addr_2eproto_once, nullptr, 0, 3,
    schemas, file_default_instances, TableStruct_addr_2eproto::offsets,
    file_level_metadata_addr_2eproto, file_level_enum_descriptors_addr_2eproto,
    file_level_service_descriptors_addr_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_addr_2eproto_getter() {
  return &descriptor_table_addr_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_addr_2eproto(&descriptor_table_addr_2eproto);

// ===================================================================

class address::_Internal {
 public:
  using HasBits = decltype(std::declval<address>()._impl_._has_bits_);
  static constexpr int32_t kHasBitsOffset =
    8 * PROTOBUF_FIELD_OFFSET(address, _impl_._has_bits_);
  static void set_has_a(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
  static void set_has_b(HasBits* has_bits) {
    (*has_bits)[0] |= 4u;
  }
  static void set_has_c(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static void set_has_d(HasBits* has_bits) {
    (*has_bits)[0] |= 8u;
  }
};

address::address(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:address)
}
address::address(const address& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  address* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){from._impl_._has_bits_}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.c_){}
    , decltype(_impl_.a_){}
    , decltype(_impl_.b_){}
    , decltype(_impl_.d_){}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  _impl_.c_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.c_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (from._internal_has_c()) {
    _this->_impl_.c_.Set(from._internal_c(), 
      _this->GetArenaForAllocation());
  }
  ::memcpy(&_impl_.a_, &from._impl_.a_,
    static_cast<size_t>(reinterpret_cast<char*>(&_impl_.d_) -
    reinterpret_cast<char*>(&_impl_.a_)) + sizeof(_impl_.d_));
  // @@protoc_insertion_point(copy_constructor:address)
}

inline void address::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.c_){}
    , decltype(_impl_.a_){0}
    , decltype(_impl_.b_){false}
    , decltype(_impl_.d_){int64_t{0}}
  };
  _impl_.c_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.c_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
}

address::~address() {
  // @@protoc_insertion_point(destructor:address)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void address::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.c_.Destroy();
}

void address::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void address::Clear() {
// @@protoc_insertion_point(message_clear_start:address)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    _impl_.c_.ClearNonDefaultToEmpty();
  }
  if (cached_has_bits & 0x0000000eu) {
    ::memset(&_impl_.a_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&_impl_.d_) -
        reinterpret_cast<char*>(&_impl_.a_)) + sizeof(_impl_.d_));
  }
  _impl_._has_bits_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* address::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // optional int32 a = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 8)) {
          _Internal::set_has_a(&has_bits);
          _impl_.a_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional bool b = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 16)) {
          _Internal::set_has_b(&has_bits);
          _impl_.b_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional string c = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 26)) {
          auto str = _internal_mutable_c();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "address.c"));
        } else
          goto handle_unusual;
        continue;
      // optional int64 d = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 32)) {
          _Internal::set_has_d(&has_bits);
          _impl_.d_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  _impl_._has_bits_.Or(has_bits);
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* address::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:address)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // optional int32 a = 1;
  if (_internal_has_a()) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt32ToArray(1, this->_internal_a(), target);
  }

  // optional bool b = 2;
  if (_internal_has_b()) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteBoolToArray(2, this->_internal_b(), target);
  }

  // optional string c = 3;
  if (_internal_has_c()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_c().data(), static_cast<int>(this->_internal_c().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "address.c");
    target = stream->WriteStringMaybeAliased(
        3, this->_internal_c(), target);
  }

  // optional int64 d = 4;
  if (_internal_has_d()) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt64ToArray(4, this->_internal_d(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:address)
  return target;
}

size_t address::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:address)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x0000000fu) {
    // optional string c = 3;
    if (cached_has_bits & 0x00000001u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
          this->_internal_c());
    }

    // optional int32 a = 1;
    if (cached_has_bits & 0x00000002u) {
      total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(this->_internal_a());
    }

    // optional bool b = 2;
    if (cached_has_bits & 0x00000004u) {
      total_size += 1 + 1;
    }

    // optional int64 d = 4;
    if (cached_has_bits & 0x00000008u) {
      total_size += ::_pbi::WireFormatLite::Int64SizePlusOne(this->_internal_d());
    }

  }
  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData address::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    address::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*address::GetClassData() const { return &_class_data_; }


void address::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<address*>(&to_msg);
  auto& from = static_cast<const address&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:address)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._impl_._has_bits_[0];
  if (cached_has_bits & 0x0000000fu) {
    if (cached_has_bits & 0x00000001u) {
      _this->_internal_set_c(from._internal_c());
    }
    if (cached_has_bits & 0x00000002u) {
      _this->_impl_.a_ = from._impl_.a_;
    }
    if (cached_has_bits & 0x00000004u) {
      _this->_impl_.b_ = from._impl_.b_;
    }
    if (cached_has_bits & 0x00000008u) {
      _this->_impl_.d_ = from._impl_.d_;
    }
    _this->_impl_._has_bits_[0] |= cached_has_bits;
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void address::CopyFrom(const address& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:address)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool address::IsInitialized() const {
  return true;
}

void address::InternalSwap(address* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_impl_._has_bits_[0], other->_impl_._has_bits_[0]);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.c_, lhs_arena,
      &other->_impl_.c_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(address, _impl_.d_)
      + sizeof(address::_impl_.d_)
      - PROTOBUF_FIELD_OFFSET(address, _impl_.a_)>(
          reinterpret_cast<char*>(&_impl_.a_),
          reinterpret_cast<char*>(&other->_impl_.a_));
}

::PROTOBUF_NAMESPACE_ID::Metadata address::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_addr_2eproto_getter, &descriptor_table_addr_2eproto_once,
      file_level_metadata_addr_2eproto[0]);
}

// ===================================================================

class addreq::_Internal {
 public:
  using HasBits = decltype(std::declval<addreq>()._impl_._has_bits_);
  static constexpr int32_t kHasBitsOffset =
    8 * PROTOBUF_FIELD_OFFSET(addreq, _impl_._has_bits_);
  static void set_has_rint(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static void set_has_lint(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
};

addreq::addreq(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:addreq)
}
addreq::addreq(const addreq& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  addreq* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){from._impl_._has_bits_}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.rint_){}
    , decltype(_impl_.lint_){}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::memcpy(&_impl_.rint_, &from._impl_.rint_,
    static_cast<size_t>(reinterpret_cast<char*>(&_impl_.lint_) -
    reinterpret_cast<char*>(&_impl_.rint_)) + sizeof(_impl_.lint_));
  // @@protoc_insertion_point(copy_constructor:addreq)
}

inline void addreq::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.rint_){0}
    , decltype(_impl_.lint_){0}
  };
}

addreq::~addreq() {
  // @@protoc_insertion_point(destructor:addreq)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void addreq::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
}

void addreq::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void addreq::Clear() {
// @@protoc_insertion_point(message_clear_start:addreq)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    ::memset(&_impl_.rint_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&_impl_.lint_) -
        reinterpret_cast<char*>(&_impl_.rint_)) + sizeof(_impl_.lint_));
  }
  _impl_._has_bits_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* addreq::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // optional int32 rint = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 8)) {
          _Internal::set_has_rint(&has_bits);
          _impl_.rint_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional int32 lint = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 16)) {
          _Internal::set_has_lint(&has_bits);
          _impl_.lint_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  _impl_._has_bits_.Or(has_bits);
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* addreq::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:addreq)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // optional int32 rint = 1;
  if (_internal_has_rint()) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt32ToArray(1, this->_internal_rint(), target);
  }

  // optional int32 lint = 2;
  if (_internal_has_lint()) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt32ToArray(2, this->_internal_lint(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:addreq)
  return target;
}

size_t addreq::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:addreq)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    // optional int32 rint = 1;
    if (cached_has_bits & 0x00000001u) {
      total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(this->_internal_rint());
    }

    // optional int32 lint = 2;
    if (cached_has_bits & 0x00000002u) {
      total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(this->_internal_lint());
    }

  }
  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData addreq::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    addreq::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*addreq::GetClassData() const { return &_class_data_; }


void addreq::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<addreq*>(&to_msg);
  auto& from = static_cast<const addreq&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:addreq)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._impl_._has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    if (cached_has_bits & 0x00000001u) {
      _this->_impl_.rint_ = from._impl_.rint_;
    }
    if (cached_has_bits & 0x00000002u) {
      _this->_impl_.lint_ = from._impl_.lint_;
    }
    _this->_impl_._has_bits_[0] |= cached_has_bits;
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void addreq::CopyFrom(const addreq& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:addreq)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool addreq::IsInitialized() const {
  return true;
}

void addreq::InternalSwap(addreq* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_impl_._has_bits_[0], other->_impl_._has_bits_[0]);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(addreq, _impl_.lint_)
      + sizeof(addreq::_impl_.lint_)
      - PROTOBUF_FIELD_OFFSET(addreq, _impl_.rint_)>(
          reinterpret_cast<char*>(&_impl_.rint_),
          reinterpret_cast<char*>(&other->_impl_.rint_));
}

::PROTOBUF_NAMESPACE_ID::Metadata addreq::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_addr_2eproto_getter, &descriptor_table_addr_2eproto_once,
      file_level_metadata_addr_2eproto[1]);
}

// ===================================================================

class addrsp::_Internal {
 public:
  using HasBits = decltype(std::declval<addrsp>()._impl_._has_bits_);
  static constexpr int32_t kHasBitsOffset =
    8 * PROTOBUF_FIELD_OFFSET(addrsp, _impl_._has_bits_);
  static void set_has_result(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
};

addrsp::addrsp(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:addrsp)
}
addrsp::addrsp(const addrsp& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  addrsp* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){from._impl_._has_bits_}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.result_){}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  _this->_impl_.result_ = from._impl_.result_;
  // @@protoc_insertion_point(copy_constructor:addrsp)
}

inline void addrsp::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.result_){0}
  };
}

addrsp::~addrsp() {
  // @@protoc_insertion_point(destructor:addrsp)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void addrsp::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
}

void addrsp::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void addrsp::Clear() {
// @@protoc_insertion_point(message_clear_start:addrsp)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.result_ = 0;
  _impl_._has_bits_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* addrsp::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // optional int32 result = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 8)) {
          _Internal::set_has_result(&has_bits);
          _impl_.result_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  _impl_._has_bits_.Or(has_bits);
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* addrsp::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:addrsp)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // optional int32 result = 1;
  if (_internal_has_result()) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt32ToArray(1, this->_internal_result(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:addrsp)
  return target;
}

size_t addrsp::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:addrsp)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // optional int32 result = 1;
  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(this->_internal_result());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData addrsp::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    addrsp::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*addrsp::GetClassData() const { return &_class_data_; }


void addrsp::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<addrsp*>(&to_msg);
  auto& from = static_cast<const addrsp&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:addrsp)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (from._internal_has_result()) {
    _this->_internal_set_result(from._internal_result());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void addrsp::CopyFrom(const addrsp& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:addrsp)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool addrsp::IsInitialized() const {
  return true;
}

void addrsp::InternalSwap(addrsp* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_impl_._has_bits_[0], other->_impl_._has_bits_[0]);
  swap(_impl_.result_, other->_impl_.result_);
}

::PROTOBUF_NAMESPACE_ID::Metadata addrsp::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_addr_2eproto_getter, &descriptor_table_addr_2eproto_once,
      file_level_metadata_addr_2eproto[2]);
}

// @@protoc_insertion_point(namespace_scope)
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::address*
Arena::CreateMaybeMessage< ::address >(Arena* arena) {
  return Arena::CreateMessageInternal< ::address >(arena);
}
template<> PROTOBUF_NOINLINE ::addreq*
Arena::CreateMaybeMessage< ::addreq >(Arena* arena) {
  return Arena::CreateMessageInternal< ::addreq >(arena);
}
template<> PROTOBUF_NOINLINE ::addrsp*
Arena::CreateMaybeMessage< ::addrsp >(Arena* arena) {
  return Arena::CreateMessageInternal< ::addrsp >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
