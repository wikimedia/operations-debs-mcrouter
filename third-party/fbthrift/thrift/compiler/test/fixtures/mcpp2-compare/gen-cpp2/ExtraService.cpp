/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include "src/gen-cpp2/ExtraService.h"
#include "src/gen-cpp2/ExtraService.tcc"

#include <thrift/lib/cpp2/protocol/BinaryProtocol.h>
#include <thrift/lib/cpp2/protocol/CompactProtocol.h>
#include <thrift/lib/cpp2/protocol/Protocol.h>

namespace extra { namespace svc {
std::unique_ptr<apache::thrift::AsyncProcessor> ExtraServiceSvIf::getProcessor() {
  return std::make_unique<ExtraServiceAsyncProcessor>(this);
}

bool ExtraServiceSvIf::simple_function() {
  apache::thrift::detail::si::throw_app_exn_unimplemented("simple_function");
}

folly::Future<bool> ExtraServiceSvIf::future_simple_function() {
  return apache::thrift::detail::si::future([&] { return simple_function(); });
}

void ExtraServiceSvIf::async_eb_simple_function(std::unique_ptr<apache::thrift::HandlerCallback<bool>> callback) {
  apache::thrift::detail::si::async_eb(this, std::move(callback), [this]() mutable { return future_simple_function(); });
}

void ExtraServiceSvIf::throws_function() {
  apache::thrift::detail::si::throw_app_exn_unimplemented("throws_function");
}

folly::Future<folly::Unit> ExtraServiceSvIf::future_throws_function() {
  return apache::thrift::detail::si::future([&] { return throws_function(); });
}

void ExtraServiceSvIf::async_eb_throws_function(std::unique_ptr<apache::thrift::HandlerCallback<void>> callback) {
  apache::thrift::detail::si::async_eb(this, std::move(callback), [this]() mutable { return future_throws_function(); });
}

bool ExtraServiceSvIf::throws_function2(bool /*param1*/) {
  apache::thrift::detail::si::throw_app_exn_unimplemented("throws_function2");
}

folly::Future<bool> ExtraServiceSvIf::future_throws_function2(bool param1) {
  return apache::thrift::detail::si::future([&] { return throws_function2(param1); });
}

void ExtraServiceSvIf::async_eb_throws_function2(std::unique_ptr<apache::thrift::HandlerCallback<bool>> callback, bool param1) {
  apache::thrift::detail::si::async_eb(this, std::move(callback), [this, param1]() mutable { return future_throws_function2(param1); });
}

void ExtraServiceSvIf::throws_function3(std::map<int32_t, std::string>& /*_return*/, bool /*param1*/, const std::string& /*param2*/) {
  apache::thrift::detail::si::throw_app_exn_unimplemented("throws_function3");
}

folly::Future<std::map<int32_t, std::string>> ExtraServiceSvIf::future_throws_function3(bool param1, const std::string& param2) {
  return apache::thrift::detail::si::future_returning([&](std::map<int32_t, std::string>& _return) { throws_function3(_return, param1, param2); });
}

void ExtraServiceSvIf::async_eb_throws_function3(std::unique_ptr<apache::thrift::HandlerCallback<std::map<int32_t, std::string>>> callback, bool param1, const std::string& param2) {
  apache::thrift::detail::si::async_eb(this, std::move(callback), [this, param1, param2 = std::move(param2)]() mutable { return future_throws_function3(param1, param2); });
}

void ExtraServiceSvIf::oneway_void_ret() {
  apache::thrift::detail::si::throw_app_exn_unimplemented("oneway_void_ret");
}

folly::Future<folly::Unit> ExtraServiceSvIf::future_oneway_void_ret() {
  return apache::thrift::detail::si::future([&] { return oneway_void_ret(); });
}

void ExtraServiceSvIf::async_eb_oneway_void_ret(std::unique_ptr<apache::thrift::HandlerCallbackBase> callback) {
  apache::thrift::detail::si::async_eb_oneway(this, std::move(callback), [this]() mutable { return future_oneway_void_ret(); });
}

void ExtraServiceSvIf::oneway_void_ret_i32_i32_i32_i32_i32_param(int32_t /*param1*/, int32_t /*param2*/, int32_t /*param3*/, int32_t /*param4*/, int32_t /*param5*/) {
  apache::thrift::detail::si::throw_app_exn_unimplemented("oneway_void_ret_i32_i32_i32_i32_i32_param");
}

folly::Future<folly::Unit> ExtraServiceSvIf::future_oneway_void_ret_i32_i32_i32_i32_i32_param(int32_t param1, int32_t param2, int32_t param3, int32_t param4, int32_t param5) {
  return apache::thrift::detail::si::future([&] { return oneway_void_ret_i32_i32_i32_i32_i32_param(param1, param2, param3, param4, param5); });
}

void ExtraServiceSvIf::async_eb_oneway_void_ret_i32_i32_i32_i32_i32_param(std::unique_ptr<apache::thrift::HandlerCallbackBase> callback, int32_t param1, int32_t param2, int32_t param3, int32_t param4, int32_t param5) {
  apache::thrift::detail::si::async_eb_oneway(this, std::move(callback), [this, param1, param2, param3, param4, param5]() mutable { return future_oneway_void_ret_i32_i32_i32_i32_i32_param(param1, param2, param3, param4, param5); });
}

void ExtraServiceSvIf::oneway_void_ret_map_setlist_param(const std::map<std::string, int64_t>& /*param1*/, const std::set<std::vector<std::string>>& /*param2*/) {
  apache::thrift::detail::si::throw_app_exn_unimplemented("oneway_void_ret_map_setlist_param");
}

folly::Future<folly::Unit> ExtraServiceSvIf::future_oneway_void_ret_map_setlist_param(const std::map<std::string, int64_t>& param1, const std::set<std::vector<std::string>>& param2) {
  return apache::thrift::detail::si::future([&] { return oneway_void_ret_map_setlist_param(param1, param2); });
}

void ExtraServiceSvIf::async_eb_oneway_void_ret_map_setlist_param(std::unique_ptr<apache::thrift::HandlerCallbackBase> callback, const std::map<std::string, int64_t>& param1, const std::set<std::vector<std::string>>& param2) {
  apache::thrift::detail::si::async_eb_oneway(this, std::move(callback), [this, param1 = std::move(param1), param2 = std::move(param2)]() mutable { return future_oneway_void_ret_map_setlist_param(param1, param2); });
}

void ExtraServiceSvIf::oneway_void_ret_struct_param(const  ::some::valid::ns::MyStruct& /*param1*/) {
  apache::thrift::detail::si::throw_app_exn_unimplemented("oneway_void_ret_struct_param");
}

folly::Future<folly::Unit> ExtraServiceSvIf::future_oneway_void_ret_struct_param(const  ::some::valid::ns::MyStruct& param1) {
  return apache::thrift::detail::si::future([&] { return oneway_void_ret_struct_param(param1); });
}

void ExtraServiceSvIf::async_eb_oneway_void_ret_struct_param(std::unique_ptr<apache::thrift::HandlerCallbackBase> callback, const  ::some::valid::ns::MyStruct& param1) {
  apache::thrift::detail::si::async_eb_oneway(this, std::move(callback), [this, param1 = std::move(param1)]() mutable { return future_oneway_void_ret_struct_param(param1); });
}

void ExtraServiceSvIf::oneway_void_ret_listunion_param(const std::vector< ::some::valid::ns::ComplexUnion>& /*param1*/) {
  apache::thrift::detail::si::throw_app_exn_unimplemented("oneway_void_ret_listunion_param");
}

folly::Future<folly::Unit> ExtraServiceSvIf::future_oneway_void_ret_listunion_param(const std::vector< ::some::valid::ns::ComplexUnion>& param1) {
  return apache::thrift::detail::si::future([&] { return oneway_void_ret_listunion_param(param1); });
}

void ExtraServiceSvIf::async_eb_oneway_void_ret_listunion_param(std::unique_ptr<apache::thrift::HandlerCallbackBase> callback, const std::vector< ::some::valid::ns::ComplexUnion>& param1) {
  apache::thrift::detail::si::async_eb_oneway(this, std::move(callback), [this, param1 = std::move(param1)]() mutable { return future_oneway_void_ret_listunion_param(param1); });
}

const char* ExtraServiceAsyncProcessor::getServiceName() {
  return "ExtraService";
}

folly::Optional<std::string> ExtraServiceAsyncProcessor::getCacheKey(folly::IOBuf* buf, apache::thrift::protocol::PROTOCOL_TYPES protType) {
  return apache::thrift::detail::ap::get_cache_key(buf, protType, cacheKeyMap_);
}

void ExtraServiceAsyncProcessor::process(std::unique_ptr<apache::thrift::ResponseChannel::Request> req, std::unique_ptr<folly::IOBuf> buf, apache::thrift::protocol::PROTOCOL_TYPES protType, apache::thrift::Cpp2RequestContext* context, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm) {
  apache::thrift::detail::ap::process(this, std::move(req), std::move(buf), protType, context, eb, tm);
}

bool ExtraServiceAsyncProcessor::isOnewayMethod(const folly::IOBuf* buf, const apache::thrift::transport::THeader* header) {
  return apache::thrift::detail::ap::is_oneway_method(buf, header, onewayMethods_);
}

std::unordered_set<std::string> ExtraServiceAsyncProcessor::onewayMethods_ {
  "oneway_void_ret",
  "oneway_void_ret_i32_i32_i32_i32_i32_param",
  "oneway_void_ret_map_setlist_param",
  "oneway_void_ret_struct_param",
  "oneway_void_ret_listunion_param"
};
std::unordered_map<std::string, int16_t> ExtraServiceAsyncProcessor::cacheKeyMap_ {};
const ExtraServiceAsyncProcessor::BinaryProtocolProcessMap& ExtraServiceAsyncProcessor::getBinaryProtocolProcessMap() {
  return binaryProcessMap_;
}

const ExtraServiceAsyncProcessor::BinaryProtocolProcessMap ExtraServiceAsyncProcessor::binaryProcessMap_ {
  {"simple_function", &ExtraServiceAsyncProcessor::process_simple_function<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>},
  {"throws_function", &ExtraServiceAsyncProcessor::process_throws_function<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>},
  {"throws_function2", &ExtraServiceAsyncProcessor::process_throws_function2<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>},
  {"throws_function3", &ExtraServiceAsyncProcessor::process_throws_function3<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>},
  {"oneway_void_ret", &ExtraServiceAsyncProcessor::process_oneway_void_ret<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>},
  {"oneway_void_ret_i32_i32_i32_i32_i32_param", &ExtraServiceAsyncProcessor::process_oneway_void_ret_i32_i32_i32_i32_i32_param<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>},
  {"oneway_void_ret_map_setlist_param", &ExtraServiceAsyncProcessor::process_oneway_void_ret_map_setlist_param<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>},
  {"oneway_void_ret_struct_param", &ExtraServiceAsyncProcessor::process_oneway_void_ret_struct_param<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>},
  {"oneway_void_ret_listunion_param", &ExtraServiceAsyncProcessor::process_oneway_void_ret_listunion_param<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>},
};

const ExtraServiceAsyncProcessor::CompactProtocolProcessMap& ExtraServiceAsyncProcessor::getCompactProtocolProcessMap() {
  return compactProcessMap_;
}

const ExtraServiceAsyncProcessor::CompactProtocolProcessMap ExtraServiceAsyncProcessor::compactProcessMap_ {
  {"simple_function", &ExtraServiceAsyncProcessor::process_simple_function<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>},
  {"throws_function", &ExtraServiceAsyncProcessor::process_throws_function<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>},
  {"throws_function2", &ExtraServiceAsyncProcessor::process_throws_function2<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>},
  {"throws_function3", &ExtraServiceAsyncProcessor::process_throws_function3<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>},
  {"oneway_void_ret", &ExtraServiceAsyncProcessor::process_oneway_void_ret<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>},
  {"oneway_void_ret_i32_i32_i32_i32_i32_param", &ExtraServiceAsyncProcessor::process_oneway_void_ret_i32_i32_i32_i32_i32_param<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>},
  {"oneway_void_ret_map_setlist_param", &ExtraServiceAsyncProcessor::process_oneway_void_ret_map_setlist_param<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>},
  {"oneway_void_ret_struct_param", &ExtraServiceAsyncProcessor::process_oneway_void_ret_struct_param<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>},
  {"oneway_void_ret_listunion_param", &ExtraServiceAsyncProcessor::process_oneway_void_ret_listunion_param<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>},
};

}} // extra::svc
namespace apache { namespace thrift {

}} // apache::thrift