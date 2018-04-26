// -*- mode: c++ -*-

/**
  *    https://github.com/keyboardio/Kaleidoscope/blob/master/src/key_defs_keyboard.h
  *    https://github.com/keyboardio/Kaleidoscope/blob/master/src/key_defs_consumerctl.h
  *    https://github.com/keyboardio/Kaleidoscope/blob/master/src/key_defs_sysctl.h
  *    https://github.com/keyboardio/Kaleidoscope/blob/master/src/key_defs_keymaps.h
  */

#pragma once

#include "Macros.h"


enum { QWERTY,
       FUNCTION_LEFT,
       FUNCTION_RIGHT,
       EMOJI,
     };

// *INDENT-OFF*

KEYMAPS(

  [QWERTY] = KEYMAP_STACKED
  (___,          Key_1, Key_2, Key_3, Key_4, Key_5, Key_LEDToggle,
   Key_Backtick, Key_Q, Key_W, Key_E, Key_R, Key_T, Key_Tab,
   Key_PageUp,   Key_A, Key_S, Key_D, Key_F, Key_G,
   Key_PageDown, Key_Z, Key_X, Key_C, Key_V, Key_B, Key_Escape,
   Key_LeftControl, Key_Backspace, Key_LeftGui, Key_LeftShift,
   ShiftToLayer(FUNCTION_LEFT),

   M(MACRO_ANY), Key_6, Key_7, Key_8,     Key_9,      Key_0,         ___,
   Key_Enter,    Key_Y, Key_U, Key_I,     Key_O,      Key_P,         Key_Equals,
                 Key_H, Key_J, Key_K,     Key_L,      Key_Semicolon, Key_Quote,
   OSL(EMOJI),   Key_N, Key_M, Key_Comma, Key_Period, Key_Slash,     Key_Minus,
   Key_RightShift, Key_LeftAlt, Key_Spacebar, Key_RightControl,
   ShiftToLayer(FUNCTION_RIGHT)),


  [FUNCTION_LEFT] =  KEYMAP_STACKED
  (___,      Key_F1,           Key_F2,      Key_F3,     Key_F4,        Key_F5,           Key_LEDToggleNext,
   Key_Tab,  ___,              Key_mouseUp, ___,        Key_mouseBtnR, Key_mouseWarpEnd, Key_mouseWarpNE,
   Key_Home, Key_mouseL,       Key_mouseDn, Key_mouseR, Key_mouseBtnL, Key_mouseWarpNW,
   Key_End,  Key_PrintScreen,  Key_Insert,  ___,        Key_mouseBtnM, Key_mouseWarpSW,  Key_mouseWarpSE,
   ___, Key_Delete, ___, ___,
   ___,

   Consumer_ScanPreviousTrack, Key_F6,                 Key_F7,                   Key_F8,                   Key_F9,              Key_F10,          Key_Eszett,
   Consumer_PlaySlashPause,    Consumer_ScanNextTrack, Key_LeftCurlyBracket,     Key_RightCurlyBracket,    Key_LeftBracket,     Key_RightBracket, Key_UUmlaut,
                               Key_LeftArrow,          Key_DownArrow,            Key_UpArrow,              Key_RightArrow,      Key_OUmlaut,      Key_AUmlaut,
   Key_PcApplication,          Consumer_Mute,          Consumer_VolumeDecrement, Consumer_VolumeIncrement, M(MACRO_TIMEKEEPER), Key_Backslash,    Key_Pipe,
   ___, ___, Key_Enter, ___,
   ___),


  [FUNCTION_RIGHT] =  KEYMAP_STACKED
  (___,      Key_F1,           Key_F2,      Key_F3,     Key_F4,        Key_F5,           Key_LEDToggleNext,
   Key_Tab,  ___,              Key_mouseUp, ___,        Key_mouseBtnR, Key_mouseWarpEnd, Key_mouseWarpNE,
   Key_Home, Key_mouseL,       Key_mouseDn, Key_mouseR, Key_mouseBtnL, Key_mouseWarpNW,
   Key_End,  Key_PrintScreen,  Key_Insert,  ___,        Key_mouseBtnM, Key_mouseWarpSW,  Key_mouseWarpSE,
   ___, Key_Delete, ___, ___,
   ___,

   Consumer_ScanPreviousTrack, Key_F6,                 Key_F7,                   Key_F8,                   Key_F9,          Key_F10,          Key_F11,
   Consumer_PlaySlashPause,    Consumer_ScanNextTrack, Key_LeftCurlyBracket,     Key_RightCurlyBracket,    Key_LeftBracket, Key_RightBracket, Key_F12,
                               Key_LeftArrow,          Key_DownArrow,            Key_UpArrow,              Key_RightArrow,  ___,              ___,
   Key_PcApplication,          Consumer_Mute,          Consumer_VolumeDecrement, Consumer_VolumeIncrement, ___,             Key_Backslash,    Key_Pipe,
   ___, ___, Key_Enter, ___,
   ___), 


  [EMOJI] =  KEYMAP_STACKED
  (Key_EmojiCricket, Key_EmojiUnicornFace,   Key_EmojiEyes,  Key_EmojiSparkles,    ___,                ___,               ___,
   ___,              Key_EmojiBalloon,       Key_EmojiWave,  Key_EmojiFlushed,     Key_EmojiRocket,    Key_EmojiMetal,    ___,
   ___,              Key_EmojiWarning,       Key_EmojiSmile, Key_EmojiThumbsdown,  Key_EmojiSunflower, Key_EmojiGrimaced,
   ___,              Key_EmojiExplodingHead, Key_EmojiPeach, Key_EmojiCrazy,       Key_EmojiVulcan,    Key_EmojiBoom,     ___,
   ___, ___, ___, ___,
   ___,

   Key_EmojiUpsideDown, ___,                  ___,               ___,                  ___,                       Key_EmojiWhiteCheckMark, Key_EmojiCrossMark,
   ___,                 Key_EmojiDisbelief,   Key_EmojiThumbsup, Key_EmojiThinking,    Key_EmojiManDancing,       Key_EmojiParty,          ___,
                        Key_EmojiMischievous, Key_EmojiJoyful,   Key_EmojiFlirty,      Key_EmojiConfident,        Key_EmojiHole,           ___,
   Key_EmojiBlush,      Key_EmojiNerd,        Key_EmojiAnnoyed,  Key_EmojiWink,        Key_EmojiHourglassFlowing, Key_EmojiConstruction,   ___,
   ___, ___, ___, ___,
   ___)

	) // KEYMAPS(

// *INDENT-ON*