// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: alpha_svr.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_alpha_5fsvr_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_alpha_5fsvr_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3009000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3009001 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
#include <google/protobuf/wrappers.pb.h>
#include <google/protobuf/empty.pb.h>
#include "phxrpc/rpc/phxrpc.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_alpha_5fsvr_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_alpha_5fsvr_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[4]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_alpha_5fsvr_2eproto;
namespace alphasvr {
class AddSomeDigitsReq;
class AddSomeDigitsReqDefaultTypeInternal;
extern AddSomeDigitsReqDefaultTypeInternal _AddSomeDigitsReq_default_instance_;
class AddSomeDigitsResp;
class AddSomeDigitsRespDefaultTypeInternal;
extern AddSomeDigitsRespDefaultTypeInternal _AddSomeDigitsResp_default_instance_;
class AddTwoDigitsReq;
class AddTwoDigitsReqDefaultTypeInternal;
extern AddTwoDigitsReqDefaultTypeInternal _AddTwoDigitsReq_default_instance_;
class AddTwoDigitsResp;
class AddTwoDigitsRespDefaultTypeInternal;
extern AddTwoDigitsRespDefaultTypeInternal _AddTwoDigitsResp_default_instance_;
}  // namespace alphasvr
PROTOBUF_NAMESPACE_OPEN
template<> ::alphasvr::AddSomeDigitsReq* Arena::CreateMaybeMessage<::alphasvr::AddSomeDigitsReq>(Arena*);
template<> ::alphasvr::AddSomeDigitsResp* Arena::CreateMaybeMessage<::alphasvr::AddSomeDigitsResp>(Arena*);
template<> ::alphasvr::AddTwoDigitsReq* Arena::CreateMaybeMessage<::alphasvr::AddTwoDigitsReq>(Arena*);
template<> ::alphasvr::AddTwoDigitsResp* Arena::CreateMaybeMessage<::alphasvr::AddTwoDigitsResp>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace alphasvr {

// ===================================================================

class AddTwoDigitsReq :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:alphasvr.AddTwoDigitsReq) */ {
 public:
  AddTwoDigitsReq();
  virtual ~AddTwoDigitsReq();

  AddTwoDigitsReq(const AddTwoDigitsReq& from);
  AddTwoDigitsReq(AddTwoDigitsReq&& from) noexcept
    : AddTwoDigitsReq() {
    *this = ::std::move(from);
  }

  inline AddTwoDigitsReq& operator=(const AddTwoDigitsReq& from) {
    CopyFrom(from);
    return *this;
  }
  inline AddTwoDigitsReq& operator=(AddTwoDigitsReq&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }
  inline ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const AddTwoDigitsReq& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const AddTwoDigitsReq* internal_default_instance() {
    return reinterpret_cast<const AddTwoDigitsReq*>(
               &_AddTwoDigitsReq_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(AddTwoDigitsReq& a, AddTwoDigitsReq& b) {
    a.Swap(&b);
  }
  inline void Swap(AddTwoDigitsReq* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline AddTwoDigitsReq* New() const final {
    return CreateMaybeMessage<AddTwoDigitsReq>(nullptr);
  }

  AddTwoDigitsReq* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<AddTwoDigitsReq>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const AddTwoDigitsReq& from);
  void MergeFrom(const AddTwoDigitsReq& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* InternalSerializeWithCachedSizesToArray(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(AddTwoDigitsReq* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "alphasvr.AddTwoDigitsReq";
  }
  private:
  inline ::PROTOBUF_NAMESPACE_ID::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_alpha_5fsvr_2eproto);
    return ::descriptor_table_alpha_5fsvr_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kLhsFieldNumber = 1,
    kRhsFieldNumber = 2,
  };
  // optional int32 lhs = 1;
  bool has_lhs() const;
  private:
  bool _internal_has_lhs() const;
  public:
  void clear_lhs();
  ::PROTOBUF_NAMESPACE_ID::int32 lhs() const;
  void set_lhs(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_lhs() const;
  void _internal_set_lhs(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // optional int32 rhs = 2;
  bool has_rhs() const;
  private:
  bool _internal_has_rhs() const;
  public:
  void clear_rhs();
  ::PROTOBUF_NAMESPACE_ID::int32 rhs() const;
  void set_rhs(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_rhs() const;
  void _internal_set_rhs(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // @@protoc_insertion_point(class_scope:alphasvr.AddTwoDigitsReq)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::int32 lhs_;
  ::PROTOBUF_NAMESPACE_ID::int32 rhs_;
  friend struct ::TableStruct_alpha_5fsvr_2eproto;
};
// -------------------------------------------------------------------

class AddTwoDigitsResp :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:alphasvr.AddTwoDigitsResp) */ {
 public:
  AddTwoDigitsResp();
  virtual ~AddTwoDigitsResp();

  AddTwoDigitsResp(const AddTwoDigitsResp& from);
  AddTwoDigitsResp(AddTwoDigitsResp&& from) noexcept
    : AddTwoDigitsResp() {
    *this = ::std::move(from);
  }

  inline AddTwoDigitsResp& operator=(const AddTwoDigitsResp& from) {
    CopyFrom(from);
    return *this;
  }
  inline AddTwoDigitsResp& operator=(AddTwoDigitsResp&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }
  inline ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const AddTwoDigitsResp& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const AddTwoDigitsResp* internal_default_instance() {
    return reinterpret_cast<const AddTwoDigitsResp*>(
               &_AddTwoDigitsResp_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(AddTwoDigitsResp& a, AddTwoDigitsResp& b) {
    a.Swap(&b);
  }
  inline void Swap(AddTwoDigitsResp* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline AddTwoDigitsResp* New() const final {
    return CreateMaybeMessage<AddTwoDigitsResp>(nullptr);
  }

  AddTwoDigitsResp* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<AddTwoDigitsResp>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const AddTwoDigitsResp& from);
  void MergeFrom(const AddTwoDigitsResp& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* InternalSerializeWithCachedSizesToArray(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(AddTwoDigitsResp* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "alphasvr.AddTwoDigitsResp";
  }
  private:
  inline ::PROTOBUF_NAMESPACE_ID::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_alpha_5fsvr_2eproto);
    return ::descriptor_table_alpha_5fsvr_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kSumFieldNumber = 1,
  };
  // optional int32 sum = 1;
  bool has_sum() const;
  private:
  bool _internal_has_sum() const;
  public:
  void clear_sum();
  ::PROTOBUF_NAMESPACE_ID::int32 sum() const;
  void set_sum(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_sum() const;
  void _internal_set_sum(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // @@protoc_insertion_point(class_scope:alphasvr.AddTwoDigitsResp)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::int32 sum_;
  friend struct ::TableStruct_alpha_5fsvr_2eproto;
};
// -------------------------------------------------------------------

class AddSomeDigitsReq :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:alphasvr.AddSomeDigitsReq) */ {
 public:
  AddSomeDigitsReq();
  virtual ~AddSomeDigitsReq();

  AddSomeDigitsReq(const AddSomeDigitsReq& from);
  AddSomeDigitsReq(AddSomeDigitsReq&& from) noexcept
    : AddSomeDigitsReq() {
    *this = ::std::move(from);
  }

  inline AddSomeDigitsReq& operator=(const AddSomeDigitsReq& from) {
    CopyFrom(from);
    return *this;
  }
  inline AddSomeDigitsReq& operator=(AddSomeDigitsReq&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }
  inline ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const AddSomeDigitsReq& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const AddSomeDigitsReq* internal_default_instance() {
    return reinterpret_cast<const AddSomeDigitsReq*>(
               &_AddSomeDigitsReq_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    2;

  friend void swap(AddSomeDigitsReq& a, AddSomeDigitsReq& b) {
    a.Swap(&b);
  }
  inline void Swap(AddSomeDigitsReq* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline AddSomeDigitsReq* New() const final {
    return CreateMaybeMessage<AddSomeDigitsReq>(nullptr);
  }

  AddSomeDigitsReq* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<AddSomeDigitsReq>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const AddSomeDigitsReq& from);
  void MergeFrom(const AddSomeDigitsReq& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* InternalSerializeWithCachedSizesToArray(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(AddSomeDigitsReq* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "alphasvr.AddSomeDigitsReq";
  }
  private:
  inline ::PROTOBUF_NAMESPACE_ID::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_alpha_5fsvr_2eproto);
    return ::descriptor_table_alpha_5fsvr_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kNumsFieldNumber = 1,
  };
  // repeated int32 nums = 1;
  int nums_size() const;
  private:
  int _internal_nums_size() const;
  public:
  void clear_nums();
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_nums(int index) const;
  const ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >&
      _internal_nums() const;
  void _internal_add_nums(::PROTOBUF_NAMESPACE_ID::int32 value);
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >*
      _internal_mutable_nums();
  public:
  ::PROTOBUF_NAMESPACE_ID::int32 nums(int index) const;
  void set_nums(int index, ::PROTOBUF_NAMESPACE_ID::int32 value);
  void add_nums(::PROTOBUF_NAMESPACE_ID::int32 value);
  const ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >&
      nums() const;
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >*
      mutable_nums();

  // @@protoc_insertion_point(class_scope:alphasvr.AddSomeDigitsReq)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 > nums_;
  friend struct ::TableStruct_alpha_5fsvr_2eproto;
};
// -------------------------------------------------------------------

class AddSomeDigitsResp :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:alphasvr.AddSomeDigitsResp) */ {
 public:
  AddSomeDigitsResp();
  virtual ~AddSomeDigitsResp();

  AddSomeDigitsResp(const AddSomeDigitsResp& from);
  AddSomeDigitsResp(AddSomeDigitsResp&& from) noexcept
    : AddSomeDigitsResp() {
    *this = ::std::move(from);
  }

  inline AddSomeDigitsResp& operator=(const AddSomeDigitsResp& from) {
    CopyFrom(from);
    return *this;
  }
  inline AddSomeDigitsResp& operator=(AddSomeDigitsResp&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }
  inline ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const AddSomeDigitsResp& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const AddSomeDigitsResp* internal_default_instance() {
    return reinterpret_cast<const AddSomeDigitsResp*>(
               &_AddSomeDigitsResp_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    3;

  friend void swap(AddSomeDigitsResp& a, AddSomeDigitsResp& b) {
    a.Swap(&b);
  }
  inline void Swap(AddSomeDigitsResp* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline AddSomeDigitsResp* New() const final {
    return CreateMaybeMessage<AddSomeDigitsResp>(nullptr);
  }

  AddSomeDigitsResp* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<AddSomeDigitsResp>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const AddSomeDigitsResp& from);
  void MergeFrom(const AddSomeDigitsResp& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* InternalSerializeWithCachedSizesToArray(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(AddSomeDigitsResp* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "alphasvr.AddSomeDigitsResp";
  }
  private:
  inline ::PROTOBUF_NAMESPACE_ID::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_alpha_5fsvr_2eproto);
    return ::descriptor_table_alpha_5fsvr_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kSumFieldNumber = 1,
  };
  // optional int32 sum = 1;
  bool has_sum() const;
  private:
  bool _internal_has_sum() const;
  public:
  void clear_sum();
  ::PROTOBUF_NAMESPACE_ID::int32 sum() const;
  void set_sum(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_sum() const;
  void _internal_set_sum(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // @@protoc_insertion_point(class_scope:alphasvr.AddSomeDigitsResp)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::int32 sum_;
  friend struct ::TableStruct_alpha_5fsvr_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// AddTwoDigitsReq

// optional int32 lhs = 1;
inline bool AddTwoDigitsReq::_internal_has_lhs() const {
  bool value = (_has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline bool AddTwoDigitsReq::has_lhs() const {
  return _internal_has_lhs();
}
inline void AddTwoDigitsReq::clear_lhs() {
  lhs_ = 0;
  _has_bits_[0] &= ~0x00000001u;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 AddTwoDigitsReq::_internal_lhs() const {
  return lhs_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 AddTwoDigitsReq::lhs() const {
  // @@protoc_insertion_point(field_get:alphasvr.AddTwoDigitsReq.lhs)
  return _internal_lhs();
}
inline void AddTwoDigitsReq::_internal_set_lhs(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _has_bits_[0] |= 0x00000001u;
  lhs_ = value;
}
inline void AddTwoDigitsReq::set_lhs(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_lhs(value);
  // @@protoc_insertion_point(field_set:alphasvr.AddTwoDigitsReq.lhs)
}

// optional int32 rhs = 2;
inline bool AddTwoDigitsReq::_internal_has_rhs() const {
  bool value = (_has_bits_[0] & 0x00000002u) != 0;
  return value;
}
inline bool AddTwoDigitsReq::has_rhs() const {
  return _internal_has_rhs();
}
inline void AddTwoDigitsReq::clear_rhs() {
  rhs_ = 0;
  _has_bits_[0] &= ~0x00000002u;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 AddTwoDigitsReq::_internal_rhs() const {
  return rhs_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 AddTwoDigitsReq::rhs() const {
  // @@protoc_insertion_point(field_get:alphasvr.AddTwoDigitsReq.rhs)
  return _internal_rhs();
}
inline void AddTwoDigitsReq::_internal_set_rhs(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _has_bits_[0] |= 0x00000002u;
  rhs_ = value;
}
inline void AddTwoDigitsReq::set_rhs(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_rhs(value);
  // @@protoc_insertion_point(field_set:alphasvr.AddTwoDigitsReq.rhs)
}

// -------------------------------------------------------------------

// AddTwoDigitsResp

// optional int32 sum = 1;
inline bool AddTwoDigitsResp::_internal_has_sum() const {
  bool value = (_has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline bool AddTwoDigitsResp::has_sum() const {
  return _internal_has_sum();
}
inline void AddTwoDigitsResp::clear_sum() {
  sum_ = 0;
  _has_bits_[0] &= ~0x00000001u;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 AddTwoDigitsResp::_internal_sum() const {
  return sum_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 AddTwoDigitsResp::sum() const {
  // @@protoc_insertion_point(field_get:alphasvr.AddTwoDigitsResp.sum)
  return _internal_sum();
}
inline void AddTwoDigitsResp::_internal_set_sum(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _has_bits_[0] |= 0x00000001u;
  sum_ = value;
}
inline void AddTwoDigitsResp::set_sum(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_sum(value);
  // @@protoc_insertion_point(field_set:alphasvr.AddTwoDigitsResp.sum)
}

// -------------------------------------------------------------------

// AddSomeDigitsReq

// repeated int32 nums = 1;
inline int AddSomeDigitsReq::_internal_nums_size() const {
  return nums_.size();
}
inline int AddSomeDigitsReq::nums_size() const {
  return _internal_nums_size();
}
inline void AddSomeDigitsReq::clear_nums() {
  nums_.Clear();
}
inline ::PROTOBUF_NAMESPACE_ID::int32 AddSomeDigitsReq::_internal_nums(int index) const {
  return nums_.Get(index);
}
inline ::PROTOBUF_NAMESPACE_ID::int32 AddSomeDigitsReq::nums(int index) const {
  // @@protoc_insertion_point(field_get:alphasvr.AddSomeDigitsReq.nums)
  return _internal_nums(index);
}
inline void AddSomeDigitsReq::set_nums(int index, ::PROTOBUF_NAMESPACE_ID::int32 value) {
  nums_.Set(index, value);
  // @@protoc_insertion_point(field_set:alphasvr.AddSomeDigitsReq.nums)
}
inline void AddSomeDigitsReq::_internal_add_nums(::PROTOBUF_NAMESPACE_ID::int32 value) {
  nums_.Add(value);
}
inline void AddSomeDigitsReq::add_nums(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_add_nums(value);
  // @@protoc_insertion_point(field_add:alphasvr.AddSomeDigitsReq.nums)
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >&
AddSomeDigitsReq::_internal_nums() const {
  return nums_;
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >&
AddSomeDigitsReq::nums() const {
  // @@protoc_insertion_point(field_list:alphasvr.AddSomeDigitsReq.nums)
  return _internal_nums();
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >*
AddSomeDigitsReq::_internal_mutable_nums() {
  return &nums_;
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >*
AddSomeDigitsReq::mutable_nums() {
  // @@protoc_insertion_point(field_mutable_list:alphasvr.AddSomeDigitsReq.nums)
  return _internal_mutable_nums();
}

// -------------------------------------------------------------------

// AddSomeDigitsResp

// optional int32 sum = 1;
inline bool AddSomeDigitsResp::_internal_has_sum() const {
  bool value = (_has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline bool AddSomeDigitsResp::has_sum() const {
  return _internal_has_sum();
}
inline void AddSomeDigitsResp::clear_sum() {
  sum_ = 0;
  _has_bits_[0] &= ~0x00000001u;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 AddSomeDigitsResp::_internal_sum() const {
  return sum_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 AddSomeDigitsResp::sum() const {
  // @@protoc_insertion_point(field_get:alphasvr.AddSomeDigitsResp.sum)
  return _internal_sum();
}
inline void AddSomeDigitsResp::_internal_set_sum(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _has_bits_[0] |= 0x00000001u;
  sum_ = value;
}
inline void AddSomeDigitsResp::set_sum(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_sum(value);
  // @@protoc_insertion_point(field_set:alphasvr.AddSomeDigitsResp.sum)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace alphasvr

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_alpha_5fsvr_2eproto
