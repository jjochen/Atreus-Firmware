// -*- mode: c++ -*-

#include <Kaleidoscope.h>
#include <Kaleidoscope-Macros.h>
#include <Kaleidoscope-Config-Macros.h>
#include <Kaleidoscope-TapDance.h>
#include <Kaleidoscope-Config-TapDance.h>
#include <Kaleidoscope-OneShot.h>
#include <Kaleidoscope-Escape-OneShot.h>
#include <Kaleidoscope-Config-OneShot.h>
#include <Kaleidoscope-LangPack-German.h>
#include <Kaleidoscope-Xcode-Shortcuts.h>



enum {
  QWERTY,
  FUN,
  UPPER,
  EDIT,
  SHORTCUTS,
};

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
      ,Consumer_PlaySlashPause ,JJ_NextPreviousTrack ,Consumer_VolumeDecrement ,Consumer_VolumeIncrement ,___            ,Key_Equals
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
  TapDance,
  German
);

void setup() {
  Kaleidoscope.setup();

  jj::Macros::configure();
  jj::TapDance::configure();
  jj::OneShot::configure();
}

void loop() {
  Kaleidoscope.loop();
}
