// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: GameMessage.proto

#ifndef PROTOBUF_GameMessage_2eproto__INCLUDED
#define PROTOBUF_GameMessage_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3005000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3005001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

namespace protobuf_GameMessage_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[4];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors();
void InitDefaultsGameMessageImpl();
void InitDefaultsGameMessage();
void InitDefaultsGridPointImpl();
void InitDefaultsGridPoint();
void InitDefaultsGridPathImpl();
void InitDefaultsGridPath();
void InitDefaultsGameMessageSetImpl();
void InitDefaultsGameMessageSet();
inline void InitDefaults() {
  InitDefaultsGameMessage();
  InitDefaultsGridPoint();
  InitDefaultsGridPath();
  InitDefaultsGameMessageSet();
}
}  // namespace protobuf_GameMessage_2eproto
class GameMessage;
class GameMessageDefaultTypeInternal;
extern GameMessageDefaultTypeInternal _GameMessage_default_instance_;
class GameMessageSet;
class GameMessageSetDefaultTypeInternal;
extern GameMessageSetDefaultTypeInternal _GameMessageSet_default_instance_;
class GridPath;
class GridPathDefaultTypeInternal;
extern GridPathDefaultTypeInternal _GridPath_default_instance_;
class GridPoint;
class GridPointDefaultTypeInternal;
extern GridPointDefaultTypeInternal _GridPoint_default_instance_;

enum GameMessage_CmdCode {
  GameMessage_CmdCode_CRT = 0,
  GameMessage_CmdCode_MOV = 1,
  GameMessage_CmdCode_ATK = 2,
  GameMessage_CmdCode_GameMessage_CmdCode_INT_MIN_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32min,
  GameMessage_CmdCode_GameMessage_CmdCode_INT_MAX_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32max
};
bool GameMessage_CmdCode_IsValid(int value);
const GameMessage_CmdCode GameMessage_CmdCode_CmdCode_MIN = GameMessage_CmdCode_CRT;
const GameMessage_CmdCode GameMessage_CmdCode_CmdCode_MAX = GameMessage_CmdCode_ATK;
const int GameMessage_CmdCode_CmdCode_ARRAYSIZE = GameMessage_CmdCode_CmdCode_MAX + 1;

const ::google::protobuf::EnumDescriptor* GameMessage_CmdCode_descriptor();
inline const ::std::string& GameMessage_CmdCode_Name(GameMessage_CmdCode value) {
  return ::google::protobuf::internal::NameOfEnum(
    GameMessage_CmdCode_descriptor(), value);
}
inline bool GameMessage_CmdCode_Parse(
    const ::std::string& name, GameMessage_CmdCode* value) {
  return ::google::protobuf::internal::ParseNamedEnum<GameMessage_CmdCode>(
    GameMessage_CmdCode_descriptor(), name, value);
}
// ===================================================================

class GameMessage : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:GameMessage) */ {
 public:
  GameMessage();
  virtual ~GameMessage();

  GameMessage(const GameMessage& from);

  inline GameMessage& operator=(const GameMessage& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  GameMessage(GameMessage&& from) noexcept
    : GameMessage() {
    *this = ::std::move(from);
  }

  inline GameMessage& operator=(GameMessage&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const GameMessage& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const GameMessage* internal_default_instance() {
    return reinterpret_cast<const GameMessage*>(
               &_GameMessage_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(GameMessage* other);
  friend void swap(GameMessage& a, GameMessage& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline GameMessage* New() const PROTOBUF_FINAL { return New(NULL); }

  GameMessage* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const GameMessage& from);
  void MergeFrom(const GameMessage& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(GameMessage* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  typedef GameMessage_CmdCode CmdCode;
  static const CmdCode CRT =
    GameMessage_CmdCode_CRT;
  static const CmdCode MOV =
    GameMessage_CmdCode_MOV;
  static const CmdCode ATK =
    GameMessage_CmdCode_ATK;
  static inline bool CmdCode_IsValid(int value) {
    return GameMessage_CmdCode_IsValid(value);
  }
  static const CmdCode CmdCode_MIN =
    GameMessage_CmdCode_CmdCode_MIN;
  static const CmdCode CmdCode_MAX =
    GameMessage_CmdCode_CmdCode_MAX;
  static const int CmdCode_ARRAYSIZE =
    GameMessage_CmdCode_CmdCode_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  CmdCode_descriptor() {
    return GameMessage_CmdCode_descriptor();
  }
  static inline const ::std::string& CmdCode_Name(CmdCode value) {
    return GameMessage_CmdCode_Name(value);
  }
  static inline bool CmdCode_Parse(const ::std::string& name,
      CmdCode* value) {
    return GameMessage_CmdCode_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  // .GridPath grid_path = 5;
  bool has_grid_path() const;
  void clear_grid_path();
  static const int kGridPathFieldNumber = 5;
  const ::GridPath& grid_path() const;
  ::GridPath* release_grid_path();
  ::GridPath* mutable_grid_path();
  void set_allocated_grid_path(::GridPath* grid_path);

  // .GameMessage.CmdCode cmd_code = 1;
  void clear_cmd_code();
  static const int kCmdCodeFieldNumber = 1;
  ::GameMessage_CmdCode cmd_code() const;
  void set_cmd_code(::GameMessage_CmdCode value);

  // int32 unit_0 = 2;
  void clear_unit_0();
  static const int kUnit0FieldNumber = 2;
  ::google::protobuf::int32 unit_0() const;
  void set_unit_0(::google::protobuf::int32 value);

  // int32 unit_1 = 3;
  void clear_unit_1();
  static const int kUnit1FieldNumber = 3;
  ::google::protobuf::int32 unit_1() const;
  void set_unit_1(::google::protobuf::int32 value);

  // int32 damage = 4;
  void clear_damage();
  static const int kDamageFieldNumber = 4;
  ::google::protobuf::int32 damage() const;
  void set_damage(::google::protobuf::int32 value);

  // int32 camp = 6;
  void clear_camp();
  static const int kCampFieldNumber = 6;
  ::google::protobuf::int32 camp() const;
  void set_camp(::google::protobuf::int32 value);

  // int32 unit_type = 7;
  void clear_unit_type();
  static const int kUnitTypeFieldNumber = 7;
  ::google::protobuf::int32 unit_type() const;
  void set_unit_type(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:GameMessage)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::GridPath* grid_path_;
  int cmd_code_;
  ::google::protobuf::int32 unit_0_;
  ::google::protobuf::int32 unit_1_;
  ::google::protobuf::int32 damage_;
  ::google::protobuf::int32 camp_;
  ::google::protobuf::int32 unit_type_;
  mutable int _cached_size_;
  friend struct ::protobuf_GameMessage_2eproto::TableStruct;
  friend void ::protobuf_GameMessage_2eproto::InitDefaultsGameMessageImpl();
};
// -------------------------------------------------------------------

class GridPoint : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:GridPoint) */ {
 public:
  GridPoint();
  virtual ~GridPoint();

  GridPoint(const GridPoint& from);

  inline GridPoint& operator=(const GridPoint& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  GridPoint(GridPoint&& from) noexcept
    : GridPoint() {
    *this = ::std::move(from);
  }

  inline GridPoint& operator=(GridPoint&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const GridPoint& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const GridPoint* internal_default_instance() {
    return reinterpret_cast<const GridPoint*>(
               &_GridPoint_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    1;

  void Swap(GridPoint* other);
  friend void swap(GridPoint& a, GridPoint& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline GridPoint* New() const PROTOBUF_FINAL { return New(NULL); }

  GridPoint* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const GridPoint& from);
  void MergeFrom(const GridPoint& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(GridPoint* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // int32 x = 1;
  void clear_x();
  static const int kXFieldNumber = 1;
  ::google::protobuf::int32 x() const;
  void set_x(::google::protobuf::int32 value);

  // int32 y = 2;
  void clear_y();
  static const int kYFieldNumber = 2;
  ::google::protobuf::int32 y() const;
  void set_y(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:GridPoint)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::int32 x_;
  ::google::protobuf::int32 y_;
  mutable int _cached_size_;
  friend struct ::protobuf_GameMessage_2eproto::TableStruct;
  friend void ::protobuf_GameMessage_2eproto::InitDefaultsGridPointImpl();
};
// -------------------------------------------------------------------

class GridPath : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:GridPath) */ {
 public:
  GridPath();
  virtual ~GridPath();

  GridPath(const GridPath& from);

  inline GridPath& operator=(const GridPath& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  GridPath(GridPath&& from) noexcept
    : GridPath() {
    *this = ::std::move(from);
  }

  inline GridPath& operator=(GridPath&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const GridPath& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const GridPath* internal_default_instance() {
    return reinterpret_cast<const GridPath*>(
               &_GridPath_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    2;

  void Swap(GridPath* other);
  friend void swap(GridPath& a, GridPath& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline GridPath* New() const PROTOBUF_FINAL { return New(NULL); }

  GridPath* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const GridPath& from);
  void MergeFrom(const GridPath& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(GridPath* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // repeated .GridPoint grid_point = 1;
  int grid_point_size() const;
  void clear_grid_point();
  static const int kGridPointFieldNumber = 1;
  const ::GridPoint& grid_point(int index) const;
  ::GridPoint* mutable_grid_point(int index);
  ::GridPoint* add_grid_point();
  ::google::protobuf::RepeatedPtrField< ::GridPoint >*
      mutable_grid_point();
  const ::google::protobuf::RepeatedPtrField< ::GridPoint >&
      grid_point() const;

  // @@protoc_insertion_point(class_scope:GridPath)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::RepeatedPtrField< ::GridPoint > grid_point_;
  mutable int _cached_size_;
  friend struct ::protobuf_GameMessage_2eproto::TableStruct;
  friend void ::protobuf_GameMessage_2eproto::InitDefaultsGridPathImpl();
};
// -------------------------------------------------------------------

class GameMessageSet : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:GameMessageSet) */ {
 public:
  GameMessageSet();
  virtual ~GameMessageSet();

  GameMessageSet(const GameMessageSet& from);

  inline GameMessageSet& operator=(const GameMessageSet& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  GameMessageSet(GameMessageSet&& from) noexcept
    : GameMessageSet() {
    *this = ::std::move(from);
  }

  inline GameMessageSet& operator=(GameMessageSet&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const GameMessageSet& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const GameMessageSet* internal_default_instance() {
    return reinterpret_cast<const GameMessageSet*>(
               &_GameMessageSet_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    3;

  void Swap(GameMessageSet* other);
  friend void swap(GameMessageSet& a, GameMessageSet& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline GameMessageSet* New() const PROTOBUF_FINAL { return New(NULL); }

  GameMessageSet* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const GameMessageSet& from);
  void MergeFrom(const GameMessageSet& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(GameMessageSet* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // repeated .GameMessage game_message = 1;
  int game_message_size() const;
  void clear_game_message();
  static const int kGameMessageFieldNumber = 1;
  const ::GameMessage& game_message(int index) const;
  ::GameMessage* mutable_game_message(int index);
  ::GameMessage* add_game_message();
  ::google::protobuf::RepeatedPtrField< ::GameMessage >*
      mutable_game_message();
  const ::google::protobuf::RepeatedPtrField< ::GameMessage >&
      game_message() const;

  // @@protoc_insertion_point(class_scope:GameMessageSet)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::RepeatedPtrField< ::GameMessage > game_message_;
  mutable int _cached_size_;
  friend struct ::protobuf_GameMessage_2eproto::TableStruct;
  friend void ::protobuf_GameMessage_2eproto::InitDefaultsGameMessageSetImpl();
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// GameMessage

// .GameMessage.CmdCode cmd_code = 1;
inline void GameMessage::clear_cmd_code() {
  cmd_code_ = 0;
}
inline ::GameMessage_CmdCode GameMessage::cmd_code() const {
  // @@protoc_insertion_point(field_get:GameMessage.cmd_code)
  return static_cast< ::GameMessage_CmdCode >(cmd_code_);
}
inline void GameMessage::set_cmd_code(::GameMessage_CmdCode value) {
  
  cmd_code_ = value;
  // @@protoc_insertion_point(field_set:GameMessage.cmd_code)
}

// int32 unit_0 = 2;
inline void GameMessage::clear_unit_0() {
  unit_0_ = 0;
}
inline ::google::protobuf::int32 GameMessage::unit_0() const {
  // @@protoc_insertion_point(field_get:GameMessage.unit_0)
  return unit_0_;
}
inline void GameMessage::set_unit_0(::google::protobuf::int32 value) {
  
  unit_0_ = value;
  // @@protoc_insertion_point(field_set:GameMessage.unit_0)
}

// int32 unit_1 = 3;
inline void GameMessage::clear_unit_1() {
  unit_1_ = 0;
}
inline ::google::protobuf::int32 GameMessage::unit_1() const {
  // @@protoc_insertion_point(field_get:GameMessage.unit_1)
  return unit_1_;
}
inline void GameMessage::set_unit_1(::google::protobuf::int32 value) {
  
  unit_1_ = value;
  // @@protoc_insertion_point(field_set:GameMessage.unit_1)
}

// int32 damage = 4;
inline void GameMessage::clear_damage() {
  damage_ = 0;
}
inline ::google::protobuf::int32 GameMessage::damage() const {
  // @@protoc_insertion_point(field_get:GameMessage.damage)
  return damage_;
}
inline void GameMessage::set_damage(::google::protobuf::int32 value) {
  
  damage_ = value;
  // @@protoc_insertion_point(field_set:GameMessage.damage)
}

// .GridPath grid_path = 5;
inline bool GameMessage::has_grid_path() const {
  return this != internal_default_instance() && grid_path_ != NULL;
}
inline void GameMessage::clear_grid_path() {
  if (GetArenaNoVirtual() == NULL && grid_path_ != NULL) {
    delete grid_path_;
  }
  grid_path_ = NULL;
}
inline const ::GridPath& GameMessage::grid_path() const {
  const ::GridPath* p = grid_path_;
  // @@protoc_insertion_point(field_get:GameMessage.grid_path)
  return p != NULL ? *p : *reinterpret_cast<const ::GridPath*>(
      &::_GridPath_default_instance_);
}
inline ::GridPath* GameMessage::release_grid_path() {
  // @@protoc_insertion_point(field_release:GameMessage.grid_path)
  
  ::GridPath* temp = grid_path_;
  grid_path_ = NULL;
  return temp;
}
inline ::GridPath* GameMessage::mutable_grid_path() {
  
  if (grid_path_ == NULL) {
    grid_path_ = new ::GridPath;
  }
  // @@protoc_insertion_point(field_mutable:GameMessage.grid_path)
  return grid_path_;
}
inline void GameMessage::set_allocated_grid_path(::GridPath* grid_path) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete grid_path_;
  }
  if (grid_path) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      grid_path = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, grid_path, submessage_arena);
    }
    
  } else {
    
  }
  grid_path_ = grid_path;
  // @@protoc_insertion_point(field_set_allocated:GameMessage.grid_path)
}

// int32 camp = 6;
inline void GameMessage::clear_camp() {
  camp_ = 0;
}
inline ::google::protobuf::int32 GameMessage::camp() const {
  // @@protoc_insertion_point(field_get:GameMessage.camp)
  return camp_;
}
inline void GameMessage::set_camp(::google::protobuf::int32 value) {
  
  camp_ = value;
  // @@protoc_insertion_point(field_set:GameMessage.camp)
}

// int32 unit_type = 7;
inline void GameMessage::clear_unit_type() {
  unit_type_ = 0;
}
inline ::google::protobuf::int32 GameMessage::unit_type() const {
  // @@protoc_insertion_point(field_get:GameMessage.unit_type)
  return unit_type_;
}
inline void GameMessage::set_unit_type(::google::protobuf::int32 value) {
  
  unit_type_ = value;
  // @@protoc_insertion_point(field_set:GameMessage.unit_type)
}

// -------------------------------------------------------------------

// GridPoint

// int32 x = 1;
inline void GridPoint::clear_x() {
  x_ = 0;
}
inline ::google::protobuf::int32 GridPoint::x() const {
  // @@protoc_insertion_point(field_get:GridPoint.x)
  return x_;
}
inline void GridPoint::set_x(::google::protobuf::int32 value) {
  
  x_ = value;
  // @@protoc_insertion_point(field_set:GridPoint.x)
}

// int32 y = 2;
inline void GridPoint::clear_y() {
  y_ = 0;
}
inline ::google::protobuf::int32 GridPoint::y() const {
  // @@protoc_insertion_point(field_get:GridPoint.y)
  return y_;
}
inline void GridPoint::set_y(::google::protobuf::int32 value) {
  
  y_ = value;
  // @@protoc_insertion_point(field_set:GridPoint.y)
}

// -------------------------------------------------------------------

// GridPath

// repeated .GridPoint grid_point = 1;
inline int GridPath::grid_point_size() const {
  return grid_point_.size();
}
inline void GridPath::clear_grid_point() {
  grid_point_.Clear();
}
inline const ::GridPoint& GridPath::grid_point(int index) const {
  // @@protoc_insertion_point(field_get:GridPath.grid_point)
  return grid_point_.Get(index);
}
inline ::GridPoint* GridPath::mutable_grid_point(int index) {
  // @@protoc_insertion_point(field_mutable:GridPath.grid_point)
  return grid_point_.Mutable(index);
}
inline ::GridPoint* GridPath::add_grid_point() {
  // @@protoc_insertion_point(field_add:GridPath.grid_point)
  return grid_point_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::GridPoint >*
GridPath::mutable_grid_point() {
  // @@protoc_insertion_point(field_mutable_list:GridPath.grid_point)
  return &grid_point_;
}
inline const ::google::protobuf::RepeatedPtrField< ::GridPoint >&
GridPath::grid_point() const {
  // @@protoc_insertion_point(field_list:GridPath.grid_point)
  return grid_point_;
}

// -------------------------------------------------------------------

// GameMessageSet

// repeated .GameMessage game_message = 1;
inline int GameMessageSet::game_message_size() const {
  return game_message_.size();
}
inline void GameMessageSet::clear_game_message() {
  game_message_.Clear();
}
inline const ::GameMessage& GameMessageSet::game_message(int index) const {
  // @@protoc_insertion_point(field_get:GameMessageSet.game_message)
  return game_message_.Get(index);
}
inline ::GameMessage* GameMessageSet::mutable_game_message(int index) {
  // @@protoc_insertion_point(field_mutable:GameMessageSet.game_message)
  return game_message_.Mutable(index);
}
inline ::GameMessage* GameMessageSet::add_game_message() {
  // @@protoc_insertion_point(field_add:GameMessageSet.game_message)
  return game_message_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::GameMessage >*
GameMessageSet::mutable_game_message() {
  // @@protoc_insertion_point(field_mutable_list:GameMessageSet.game_message)
  return &game_message_;
}
inline const ::google::protobuf::RepeatedPtrField< ::GameMessage >&
GameMessageSet::game_message() const {
  // @@protoc_insertion_point(field_list:GameMessageSet.game_message)
  return game_message_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)


namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::GameMessage_CmdCode> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::GameMessage_CmdCode>() {
  return ::GameMessage_CmdCode_descriptor();
}

}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_GameMessage_2eproto__INCLUDED
