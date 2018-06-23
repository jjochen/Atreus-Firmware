// -*- mode: c++ -*-

#include "Specials.h"
#include "config.h"
#include <Kaleidoscope-HostOS.h>
#include <Kaleidoscope-Macros.h>
#include <Kaleidoscope-LangPack-German.h>
#include <Kaleidoscope-Emoji.h>
#include <Kaleidoscope-Timekeeper.h>


namespace jj {
namespace Specials {
namespace {

}
}
}


namespace jj {
namespace Specials {

void configure(void) {
}

void selectInputSourceUS(void) {
  if (::HostOS.os() != kaleidoscope::hostos::OSX) {
    return;
  }
  ::Macros.play(MACRO(D(LeftShift), D(LeftAlt), D(LeftGui), T(U), U(LeftShift), U(LeftAlt), U(LeftGui)));
}

void selectInputSourceUnicode(void) {
  if (::HostOS.os() != kaleidoscope::hostos::OSX) {
    return;
  }
  ::Macros.play(MACRO(D(LeftShift), D(LeftAlt), D(LeftGui), T(H), U(LeftShift), U(LeftAlt), U(LeftGui)));
}

namespace {


} // namespace
} // namespace Emoji
} // namespacce jj


void emojiTypingWillStart() {
  jj::Specials::selectInputSourceUnicode();
}

void emojiTypingDidFinish() {
  jj::Specials::selectInputSourceUS();
}