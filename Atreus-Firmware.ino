// -*- mode: c++ -*-

#include <Kaleidoscope.h>
#include <Kaleidoscope-Macros.h>
#include <Kaleidoscope-TapDance.h>
#include <Kaleidoscope-OneShot.h>
#include <Kaleidoscope-Escape-OneShot.h>
#include <Kaleidoscope-Xcode-Shortcuts.h>


enum {
  QWERTY,
  FUN,
  UPPER,
  EDIT,
  SHORTCUTS,
};

enum {
  MACRO_VERSION_INFO,
  MACRO_SLEEP,
  MACRO_LOCK,
  MACRO_AUMLAUT,
  MACRO_OUMLAUT,
  MACRO_UUMLAUT,
  MACRO_ESZETT,
  MACRO_XCODE_SELECT_TO_MARK,
  MACRO_XCODE_SWAP_WITH_MARK,
};

enum {
  TAP_DANCE_NEXT_TRACK,
  TAP_DANCE_XCODE_FIND,
  TAP_DANCE_XCODE_FIND_AND_REPLACE,
  TAP_DANCE_XCODE_COPY_OR_CUT,
};


#define Key_AUmlaut M(MACRO_AUMLAUT) // Ä/ä
#define Key_OUmlaut M(MACRO_OUMLAUT) // Ö/ö
#define Key_UUmlaut M(MACRO_UUMLAUT) // Ü/ü
#define Key_Eszett  M(MACRO_ESZETT)  // ß

#define JJ_NextPreviousTrack TD(TAP_DANCE_NEXT_TRACK)
#define Key_XcodeFind TD(TAP_DANCE_XCODE_FIND)
#define Key_XcodeFindAndReplace TD(TAP_DANCE_XCODE_FIND_AND_REPLACE)
#define Key_XcodeCopyOrCut TD(TAP_DANCE_XCODE_COPY_OR_CUT)


/* *INDENT-OFF* */
KEYMAPS(
  [QWERTY] = KEYMAP_STACKED
  (
       Key_Q   ,Key_W            ,Key_E        ,Key_R        ,Key_T
      ,Key_A   ,Key_S            ,Key_D        ,Key_F        ,Key_G
      ,Key_Z   ,Key_X            ,Key_C        ,Key_V        ,Key_B         ,Key_Tab
      ,Key_Esc ,OSM(LeftControl) ,OSM(LeftAlt) ,OSM(LeftGui) ,Key_Backspace ,OSM(LeftShift)

                   ,Key_Y     ,Key_U       ,Key_I          ,Key_O      ,Key_P
                   ,Key_H     ,Key_J       ,Key_K          ,Key_L      ,Key_Semicolon
       ,Key_Enter  ,Key_N     ,Key_M       ,Key_Comma      ,Key_Period ,Key_Slash
       ,OSL(UPPER) ,Key_Space ,OSL(FUN)    ,OSL(SHORTCUTS) ,Key_Minus  ,Key_Backslash
  ),

  [FUN] = KEYMAP_STACKED
  (
       Key_1        ,Key_2       ,Key_3       ,Key_4       ,Key_5
      ,Key_Backtick ,Key_Eszett  ,___         ,___         ,Key_PageUp
      ,___          ,Key_AUmlaut ,Key_OUmlaut ,Key_UUmlaut ,Key_PageDown ,___
      ,___          ,___         ,___         ,___         ,Key_Delete   ,___

                               ,Key_6                ,Key_7                    ,Key_8                    ,Key_9          ,Key_0
                               ,Key_LeftArrow        ,Key_DownArrow            ,Key_UpArrow              ,Key_RightArrow ,Key_Quote
      ,Consumer_PlaySlashPause ,JJ_NextPreviousTrack ,Consumer_VolumeDecrement ,Consumer_VolumeIncrement ,Key_Period     ,Key_Equals
      ,___                     ,___                  ,___                      ,___                      ,___            ,___
   ),

  [UPPER] = KEYMAP_STACKED
  (
       LSHIFT(Key_1)        ,LSHIFT(Key_2) ,LSHIFT(Key_3) ,LSHIFT(Key_4) ,LSHIFT(Key_5)
      ,LSHIFT(Key_Backtick) ,___           ,___           ,___           ,___
      ,___                  ,___           ,___           ,___           ,___           ,___
      ,LockLayer(EDIT)      ,___           ,___           ,___           ,Key_Delete    ,___

           ,LSHIFT(Key_6)        ,LSHIFT(Key_7)         ,LSHIFT(Key_8)   ,LSHIFT(Key_9)    ,LSHIFT(Key_0)
           ,Key_LeftCurlyBracket ,Key_RightCurlyBracket ,Key_LeftBracket ,Key_RightBracket ,LSHIFT(Key_Quote)
      ,___ ,___                  ,___                   ,___             ,___              ,LSHIFT(Key_Equals)
      ,___ ,___                  ,___                   ,___             ,___              ,___
   ),

  [EDIT] = KEYMAP_STACKED
  (
       Key_Insert          ,Key_Home      ,Key_UpArrow   ,Key_End        ,___
      ,___                 ,Key_LeftArrow ,Key_DownArrow ,Key_RightArrow ,Key_Enter
      ,Key_Z               ,Key_X         ,Key_C         ,Key_V          ,Key_Space     ,Key_Tab
      ,MoveToLayer(QWERTY) ,___           ,___           ,___            ,Key_Backspace ,___

           ,___ ,___ ,___ ,___ ,___
           ,___ ,___ ,___ ,___ ,___
      ,___ ,___ ,___ ,___ ,___ ,___
      ,___ ,___ ,___ ,___ ,___ ,___
   ),

  [SHORTCUTS] = KEYMAP_STACKED
  (
       Key_XcodeCloseOtherEditors ,Key_XcodeCloseEditor ,Key_XcodeEditAllInScope   ,Key_XcodeFindAndReplaceInWorkspace ,Key_XcodeNewEditor
      ,Key_XcodeShowCodeActions   ,Key_XcodeSelectLine  ,Key_XcodeJumpToDefinition ,Key_XcodeFindInWorkspace           ,Key_XcodeFindNextInWorkspace
      ,XXX                        ,XXX                  ,Key_XcodeActivateConsole  ,Key_XcodeRefactorExtractToVariable ,Key_XcodeNewEditorBelow      ,___
      ,___                        ,___                  ,___                       ,___                                ,___                          ,___

                           ,Key_XcodeRevealInProjectNavigator ,Key_XcodeRevealInDebugNavigator            ,XXX                            ,Key_XcodeOpenQuickly  ,Key_XcodeUppercaseWord
                           ,Key_XcodeGoBack                   ,Key_XcodeJumpToNextCounterpartInNextEditor ,Key_XcodeJumpToNextCounterpart ,Key_XcodeGoForward    ,Key_XcodeCapitalizeWord
      ,Key_XcodeAssistant  ,Key_XcodeRefactorRename           ,Key_XcodeRefactorExtractToMethod           ,Key_XcodeMoveLineUp            ,Key_XcodeMoveLineDown ,Key_XcodeLowercaseWord
      ,LALT(LSHIFT(Key_M)) ,___                               ,Key_NonUsBackslashAndPipe                  ,___                            ,___                   ,Key_XcodeJumpToNextChange
   ),
)
/* *INDENT-ON* */


KALEIDOSCOPE_INIT_PLUGINS(
  OneShot,
  EscapeOneShot,
  Macros,
  TapDance
);

void setup() {
  Kaleidoscope.setup();

  OneShot.enableStickablity();
  OneShot.setTimeout(2500);
  OneShot.setHoldTimeout(250);
  OneShot.setDoubleTapTimeout(250);
}

void loop() {
  Kaleidoscope.loop();
}


namespace jj {
namespace config {

#ifndef BUILD_INFORMATION
#define BUILD_INFORMATION "locally built on " __DATE__ " at " __TIME__
#endif

static void typeVersionInfo(KeyEvent &event) {
  if (!keyToggledOn(event.state)) {
    return;
  }

  ::Macros.type(PSTR("Kaleidoscope "));
  ::Macros.type(PSTR(BUILD_INFORMATION));
}

static void lockMac(KeyEvent &event) {
  if (!keyToggledOn(event.state)) {
    return;
  }
  ::Macros.play(MACRO(Tr(LCTRL(LGUI(Key_Q)))));
}

static void sleepMac(KeyEvent &event) {
  if (!keyToggledOn(event.state)) {
    return;
  }
  ::Macros.play(MACRO(Tr(LGUI(LALT(Consumer_Eject)))));
}

static void typeAUmlaut(KeyEvent &event) {
  if (!keyToggledOn(event.state)) {
    return;
  }
  ::Macros.release(Key_LeftShift); // TODO only if active
  ::Macros.play(MACRO(Tr(LALT(Key_U)), Tr(Key_A)));
  //::Macros.press(Key_LeftShift); // TODO reactivate LeftShift
}

static void typeOUmlaut(KeyEvent &event) {
  if (!keyToggledOn(event.state)) {
    return;
  }
  ::Macros.release(Key_LeftShift); // TODO only if active
  ::Macros.play(MACRO(Tr(LALT(Key_U)), Tr(Key_O)));
}

static void typeUUmlaut(KeyEvent &event) {
  if (!keyToggledOn(event.state)) {
    return;
  }
  ::Macros.release(Key_LeftShift); // TODO only if active
  ::Macros.play(MACRO(Tr(LALT(Key_U)), Tr(Key_U)));
}

static void typeEszett(KeyEvent &event) {
  if (!keyToggledOn(event.state)) {
    return;
  }
  ::Macros.play(MACRO(Tr(LALT(Key_S))));
}

static void xcodeSelectToMark(KeyEvent &event) {
  if (!keyToggledOn(event.state)) {
    return;
  }
  ::Macros.play(MACRO(Tr(LCTRL(Key_X)), Tr(LCTRL(Key_M))));
}

static void xcodeSwapWithMark(KeyEvent &event) {
  if (!keyToggledOn(event.state)) {
    return;
  }
  ::Macros.play(MACRO(Tr(LCTRL(Key_X)), Tr(LCTRL(Key_X))));
}

} // namespace config
} // namespacce jj


const macro_t *macroAction(uint8_t macro_id, KeyEvent &event) {
  switch (macro_id) {
  case MACRO_VERSION_INFO:
    jj::config::typeVersionInfo(event);
    break;

  case MACRO_SLEEP:
    jj::config::sleepMac(event);
    break;

  case MACRO_LOCK:
    jj::config::lockMac(event);
    break;

  case MACRO_AUMLAUT:
    jj::config::typeAUmlaut(event);
    break;

  case MACRO_OUMLAUT:
    jj::config::typeOUmlaut(event);
    break;

  case MACRO_UUMLAUT:
    jj::config::typeUUmlaut(event);
    break;

  case MACRO_ESZETT:
    jj::config::typeEszett(event);
    break;

  case MACRO_XCODE_SELECT_TO_MARK:
    jj::config::xcodeSelectToMark(event);
    break;

  case MACRO_XCODE_SWAP_WITH_MARK:
    jj::config::xcodeSwapWithMark(event);
    break;

  }
  return MACRO_NONE;
}

void tapDanceAction(uint8_t tap_dance_index, KeyAddr key_addr, uint8_t tap_count, kaleidoscope::plugin::TapDance::ActionType tap_dance_action) {
  switch (tap_dance_index) {
  case TAP_DANCE_NEXT_TRACK:
    return tapDanceActionKeys(tap_count, tap_dance_action, Consumer_ScanNextTrack, Consumer_ScanPreviousTrack);
  case TAP_DANCE_XCODE_FIND:
    return tapDanceActionKeys(tap_count, tap_dance_action, Key_XcodeFindInFile, Key_XcodeFindInWorkspace);
  case TAP_DANCE_XCODE_FIND_AND_REPLACE:
    return tapDanceActionKeys(tap_count, tap_dance_action, Key_XcodeFindAndReplaceInFile, Key_XcodeFindAndReplaceInWorkspace);
  case TAP_DANCE_XCODE_COPY_OR_CUT:
    return tapDanceActionKeys(tap_count, tap_dance_action, Key_XcodeCopy, Key_XcodeCut);
  }
}
