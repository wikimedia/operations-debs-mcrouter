/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include "src/gen-cpp2/module_types.h"
#include "src/gen-cpp2/module_types.tcc"

#include <algorithm>
#include <folly/Indestructible.h>

#include "src/gen-cpp2/module_data.h"

namespace cpp2 {

FooEx::FooEx(apache::thrift::FragileConstructor) {}

void FooEx::__clear() {
  // clear all fields
}

bool FooEx::operator==(const FooEx& /* rhs */) const {
  return true;
}

void FooEx::translateFieldName(FOLLY_MAYBE_UNUSED folly::StringPiece _fname, FOLLY_MAYBE_UNUSED int16_t& fid, FOLLY_MAYBE_UNUSED apache::thrift::protocol::TType& _ftype) {
  if (false) {}
}

void swap(FooEx& a, FooEx& b) {
  using ::std::swap;
  (void)a;
  (void)b;
}

template void FooEx::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
template uint32_t FooEx::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t FooEx::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t FooEx::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
template void FooEx::readNoXfer<>(apache::thrift::CompactProtocolReader*);
template uint32_t FooEx::write<>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t FooEx::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
template uint32_t FooEx::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;

} // cpp2