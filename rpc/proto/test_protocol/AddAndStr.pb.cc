// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: test_protocol/AddAndStr.proto

#include "test_protocol/AddAndStr.pb.h"

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

PROTOBUF_CONSTEXPR AddReq::AddReq(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_._has_bits_)*/{}
  , /*decltype(_impl_._cached_size_)*/{}
  , /*decltype(_impl_.a_)*/0
  , /*decltype(_impl_.b_)*/0} {}
struct AddReqDefaultTypeInternal {
  PROTOBUF_CONSTEXPR AddReqDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~AddReqDefaultTypeInternal() {}
  union {
    AddReq _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 AddReqDefaultTypeInternal _AddReq_default_instance_;
PROTOBUF_CONSTEXPR AddRsp::AddRsp(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_._has_bits_)*/{}
  , /*decltype(_impl_._cached_size_)*/{}
  , /*decltype(_impl_.result_)*/0} {}
struct AddRspDefaultTypeInternal {
  PROTOBUF_CONSTEXPR AddRspDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~AddRspDefaultTypeInternal() {}
  union {
    AddRsp _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 AddRspDefaultTypeInternal _AddRsp_default_instance_;
PROTOBUF_CONSTEXPR EchoReq::EchoReq(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_._has_bits_)*/{}
  , /*decltype(_impl_._cached_size_)*/{}
  , /*decltype(_impl_.str_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}} {}
struct EchoReqDefaultTypeInternal {
  PROTOBUF_CONSTEXPR EchoReqDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~EchoReqDefaultTypeInternal() {}
  union {
    EchoReq _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 EchoReqDefaultTypeInternal _EchoReq_default_instance_;
PROTOBUF_CONSTEXPR EchoRsp::EchoRsp(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_._has_bits_)*/{}
  , /*decltype(_impl_._cached_size_)*/{}
  , /*decltype(_impl_.str_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}} {}
struct EchoRspDefaultTypeInternal {
  PROTOBUF_CONSTEXPR EchoRspDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~EchoRspDefaultTypeInternal() {}
  union {
    EchoRsp _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 EchoRspDefaultTypeInternal _EchoRsp_default_instance_;
static ::_pb::Metadata file_level_metadata_test_5fprotocol_2fAddAndStr_2eproto[4];
static constexpr ::_pb::EnumDescriptor const** file_level_enum_descriptors_test_5fprotocol_2fAddAndStr_2eproto = nullptr;
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_test_5fprotocol_2fAddAndStr_2eproto = nullptr;

const uint32_t TableStruct_test_5fprotocol_2fAddAndStr_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  PROTOBUF_FIELD_OFFSET(::AddReq, _impl_._has_bits_),
  PROTOBUF_FIELD_OFFSET(::AddReq, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::AddReq, _impl_.a_),
  PROTOBUF_FIELD_OFFSET(::AddReq, _impl_.b_),
  0,
  1,
  PROTOBUF_FIELD_OFFSET(::AddRsp, _impl_._has_bits_),
  PROTOBUF_FIELD_OFFSET(::AddRsp, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::AddRsp, _impl_.result_),
  0,
  PROTOBUF_FIELD_OFFSET(::EchoReq, _impl_._has_bits_),
  PROTOBUF_FIELD_OFFSET(::EchoReq, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::EchoReq, _impl_.str_),
  0,
  PROTOBUF_FIELD_OFFSET(::EchoRsp, _impl_._has_bits_),
  PROTOBUF_FIELD_OFFSET(::EchoRsp, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::EchoRsp, _impl_.str_),
  0,
};
static const ::_pbi::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 8, -1, sizeof(::AddReq)},
  { 10, 17, -1, sizeof(::AddRsp)},
  { 18, 25, -1, sizeof(::EchoReq)},
  { 26, 33, -1, sizeof(::EchoRsp)},
};

static const ::_pb::Message* const file_default_instances[] = {
  &::_AddReq_default_instance_._instance,
  &::_AddRsp_default_instance_._instance,
  &::_EchoReq_default_instance_._instance,
  &::_EchoRsp_default_instance_._instance,
};

const char descriptor_table_protodef_test_5fprotocol_2fAddAndStr_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\035test_protocol/AddAndStr.proto\"\036\n\006AddRe"
  "q\022\t\n\001a\030\002 \001(\005\022\t\n\001b\030\003 \001(\005\"\030\n\006AddRsp\022\016\n\006res"
  "ult\030\002 \001(\005\"\026\n\007EchoReq\022\013\n\003str\030\002 \001(\t\"\026\n\007Ech"
  "oRsp\022\013\n\003str\030\002 \001(\tB\003\200\001\001"
  ;
static ::_pbi::once_flag descriptor_table_test_5fprotocol_2fAddAndStr_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_test_5fprotocol_2fAddAndStr_2eproto = {
    false, false, 142, descriptor_table_protodef_test_5fprotocol_2fAddAndStr_2eproto,
    "test_protocol/AddAndStr.proto",
    &descriptor_table_test_5fprotocol_2fAddAndStr_2eproto_once, nullptr, 0, 4,
    schemas, file_default_instances, TableStruct_test_5fprotocol_2fAddAndStr_2eproto::offsets,
    file_level_metadata_test_5fprotocol_2fAddAndStr_2eproto, file_level_enum_descriptors_test_5fprotocol_2fAddAndStr_2eproto,
    file_level_service_descriptors_test_5fprotocol_2fAddAndStr_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_test_5fprotocol_2fAddAndStr_2eproto_getter() {
  return &descriptor_table_test_5fprotocol_2fAddAndStr_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_test_5fprotocol_2fAddAndStr_2eproto(&descriptor_table_test_5fprotocol_2fAddAndStr_2eproto);

// ===================================================================

class AddReq::_Internal {
 public:
  using HasBits = decltype(std::declval<AddReq>()._impl_._has_bits_);
  static void set_has_a(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static void set_has_b(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
};

AddReq::AddReq(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:AddReq)
}
AddReq::AddReq(const AddReq& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  AddReq* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){from._impl_._has_bits_}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.a_){}
    , decltype(_impl_.b_){}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::memcpy(&_impl_.a_, &from._impl_.a_,
    static_cast<size_t>(reinterpret_cast<char*>(&_impl_.b_) -
    reinterpret_cast<char*>(&_impl_.a_)) + sizeof(_impl_.b_));
  // @@protoc_insertion_point(copy_constructor:AddReq)
}

inline void AddReq::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.a_){0}
    , decltype(_impl_.b_){0}
  };
}

AddReq::~AddReq() {
  // @@protoc_insertion_point(destructor:AddReq)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void AddReq::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
}

void AddReq::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void AddReq::Clear() {
// @@protoc_insertion_point(message_clear_start:AddReq)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    ::memset(&_impl_.a_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&_impl_.b_) -
        reinterpret_cast<char*>(&_impl_.a_)) + sizeof(_impl_.b_));
  }
  _impl_._has_bits_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* AddReq::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // optional int32 a = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 16)) {
          _Internal::set_has_a(&has_bits);
          _impl_.a_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional int32 b = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 24)) {
          _Internal::set_has_b(&has_bits);
          _impl_.b_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
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

uint8_t* AddReq::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:AddReq)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  // optional int32 a = 2;
  if (cached_has_bits & 0x00000001u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt32ToArray(2, this->_internal_a(), target);
  }

  // optional int32 b = 3;
  if (cached_has_bits & 0x00000002u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt32ToArray(3, this->_internal_b(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:AddReq)
  return target;
}

size_t AddReq::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:AddReq)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    // optional int32 a = 2;
    if (cached_has_bits & 0x00000001u) {
      total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(this->_internal_a());
    }

    // optional int32 b = 3;
    if (cached_has_bits & 0x00000002u) {
      total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(this->_internal_b());
    }

  }
  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData AddReq::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    AddReq::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*AddReq::GetClassData() const { return &_class_data_; }


void AddReq::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<AddReq*>(&to_msg);
  auto& from = static_cast<const AddReq&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:AddReq)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._impl_._has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    if (cached_has_bits & 0x00000001u) {
      _this->_impl_.a_ = from._impl_.a_;
    }
    if (cached_has_bits & 0x00000002u) {
      _this->_impl_.b_ = from._impl_.b_;
    }
    _this->_impl_._has_bits_[0] |= cached_has_bits;
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void AddReq::CopyFrom(const AddReq& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:AddReq)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool AddReq::IsInitialized() const {
  return true;
}

void AddReq::InternalSwap(AddReq* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_impl_._has_bits_[0], other->_impl_._has_bits_[0]);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(AddReq, _impl_.b_)
      + sizeof(AddReq::_impl_.b_)
      - PROTOBUF_FIELD_OFFSET(AddReq, _impl_.a_)>(
          reinterpret_cast<char*>(&_impl_.a_),
          reinterpret_cast<char*>(&other->_impl_.a_));
}

::PROTOBUF_NAMESPACE_ID::Metadata AddReq::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_test_5fprotocol_2fAddAndStr_2eproto_getter, &descriptor_table_test_5fprotocol_2fAddAndStr_2eproto_once,
      file_level_metadata_test_5fprotocol_2fAddAndStr_2eproto[0]);
}

// ===================================================================

class AddRsp::_Internal {
 public:
  using HasBits = decltype(std::declval<AddRsp>()._impl_._has_bits_);
  static void set_has_result(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
};

AddRsp::AddRsp(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:AddRsp)
}
AddRsp::AddRsp(const AddRsp& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  AddRsp* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){from._impl_._has_bits_}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.result_){}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  _this->_impl_.result_ = from._impl_.result_;
  // @@protoc_insertion_point(copy_constructor:AddRsp)
}

inline void AddRsp::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.result_){0}
  };
}

AddRsp::~AddRsp() {
  // @@protoc_insertion_point(destructor:AddRsp)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void AddRsp::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
}

void AddRsp::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void AddRsp::Clear() {
// @@protoc_insertion_point(message_clear_start:AddRsp)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.result_ = 0;
  _impl_._has_bits_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* AddRsp::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // optional int32 result = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 16)) {
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

uint8_t* AddRsp::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:AddRsp)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  // optional int32 result = 2;
  if (cached_has_bits & 0x00000001u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt32ToArray(2, this->_internal_result(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:AddRsp)
  return target;
}

size_t AddRsp::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:AddRsp)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // optional int32 result = 2;
  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(this->_internal_result());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData AddRsp::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    AddRsp::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*AddRsp::GetClassData() const { return &_class_data_; }


void AddRsp::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<AddRsp*>(&to_msg);
  auto& from = static_cast<const AddRsp&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:AddRsp)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (from._internal_has_result()) {
    _this->_internal_set_result(from._internal_result());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void AddRsp::CopyFrom(const AddRsp& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:AddRsp)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool AddRsp::IsInitialized() const {
  return true;
}

void AddRsp::InternalSwap(AddRsp* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_impl_._has_bits_[0], other->_impl_._has_bits_[0]);
  swap(_impl_.result_, other->_impl_.result_);
}

::PROTOBUF_NAMESPACE_ID::Metadata AddRsp::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_test_5fprotocol_2fAddAndStr_2eproto_getter, &descriptor_table_test_5fprotocol_2fAddAndStr_2eproto_once,
      file_level_metadata_test_5fprotocol_2fAddAndStr_2eproto[1]);
}

// ===================================================================

class EchoReq::_Internal {
 public:
  using HasBits = decltype(std::declval<EchoReq>()._impl_._has_bits_);
  static void set_has_str(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
};

EchoReq::EchoReq(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:EchoReq)
}
EchoReq::EchoReq(const EchoReq& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  EchoReq* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){from._impl_._has_bits_}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.str_){}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  _impl_.str_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.str_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (from._internal_has_str()) {
    _this->_impl_.str_.Set(from._internal_str(), 
      _this->GetArenaForAllocation());
  }
  // @@protoc_insertion_point(copy_constructor:EchoReq)
}

inline void EchoReq::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.str_){}
  };
  _impl_.str_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.str_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
}

EchoReq::~EchoReq() {
  // @@protoc_insertion_point(destructor:EchoReq)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void EchoReq::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.str_.Destroy();
}

void EchoReq::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void EchoReq::Clear() {
// @@protoc_insertion_point(message_clear_start:EchoReq)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    _impl_.str_.ClearNonDefaultToEmpty();
  }
  _impl_._has_bits_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* EchoReq::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // optional string str = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 18)) {
          auto str = _internal_mutable_str();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          #ifndef NDEBUG
          ::_pbi::VerifyUTF8(str, "EchoReq.str");
          #endif  // !NDEBUG
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

uint8_t* EchoReq::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:EchoReq)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  // optional string str = 2;
  if (cached_has_bits & 0x00000001u) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::VerifyUTF8StringNamedField(
      this->_internal_str().data(), static_cast<int>(this->_internal_str().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SERIALIZE,
      "EchoReq.str");
    target = stream->WriteStringMaybeAliased(
        2, this->_internal_str(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:EchoReq)
  return target;
}

size_t EchoReq::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:EchoReq)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // optional string str = 2;
  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_str());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData EchoReq::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    EchoReq::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*EchoReq::GetClassData() const { return &_class_data_; }


void EchoReq::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<EchoReq*>(&to_msg);
  auto& from = static_cast<const EchoReq&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:EchoReq)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (from._internal_has_str()) {
    _this->_internal_set_str(from._internal_str());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void EchoReq::CopyFrom(const EchoReq& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:EchoReq)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool EchoReq::IsInitialized() const {
  return true;
}

void EchoReq::InternalSwap(EchoReq* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_impl_._has_bits_[0], other->_impl_._has_bits_[0]);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.str_, lhs_arena,
      &other->_impl_.str_, rhs_arena
  );
}

::PROTOBUF_NAMESPACE_ID::Metadata EchoReq::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_test_5fprotocol_2fAddAndStr_2eproto_getter, &descriptor_table_test_5fprotocol_2fAddAndStr_2eproto_once,
      file_level_metadata_test_5fprotocol_2fAddAndStr_2eproto[2]);
}

// ===================================================================

class EchoRsp::_Internal {
 public:
  using HasBits = decltype(std::declval<EchoRsp>()._impl_._has_bits_);
  static void set_has_str(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
};

EchoRsp::EchoRsp(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:EchoRsp)
}
EchoRsp::EchoRsp(const EchoRsp& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  EchoRsp* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){from._impl_._has_bits_}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.str_){}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  _impl_.str_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.str_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (from._internal_has_str()) {
    _this->_impl_.str_.Set(from._internal_str(), 
      _this->GetArenaForAllocation());
  }
  // @@protoc_insertion_point(copy_constructor:EchoRsp)
}

inline void EchoRsp::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.str_){}
  };
  _impl_.str_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.str_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
}

EchoRsp::~EchoRsp() {
  // @@protoc_insertion_point(destructor:EchoRsp)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void EchoRsp::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.str_.Destroy();
}

void EchoRsp::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void EchoRsp::Clear() {
// @@protoc_insertion_point(message_clear_start:EchoRsp)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    _impl_.str_.ClearNonDefaultToEmpty();
  }
  _impl_._has_bits_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* EchoRsp::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // optional string str = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 18)) {
          auto str = _internal_mutable_str();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          #ifndef NDEBUG
          ::_pbi::VerifyUTF8(str, "EchoRsp.str");
          #endif  // !NDEBUG
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

uint8_t* EchoRsp::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:EchoRsp)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  // optional string str = 2;
  if (cached_has_bits & 0x00000001u) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::VerifyUTF8StringNamedField(
      this->_internal_str().data(), static_cast<int>(this->_internal_str().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SERIALIZE,
      "EchoRsp.str");
    target = stream->WriteStringMaybeAliased(
        2, this->_internal_str(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:EchoRsp)
  return target;
}

size_t EchoRsp::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:EchoRsp)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // optional string str = 2;
  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_str());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData EchoRsp::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    EchoRsp::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*EchoRsp::GetClassData() const { return &_class_data_; }


void EchoRsp::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<EchoRsp*>(&to_msg);
  auto& from = static_cast<const EchoRsp&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:EchoRsp)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (from._internal_has_str()) {
    _this->_internal_set_str(from._internal_str());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void EchoRsp::CopyFrom(const EchoRsp& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:EchoRsp)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool EchoRsp::IsInitialized() const {
  return true;
}

void EchoRsp::InternalSwap(EchoRsp* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_impl_._has_bits_[0], other->_impl_._has_bits_[0]);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.str_, lhs_arena,
      &other->_impl_.str_, rhs_arena
  );
}

::PROTOBUF_NAMESPACE_ID::Metadata EchoRsp::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_test_5fprotocol_2fAddAndStr_2eproto_getter, &descriptor_table_test_5fprotocol_2fAddAndStr_2eproto_once,
      file_level_metadata_test_5fprotocol_2fAddAndStr_2eproto[3]);
}

// @@protoc_insertion_point(namespace_scope)
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::AddReq*
Arena::CreateMaybeMessage< ::AddReq >(Arena* arena) {
  return Arena::CreateMessageInternal< ::AddReq >(arena);
}
template<> PROTOBUF_NOINLINE ::AddRsp*
Arena::CreateMaybeMessage< ::AddRsp >(Arena* arena) {
  return Arena::CreateMessageInternal< ::AddRsp >(arena);
}
template<> PROTOBUF_NOINLINE ::EchoReq*
Arena::CreateMaybeMessage< ::EchoReq >(Arena* arena) {
  return Arena::CreateMessageInternal< ::EchoReq >(arena);
}
template<> PROTOBUF_NOINLINE ::EchoRsp*
Arena::CreateMaybeMessage< ::EchoRsp >(Arena* arena) {
  return Arena::CreateMessageInternal< ::EchoRsp >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
