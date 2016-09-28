// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: people.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION

#include "people.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace learn {

    namespace {

        const ::google::protobuf::Descriptor *Person_descriptor_ = NULL;
        const ::google::protobuf::internal::GeneratedMessageReflection *
                Person_reflection_ = NULL;

    }  // namespace


    void protobuf_AssignDesc_people_2eproto() {
        protobuf_AddDesc_people_2eproto();
        const ::google::protobuf::FileDescriptor *file =
                ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
                        "people.proto");
        GOOGLE_CHECK(file != NULL);
        Person_descriptor_ = file->message_type(0);
        static const int Person_offsets_[3] = {
                GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Person, name_),
                GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Person, age_),
                GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Person, likenum_),
        };
        Person_reflection_ =
                new ::google::protobuf::internal::GeneratedMessageReflection(
                        Person_descriptor_,
                        Person::default_instance_,
                        Person_offsets_,
                        GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Person, _has_bits_[0]),
                        GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Person, _unknown_fields_),
                        -1,
                        ::google::protobuf::DescriptorPool::generated_pool(),
                        ::google::protobuf::MessageFactory::generated_factory(),
                        sizeof(Person));
    }

    namespace {

        GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);

        inline void protobuf_AssignDescriptorsOnce() {
            ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                                               &protobuf_AssignDesc_people_2eproto);
        }

        void protobuf_RegisterTypes(const ::std::string &) {
            protobuf_AssignDescriptorsOnce();
            ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
                    Person_descriptor_, &Person::default_instance());
        }

    }  // namespace

    void protobuf_ShutdownFile_people_2eproto() {
        delete Person::default_instance_;
        delete Person_reflection_;
    }

    void protobuf_AddDesc_people_2eproto() {
        static bool already_here = false;
        if (already_here) return;
        already_here = true;
        GOOGLE_PROTOBUF_VERIFY_VERSION;

        ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
                "\n\014people.proto\022\005learn\"4\n\006Person\022\014\n\004name\030"
                        "\001 \002(\t\022\013\n\003age\030\002 \001(\005\022\017\n\007likenum\030\003 \003(\005", 75);
        ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
                "people.proto", &protobuf_RegisterTypes);
        Person::default_instance_ = new Person();
        Person::default_instance_->InitAsDefaultInstance();
        ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_people_2eproto);
    }

// Force AddDescriptors() to be called at static initialization time.
    struct StaticDescriptorInitializer_people_2eproto {
        StaticDescriptorInitializer_people_2eproto() {
            protobuf_AddDesc_people_2eproto();
        }
    } static_descriptor_initializer_people_2eproto_;

// ===================================================================

#ifndef _MSC_VER
    const int Person::kNameFieldNumber;
    const int Person::kAgeFieldNumber;
    const int Person::kLikenumFieldNumber;
#endif  // !_MSC_VER

    Person::Person()
            : ::google::protobuf::Message() {
        SharedCtor();
    }

    void Person::InitAsDefaultInstance() {
    }

    Person::Person(const Person &from)
            : ::google::protobuf::Message() {
        SharedCtor();
        MergeFrom(from);
    }

    void Person::SharedCtor() {
        _cached_size_ = 0;
        name_ = const_cast< ::std::string *>(&::google::protobuf::internal::kEmptyString);
        age_ = 0;
        ::memset(_has_bits_, 0, sizeof(_has_bits_));
    }

    Person::~Person() {
        SharedDtor();
    }

    void Person::SharedDtor() {
        if (name_ != &::google::protobuf::internal::kEmptyString) {
            delete name_;
        }
        if (this != default_instance_) {
        }
    }

    void Person::SetCachedSize(int size) const {
        GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
        _cached_size_ = size;
        GOOGLE_SAFE_CONCURRENT_WRITES_END();
    }

    const ::google::protobuf::Descriptor *Person::descriptor() {
        protobuf_AssignDescriptorsOnce();
        return Person_descriptor_;
    }

    const Person &Person::default_instance() {
        if (default_instance_ == NULL) protobuf_AddDesc_people_2eproto();
        return *default_instance_;
    }

    Person *Person::default_instance_ = NULL;

    Person *Person::New() const {
        return new Person;
    }

    void Person::Clear() {
        if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
            if (has_name()) {
                if (name_ != &::google::protobuf::internal::kEmptyString) {
                    name_->clear();
                }
            }
            age_ = 0;
        }
        likenum_.Clear();
        ::memset(_has_bits_, 0, sizeof(_has_bits_));
        mutable_unknown_fields()->Clear();
    }

    bool Person::MergePartialFromCodedStream(
            ::google::protobuf::io::CodedInputStream *input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
        ::google::protobuf::uint32 tag;
        while ((tag = input->ReadTag()) != 0) {
            switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
                // required string name = 1;
                case 1: {
                    if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
                        ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
                        DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                                input, this->mutable_name()));
                        ::google::protobuf::internal::WireFormat::VerifyUTF8String(
                                this->name().data(), this->name().length(),
                                ::google::protobuf::internal::WireFormat::PARSE);
                    } else {
                        goto handle_uninterpreted;
                    }
                    if (input->ExpectTag(16)) goto parse_age;
                    break;
                }

                    // optional int32 age = 2;
                case 2: {
                    if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
                        ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
                        parse_age:
                        DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                                ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                                input, &age_)));
                        set_has_age();
                    } else {
                        goto handle_uninterpreted;
                    }
                    if (input->ExpectTag(24)) goto parse_likenum;
                    break;
                }

                    // repeated int32 likenum = 3;
                case 3: {
                    if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
                        ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
                        parse_likenum:
                        DO_((::google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitive<
                                ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                                1, 24, input, this->mutable_likenum())));
                    } else if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag)
                               == ::google::protobuf::internal::WireFormatLite::
                               WIRETYPE_LENGTH_DELIMITED) {
                        DO_((::google::protobuf::internal::WireFormatLite::ReadPackedPrimitiveNoInline<
                                ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                                input, this->mutable_likenum())));
                    } else {
                        goto handle_uninterpreted;
                    }
                    if (input->ExpectTag(24)) goto parse_likenum;
                    if (input->ExpectAtEnd()) return true;
                    break;
                }

                default: {
                    handle_uninterpreted:
                    if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
                        ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
                        return true;
                    }
                    DO_(::google::protobuf::internal::WireFormat::SkipField(
                            input, tag, mutable_unknown_fields()));
                    break;
                }
            }
        }
        return true;
#undef DO_
    }

    void Person::SerializeWithCachedSizes(
            ::google::protobuf::io::CodedOutputStream *output) const {
        // required string name = 1;
        if (has_name()) {
            ::google::protobuf::internal::WireFormat::VerifyUTF8String(
                    this->name().data(), this->name().length(),
                    ::google::protobuf::internal::WireFormat::SERIALIZE);
            ::google::protobuf::internal::WireFormatLite::WriteString(
                    1, this->name(), output);
        }

        // optional int32 age = 2;
        if (has_age()) {
            ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->age(), output);
        }

        // repeated int32 likenum = 3;
        for (int i = 0; i < this->likenum_size(); i++) {
            ::google::protobuf::internal::WireFormatLite::WriteInt32(
                    3, this->likenum(i), output);
        }

        if (!unknown_fields().empty()) {
            ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
                    unknown_fields(), output);
        }
    }

    ::google::protobuf::uint8 *Person::SerializeWithCachedSizesToArray(
            ::google::protobuf::uint8 *target) const {
        // required string name = 1;
        if (has_name()) {
            ::google::protobuf::internal::WireFormat::VerifyUTF8String(
                    this->name().data(), this->name().length(),
                    ::google::protobuf::internal::WireFormat::SERIALIZE);
            target =
                    ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
                            1, this->name(), target);
        }

        // optional int32 age = 2;
        if (has_age()) {
            target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(2, this->age(), target);
        }

        // repeated int32 likenum = 3;
        for (int i = 0; i < this->likenum_size(); i++) {
            target = ::google::protobuf::internal::WireFormatLite::
            WriteInt32ToArray(3, this->likenum(i), target);
        }

        if (!unknown_fields().empty()) {
            target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
                    unknown_fields(), target);
        }
        return target;
    }

    int Person::ByteSize() const {
        int total_size = 0;

        if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
            // required string name = 1;
            if (has_name()) {
                total_size += 1 +
                              ::google::protobuf::internal::WireFormatLite::StringSize(
                                      this->name());
            }

            // optional int32 age = 2;
            if (has_age()) {
                total_size += 1 +
                              ::google::protobuf::internal::WireFormatLite::Int32Size(
                                      this->age());
            }

        }
        // repeated int32 likenum = 3;
        {
            int data_size = 0;
            for (int i = 0; i < this->likenum_size(); i++) {
                data_size += ::google::protobuf::internal::WireFormatLite::
                Int32Size(this->likenum(i));
            }
            total_size += 1 * this->likenum_size() + data_size;
        }

        if (!unknown_fields().empty()) {
            total_size +=
                    ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
                            unknown_fields());
        }
        GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
        _cached_size_ = total_size;
        GOOGLE_SAFE_CONCURRENT_WRITES_END();
        return total_size;
    }

    void Person::MergeFrom(const ::google::protobuf::Message &from) {
        GOOGLE_CHECK_NE(&from, this);
        const Person *source =
                ::google::protobuf::internal::dynamic_cast_if_available<const Person *>(
                        &from);
        if (source == NULL) {
            ::google::protobuf::internal::ReflectionOps::Merge(from, this);
        } else {
            MergeFrom(*source);
        }
    }

    void Person::MergeFrom(const Person &from) {
        GOOGLE_CHECK_NE(&from, this);
        likenum_.MergeFrom(from.likenum_);
        if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
            if (from.has_name()) {
                set_name(from.name());
            }
            if (from.has_age()) {
                set_age(from.age());
            }
        }
        mutable_unknown_fields()->MergeFrom(from.unknown_fields());
    }

    void Person::CopyFrom(const ::google::protobuf::Message &from) {
        if (&from == this) return;
        Clear();
        MergeFrom(from);
    }

    void Person::CopyFrom(const Person &from) {
        if (&from == this) return;
        Clear();
        MergeFrom(from);
    }

    bool Person::IsInitialized() const {
        if ((_has_bits_[0] & 0x00000001) != 0x00000001) return false;

        return true;
    }

    void Person::Swap(Person *other) {
        if (other != this) {
            std::swap(name_, other->name_);
            std::swap(age_, other->age_);
            likenum_.Swap(&other->likenum_);
            std::swap(_has_bits_[0], other->_has_bits_[0]);
            _unknown_fields_.Swap(&other->_unknown_fields_);
            std::swap(_cached_size_, other->_cached_size_);
        }
    }

    ::google::protobuf::Metadata Person::GetMetadata() const {
        protobuf_AssignDescriptorsOnce();
        ::google::protobuf::Metadata metadata;
        metadata.descriptor = Person_descriptor_;
        metadata.reflection = Person_reflection_;
        return metadata;
    }


// @@protoc_insertion_point(namespace_scope)

}  // namespace learn

// @@protoc_insertion_point(global_scope)