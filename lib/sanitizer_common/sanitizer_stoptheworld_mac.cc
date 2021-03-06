//===-- sanitizer_stoptheworld_mac.cc -------------------------------------===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is distributed under the University of Illinois Open Source
// License. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//
//
// See sanitizer_stoptheworld.h for details.
//
//===----------------------------------------------------------------------===//

#include "sanitizer_platform.h"

#if SANITIZER_MAC && (defined(__x86_64__) || defined(__aarch64__) || \
                      defined(__mips64) || defined(__i386))

#include "sanitizer_stoptheworld.h"

namespace __sanitizer {
void StopTheWorld(StopTheWorldCallback callback, void *argument) {
  CHECK(0 && "unimplemented");
}

PtraceRegistersStatus SuspendedThreadsList::GetRegistersAndSP(uptr index,
                                                              uptr *buffer,
                                                              uptr *sp) const {
  CHECK(0 && "unimplemented");
  return REGISTERS_UNAVAILABLE_FATAL;
}

uptr SuspendedThreadsList::RegisterCount() {
  CHECK(0 && "unimplemented");
  return 0;
}
} // namespace __sanitizer

#endif  // SANITIZER_MAC && (defined(__x86_64__) || defined(__aarch64__)) ||
        //                   defined(__mips64) || defined(__i386))
