// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: GameMessage.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "GameMessage.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/io/zero_copy_stream_impl_lite.h>
// @@protoc_insertion_point(includes)
class GameMessageDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<GameMessage> {
} _GameMessage_default_instance_;
class GridPointDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<MsgGridPoint> {
} _GridPoint_default_instance_;
class GridPathDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<MsgGridPath> {
} _GridPath_default_instance_;
class GameMessageSetDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<GameMessageSet> {
} _GameMessageSet_default_instance_;

void GameMessage::genGameMessage(CmdCode _cmd_code, int _unit_0, int _unit_1, int _damage, int _camp, int _unit_type, const GridPath& _grid_path)
{
	set_cmd_code(_cmd_code);
	set_unit_0(_unit_0);
	set_unit_1(_unit_1);
	set_damage(_damage);
	set_camp(_camp);
	set_unit_type(_unit_type);
	MsgGridPath* msg_grid_path = mutable_grid_path();
	for (const auto & gp : _grid_path)
	{
		MsgGridPoint* msg_grid_point = msg_grid_path->add_grid_point();
		msg_grid_point->set_x(gp.x);
		msg_grid_point->set_y(gp.y);
	}
}

namespace protobuf_GameMessage_2eproto {

PROTOBUF_CONSTEXPR_VAR ::google::protobuf::internal::ParseTableField
    const TableStruct::entries[] = {
  {0, 0, 0, ::google::protobuf::internal::kInvalidMask, 0, 0},
};

PROTOBUF_CONSTEXPR_VAR ::google::protobuf::internal::AuxillaryParseTableField
    const TableStruct::aux[] = {
  ::google::protobuf::internal::AuxillaryParseTableField(),
};
PROTOBUF_CONSTEXPR_VAR ::google::protobuf::internal::ParseTable const
    TableStruct::schema[] = {
  { NULL, NULL, 0, -1, -1, false },
  { NULL, NULL, 0, -1, -1, false },
  { NULL, NULL, 0, -1, -1, false },
  { NULL, NULL, 0, -1, -1, false },
};


void TableStruct::Shutdown() {
  _GameMessage_default_instance_.Shutdown();
  _GridPoint_default_instance_.Shutdown();
  _GridPath_default_instance_.Shutdown();
  _GameMessageSet_default_instance_.Shutdown();
}

void TableStruct::InitDefaultsImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::internal::InitProtobufDefaults();
  _GameMessage_default_instance_.DefaultConstruct();
  _GridPoint_default_instance_.DefaultConstruct();
  _GridPath_default_instance_.DefaultConstruct();
  _GameMessageSet_default_instance_.DefaultConstruct();
  _GameMessage_default_instance_.get_mutable()->grid_path_ = const_cast< ::MsgGridPath*>(
      ::MsgGridPath::internal_default_instance());
}

void InitDefaults() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &TableStruct::InitDefaultsImpl);
}
void AddDescriptorsImpl() {
  InitDefaults();
  ::google::protobuf::internal::OnShutdown(&TableStruct::Shutdown);
}

void AddDescriptors() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &AddDescriptorsImpl);
}
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer {
  StaticDescriptorInitializer() {
    AddDescriptors();
  }
} static_descriptor_initializer;
#endif  // GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER

}  // namespace protobuf_GameMessage_2eproto

bool GameMessage_CmdCode_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
      return true;
    default:
      return false;
  }
}

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const GameMessage_CmdCode GameMessage::CRT;
const GameMessage_CmdCode GameMessage::MOV;
const GameMessage_CmdCode GameMessage::ATK;

const GameMessage_CmdCode GameMessage::TRC;

const GameMessage_CmdCode GameMessage::CmdCode_MIN;
const GameMessage_CmdCode GameMessage::CmdCode_MAX;
const int GameMessage::CmdCode_ARRAYSIZE;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int GameMessage::kCmdCodeFieldNumber;
const int GameMessage::kUnit0FieldNumber;
const int GameMessage::kUnit1FieldNumber;
const int GameMessage::kDamageFieldNumber;
const int GameMessage::kGridPathFieldNumber;
const int GameMessage::kCampFieldNumber;
const int GameMessage::kUnitTypeFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

GameMessage::GameMessage()
  : ::google::protobuf::MessageLite(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_GameMessage_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:GameMessage)
}
GameMessage::GameMessage(const GameMessage& from)
  : ::google::protobuf::MessageLite(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.has_grid_path()) {
    grid_path_ = new ::MsgGridPath(*from.grid_path_);
  } else {
    grid_path_ = NULL;
  }
  ::memcpy(&cmd_code_, &from.cmd_code_,
    reinterpret_cast<char*>(&unit_type_) -
    reinterpret_cast<char*>(&cmd_code_) + sizeof(unit_type_));
  // @@protoc_insertion_point(copy_constructor:GameMessage)
}

void GameMessage::SharedCtor() {
  ::memset(&grid_path_, 0, reinterpret_cast<char*>(&unit_type_) -
    reinterpret_cast<char*>(&grid_path_) + sizeof(unit_type_));
  _cached_size_ = 0;
}

GameMessage::~GameMessage() {
  // @@protoc_insertion_point(destructor:GameMessage)
  SharedDtor();
}

void GameMessage::SharedDtor() {
  if (this != internal_default_instance()) {
    delete grid_path_;
  }
}

void GameMessage::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const GameMessage& GameMessage::default_instance() {
  protobuf_GameMessage_2eproto::InitDefaults();
  return *internal_default_instance();
}

GameMessage* GameMessage::New(::google::protobuf::Arena* arena) const {
  GameMessage* n = new GameMessage;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void GameMessage::Clear() {
// @@protoc_insertion_point(message_clear_start:GameMessage)
  if (GetArenaNoVirtual() == NULL && grid_path_ != NULL) {
    delete grid_path_;
  }
  grid_path_ = NULL;
  ::memset(&cmd_code_, 0, reinterpret_cast<char*>(&unit_type_) -
    reinterpret_cast<char*>(&cmd_code_) + sizeof(unit_type_));
}

bool GameMessage::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:GameMessage)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // .GameMessage.CmdCode cmd_code = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(8u)) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          set_cmd_code(static_cast< ::GameMessage_CmdCode >(value));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // int32 unit_0 = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(16u)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &unit_0_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // int32 unit_1 = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(24u)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &unit_1_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // int32 damage = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(32u)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &damage_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .MsgGridPath grid_path = 5;
      case 5: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(42u)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_grid_path()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // int32 camp = 6;
      case 6: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(48u)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &camp_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // int32 unit_type = 7;
      case 7: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(56u)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &unit_type_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:GameMessage)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:GameMessage)
  return false;
#undef DO_
}

void GameMessage::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:GameMessage)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .GameMessage.CmdCode cmd_code = 1;
  if (this->cmd_code() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      1, this->cmd_code(), output);
  }

  // int32 unit_0 = 2;
  if (this->unit_0() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->unit_0(), output);
  }

  // int32 unit_1 = 3;
  if (this->unit_1() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(3, this->unit_1(), output);
  }

  // int32 damage = 4;
  if (this->damage() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(4, this->damage(), output);
  }

  // .MsgGridPath grid_path = 5;
  if (this->has_grid_path()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessage(
      5, *this->grid_path_, output);
  }

  // int32 camp = 6;
  if (this->camp() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(6, this->camp(), output);
  }

  // int32 unit_type = 7;
  if (this->unit_type() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(7, this->unit_type(), output);
  }

  // @@protoc_insertion_point(serialize_end:GameMessage)
}

size_t GameMessage::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:GameMessage)
  size_t total_size = 0;

  // .MsgGridPath grid_path = 5;
  if (this->has_grid_path()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->grid_path_);
  }

  // .GameMessage.CmdCode cmd_code = 1;
  if (this->cmd_code() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::EnumSize(this->cmd_code());
  }

  // int32 unit_0 = 2;
  if (this->unit_0() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->unit_0());
  }

  // int32 unit_1 = 3;
  if (this->unit_1() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->unit_1());
  }

  // int32 damage = 4;
  if (this->damage() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->damage());
  }

  // int32 camp = 6;
  if (this->camp() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->camp());
  }

  // int32 unit_type = 7;
  if (this->unit_type() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->unit_type());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void GameMessage::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const GameMessage*>(&from));
}

void GameMessage::MergeFrom(const GameMessage& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:GameMessage)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.has_grid_path()) {
    mutable_grid_path()->::MsgGridPath::MergeFrom(from.grid_path());
  }
  if (from.cmd_code() != 0) {
    set_cmd_code(from.cmd_code());
  }
  if (from.unit_0() != 0) {
    set_unit_0(from.unit_0());
  }
  if (from.unit_1() != 0) {
    set_unit_1(from.unit_1());
  }
  if (from.damage() != 0) {
    set_damage(from.damage());
  }
  if (from.camp() != 0) {
    set_camp(from.camp());
  }
  if (from.unit_type() != 0) {
    set_unit_type(from.unit_type());
  }
}

void GameMessage::CopyFrom(const GameMessage& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:GameMessage)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool GameMessage::IsInitialized() const {
  return true;
}

void GameMessage::Swap(GameMessage* other) {
  if (other == this) return;
  InternalSwap(other);
}
void GameMessage::InternalSwap(GameMessage* other) {
  std::swap(grid_path_, other->grid_path_);
  std::swap(cmd_code_, other->cmd_code_);
  std::swap(unit_0_, other->unit_0_);
  std::swap(unit_1_, other->unit_1_);
  std::swap(damage_, other->damage_);
  std::swap(camp_, other->camp_);
  std::swap(unit_type_, other->unit_type_);
  std::swap(_cached_size_, other->_cached_size_);
}

::std::string GameMessage::GetTypeName() const {
  return "GameMessage";
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// GameMessage

// .GameMessage.CmdCode cmd_code = 1;
void GameMessage::clear_cmd_code() {
  cmd_code_ = 0;
}
::GameMessage_CmdCode GameMessage::cmd_code() const {
  // @@protoc_insertion_point(field_get:GameMessage.cmd_code)
  return static_cast< ::GameMessage_CmdCode >(cmd_code_);
}
void GameMessage::set_cmd_code(::GameMessage_CmdCode value) {
  
  cmd_code_ = value;
  // @@protoc_insertion_point(field_set:GameMessage.cmd_code)
}

// int32 unit_0 = 2;
void GameMessage::clear_unit_0() {
  unit_0_ = 0;
}
::google::protobuf::int32 GameMessage::unit_0() const {
  // @@protoc_insertion_point(field_get:GameMessage.unit_0)
  return unit_0_;
}
void GameMessage::set_unit_0(::google::protobuf::int32 value) {
  
  unit_0_ = value;
  // @@protoc_insertion_point(field_set:GameMessage.unit_0)
}

// int32 unit_1 = 3;
void GameMessage::clear_unit_1() {
  unit_1_ = 0;
}
::google::protobuf::int32 GameMessage::unit_1() const {
  // @@protoc_insertion_point(field_get:GameMessage.unit_1)
  return unit_1_;
}
void GameMessage::set_unit_1(::google::protobuf::int32 value) {
  
  unit_1_ = value;
  // @@protoc_insertion_point(field_set:GameMessage.unit_1)
}

// int32 damage = 4;
void GameMessage::clear_damage() {
  damage_ = 0;
}
::google::protobuf::int32 GameMessage::damage() const {
  // @@protoc_insertion_point(field_get:GameMessage.damage)
  return damage_;
}
void GameMessage::set_damage(::google::protobuf::int32 value) {
  
  damage_ = value;
  // @@protoc_insertion_point(field_set:GameMessage.damage)
}

// .MsgGridPath grid_path = 5;
bool GameMessage::has_grid_path() const {
  return this != internal_default_instance() && grid_path_ != NULL;
}
void GameMessage::clear_grid_path() {
  if (GetArenaNoVirtual() == NULL && grid_path_ != NULL) delete grid_path_;
  grid_path_ = NULL;
}
const ::MsgGridPath& GameMessage::grid_path() const {
  // @@protoc_insertion_point(field_get:GameMessage.grid_path)
  return grid_path_ != NULL ? *grid_path_
                         : *::MsgGridPath::internal_default_instance();
}
::MsgGridPath* GameMessage::mutable_grid_path() {
  
  if (grid_path_ == NULL) {
    grid_path_ = new ::MsgGridPath;
  }
  // @@protoc_insertion_point(field_mutable:GameMessage.grid_path)
  return grid_path_;
}
::MsgGridPath* GameMessage::release_grid_path() {
  // @@protoc_insertion_point(field_release:GameMessage.grid_path)
  
  ::MsgGridPath* temp = grid_path_;
  grid_path_ = NULL;
  return temp;
}
void GameMessage::set_allocated_grid_path(::MsgGridPath* grid_path) {
  delete grid_path_;
  grid_path_ = grid_path;
  if (grid_path) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:GameMessage.grid_path)
}

// int32 camp = 6;
void GameMessage::clear_camp() {
  camp_ = 0;
}
::google::protobuf::int32 GameMessage::camp() const {
  // @@protoc_insertion_point(field_get:GameMessage.camp)
  return camp_;
}
void GameMessage::set_camp(::google::protobuf::int32 value) {
  
  camp_ = value;
  // @@protoc_insertion_point(field_set:GameMessage.camp)
}

// int32 unit_type = 7;
void GameMessage::clear_unit_type() {
  unit_type_ = 0;
}
::google::protobuf::int32 GameMessage::unit_type() const {
  // @@protoc_insertion_point(field_get:GameMessage.unit_type)
  return unit_type_;
}
void GameMessage::set_unit_type(::google::protobuf::int32 value) {
  
  unit_type_ = value;
  // @@protoc_insertion_point(field_set:GameMessage.unit_type)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int MsgGridPoint::kXFieldNumber;
const int MsgGridPoint::kYFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

MsgGridPoint::MsgGridPoint()
  : ::google::protobuf::MessageLite(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_GameMessage_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:MsgGridPoint)
}
MsgGridPoint::MsgGridPoint(const MsgGridPoint& from)
  : ::google::protobuf::MessageLite(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::memcpy(&x_, &from.x_,
    reinterpret_cast<char*>(&y_) -
    reinterpret_cast<char*>(&x_) + sizeof(y_));
  // @@protoc_insertion_point(copy_constructor:MsgGridPoint)
}

void MsgGridPoint::SharedCtor() {
  ::memset(&x_, 0, reinterpret_cast<char*>(&y_) -
    reinterpret_cast<char*>(&x_) + sizeof(y_));
  _cached_size_ = 0;
}

MsgGridPoint::~MsgGridPoint() {
  // @@protoc_insertion_point(destructor:MsgGridPoint)
  SharedDtor();
}

void MsgGridPoint::SharedDtor() {
}

void MsgGridPoint::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const MsgGridPoint& MsgGridPoint::default_instance() {
  protobuf_GameMessage_2eproto::InitDefaults();
  return *internal_default_instance();
}

MsgGridPoint* MsgGridPoint::New(::google::protobuf::Arena* arena) const {
  MsgGridPoint* n = new MsgGridPoint;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void MsgGridPoint::Clear() {
// @@protoc_insertion_point(message_clear_start:MsgGridPoint)
  ::memset(&x_, 0, reinterpret_cast<char*>(&y_) -
    reinterpret_cast<char*>(&x_) + sizeof(y_));
}

bool MsgGridPoint::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:MsgGridPoint)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // int32 x = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(8u)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &x_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // int32 y = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(16u)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &y_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:MsgGridPoint)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:MsgGridPoint)
  return false;
#undef DO_
}

void MsgGridPoint::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:MsgGridPoint)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 x = 1;
  if (this->x() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->x(), output);
  }

  // int32 y = 2;
  if (this->y() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->y(), output);
  }

  // @@protoc_insertion_point(serialize_end:MsgGridPoint)
}

size_t MsgGridPoint::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:MsgGridPoint)
  size_t total_size = 0;

  // int32 x = 1;
  if (this->x() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->x());
  }

  // int32 y = 2;
  if (this->y() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->y());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void MsgGridPoint::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const MsgGridPoint*>(&from));
}

void MsgGridPoint::MergeFrom(const MsgGridPoint& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:MsgGridPoint)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.x() != 0) {
    set_x(from.x());
  }
  if (from.y() != 0) {
    set_y(from.y());
  }
}

void MsgGridPoint::CopyFrom(const MsgGridPoint& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:MsgGridPoint)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool MsgGridPoint::IsInitialized() const {
  return true;
}

void MsgGridPoint::Swap(MsgGridPoint* other) {
  if (other == this) return;
  InternalSwap(other);
}
void MsgGridPoint::InternalSwap(MsgGridPoint* other) {
  std::swap(x_, other->x_);
  std::swap(y_, other->y_);
  std::swap(_cached_size_, other->_cached_size_);
}

::std::string MsgGridPoint::GetTypeName() const {
  return "MsgGridPoint";
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// MsgGridPoint

// int32 x = 1;
void MsgGridPoint::clear_x() {
  x_ = 0;
}
::google::protobuf::int32 MsgGridPoint::x() const {
  // @@protoc_insertion_point(field_get:MsgGridPoint.x)
  return x_;
}
void MsgGridPoint::set_x(::google::protobuf::int32 value) {
  
  x_ = value;
  // @@protoc_insertion_point(field_set:MsgGridPoint.x)
}

// int32 y = 2;
void MsgGridPoint::clear_y() {
  y_ = 0;
}
::google::protobuf::int32 MsgGridPoint::y() const {
  // @@protoc_insertion_point(field_get:MsgGridPoint.y)
  return y_;
}
void MsgGridPoint::set_y(::google::protobuf::int32 value) {
  
  y_ = value;
  // @@protoc_insertion_point(field_set:MsgGridPoint.y)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int MsgGridPath::kGridPointFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

MsgGridPath::MsgGridPath()
  : ::google::protobuf::MessageLite(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_GameMessage_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:MsgGridPath)
}
MsgGridPath::MsgGridPath(const MsgGridPath& from)
  : ::google::protobuf::MessageLite(),
      _internal_metadata_(NULL),
      grid_point_(from.grid_point_),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:MsgGridPath)
}

void MsgGridPath::SharedCtor() {
  _cached_size_ = 0;
}

MsgGridPath::~MsgGridPath() {
  // @@protoc_insertion_point(destructor:MsgGridPath)
  SharedDtor();
}

void MsgGridPath::SharedDtor() {
}

void MsgGridPath::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const MsgGridPath& MsgGridPath::default_instance() {
  protobuf_GameMessage_2eproto::InitDefaults();
  return *internal_default_instance();
}

MsgGridPath* MsgGridPath::New(::google::protobuf::Arena* arena) const {
  MsgGridPath* n = new MsgGridPath;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void MsgGridPath::Clear() {
// @@protoc_insertion_point(message_clear_start:MsgGridPath)
  grid_point_.Clear();
}

bool MsgGridPath::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:MsgGridPath)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated .MsgGridPoint grid_point = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_grid_point()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:MsgGridPath)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:MsgGridPath)
  return false;
#undef DO_
}

void MsgGridPath::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:MsgGridPath)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .MsgGridPoint grid_point = 1;
  for (unsigned int i = 0, n = this->grid_point_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessage(
      1, this->grid_point(i), output);
  }

  // @@protoc_insertion_point(serialize_end:MsgGridPath)
}

size_t MsgGridPath::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:MsgGridPath)
  size_t total_size = 0;

  // repeated .MsgGridPoint grid_point = 1;
  {
    unsigned int count = this->grid_point_size();
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->grid_point(i));
    }
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void MsgGridPath::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const MsgGridPath*>(&from));
}

void MsgGridPath::MergeFrom(const MsgGridPath& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:MsgGridPath)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  grid_point_.MergeFrom(from.grid_point_);
}

void MsgGridPath::CopyFrom(const MsgGridPath& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:MsgGridPath)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool MsgGridPath::IsInitialized() const {
  return true;
}

void MsgGridPath::Swap(MsgGridPath* other) {
  if (other == this) return;
  InternalSwap(other);
}
void MsgGridPath::InternalSwap(MsgGridPath* other) {
  grid_point_.InternalSwap(&other->grid_point_);
  std::swap(_cached_size_, other->_cached_size_);
}

::std::string MsgGridPath::GetTypeName() const {
  return "MsgGridPath";
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// MsgGridPath

// repeated .MsgGridPoint grid_point = 1;
int MsgGridPath::grid_point_size() const {
  return grid_point_.size();
}
void MsgGridPath::clear_grid_point() {
  grid_point_.Clear();
}
const ::MsgGridPoint& MsgGridPath::grid_point(int index) const {
  // @@protoc_insertion_point(field_get:MsgGridPath.grid_point)
  return grid_point_.Get(index);
}
::MsgGridPoint* MsgGridPath::mutable_grid_point(int index) {
  // @@protoc_insertion_point(field_mutable:MsgGridPath.grid_point)
  return grid_point_.Mutable(index);
}
::MsgGridPoint* MsgGridPath::add_grid_point() {
  // @@protoc_insertion_point(field_add:MsgGridPath.grid_point)
  return grid_point_.Add();
}
::google::protobuf::RepeatedPtrField< ::MsgGridPoint >*
MsgGridPath::mutable_grid_point() {
  // @@protoc_insertion_point(field_mutable_list:MsgGridPath.grid_point)
  return &grid_point_;
}
const ::google::protobuf::RepeatedPtrField< ::MsgGridPoint >&
MsgGridPath::grid_point() const {
  // @@protoc_insertion_point(field_list:MsgGridPath.grid_point)
  return grid_point_;
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int GameMessageSet::kGameMessageFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

GameMessageSet::GameMessageSet()
  : ::google::protobuf::MessageLite(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_GameMessage_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:GameMessageSet)
}
GameMessageSet::GameMessageSet(const GameMessageSet& from)
  : ::google::protobuf::MessageLite(),
      _internal_metadata_(NULL),
      game_message_(from.game_message_),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:GameMessageSet)
}

void GameMessageSet::SharedCtor() {
  _cached_size_ = 0;
}

GameMessageSet::~GameMessageSet() {
  // @@protoc_insertion_point(destructor:GameMessageSet)
  SharedDtor();
}

void GameMessageSet::SharedDtor() {
}

void GameMessageSet::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const GameMessageSet& GameMessageSet::default_instance() {
  protobuf_GameMessage_2eproto::InitDefaults();
  return *internal_default_instance();
}

GameMessageSet* GameMessageSet::New(::google::protobuf::Arena* arena) const {
  GameMessageSet* n = new GameMessageSet;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void GameMessageSet::Clear() {
// @@protoc_insertion_point(message_clear_start:GameMessageSet)
  game_message_.Clear();
}

bool GameMessageSet::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:GameMessageSet)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated .GameMessage game_message = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_game_message()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:GameMessageSet)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:GameMessageSet)
  return false;
#undef DO_
}

void GameMessageSet::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:GameMessageSet)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .GameMessage game_message = 1;
  for (unsigned int i = 0, n = this->game_message_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessage(
      1, this->game_message(i), output);
  }

  // @@protoc_insertion_point(serialize_end:GameMessageSet)
}

size_t GameMessageSet::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:GameMessageSet)
  size_t total_size = 0;

  // repeated .GameMessage game_message = 1;
  {
    unsigned int count = this->game_message_size();
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->game_message(i));
    }
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void GameMessageSet::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const GameMessageSet*>(&from));
}

void GameMessageSet::MergeFrom(const GameMessageSet& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:GameMessageSet)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  game_message_.MergeFrom(from.game_message_);
}

void GameMessageSet::CopyFrom(const GameMessageSet& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:GameMessageSet)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool GameMessageSet::IsInitialized() const {
  return true;
}

void GameMessageSet::Swap(GameMessageSet* other) {
  if (other == this) return;
  InternalSwap(other);
}
void GameMessageSet::InternalSwap(GameMessageSet* other) {
  game_message_.InternalSwap(&other->game_message_);
  std::swap(_cached_size_, other->_cached_size_);
}

::std::string GameMessageSet::GetTypeName() const {
  return "GameMessageSet";
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// GameMessageSet

// repeated .GameMessage game_message = 1;
int GameMessageSet::game_message_size() const {
  return game_message_.size();
}
void GameMessageSet::clear_game_message() {
  game_message_.Clear();
}
const ::GameMessage& GameMessageSet::game_message(int index) const {
  // @@protoc_insertion_point(field_get:GameMessageSet.game_message)
  return game_message_.Get(index);
}
::GameMessage* GameMessageSet::mutable_game_message(int index) {
  // @@protoc_insertion_point(field_mutable:GameMessageSet.game_message)
  return game_message_.Mutable(index);
}
::GameMessage* GameMessageSet::add_game_message() {
  // @@protoc_insertion_point(field_add:GameMessageSet.game_message)
  return game_message_.Add();
}
::google::protobuf::RepeatedPtrField< ::GameMessage >*
GameMessageSet::mutable_game_message() {
  // @@protoc_insertion_point(field_mutable_list:GameMessageSet.game_message)
  return &game_message_;
}
const ::google::protobuf::RepeatedPtrField< ::GameMessage >&
GameMessageSet::game_message() const {
  // @@protoc_insertion_point(field_list:GameMessageSet.game_message)
  return game_message_;
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)
