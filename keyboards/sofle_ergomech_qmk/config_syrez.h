#pragma once


// #define NO_ACTION_MACRO
// #define NO_ACTION_FUNCTION
// #define DISABLE_LEADER
// #define NO_ACTION_ONESHOT
// #define VIAL_COMBO_ENTRIES 1
// #define DYNAMIC_KEYMAP_LAYER_COUNT 3


#define DYNAMIC_KEYMAP_LAYER_COUNT 5

// Unfortunately, some applications drop or misorder fast key events. This is a
// partial fix to slow down the rate at which macros are sent.
#define TAP_CODE_DELAY 5

// // Tap-hold configuration for home row mods.
#define TAPPING_TERM 170
// #define TAPPING_TERM_PER_KEY
#define PERMISSIVE_HOLD
#define QUICK_TAP_TERM_PER_KEY

// #define UNICODE_SELECTED_MODES UNICODE_MODE_LINUX

// Use Left Ctrl + Right Ctrl to activate the Command feature.
// #define IS_COMMAND() (get_mods() == MOD_MASK_CTRL)

#define ACHORDION_STREAK

// Holding Shift while Caps Word is active inverts the shift state.
#define CAPS_WORD_INVERT_ON_SHIFT
// When idle, turn off Caps Word after 5 seconds.
#define CAPS_WORD_IDLE_TIMEOUT 5000

// // Don't apply custom shift keys with mods other than Shift.
#define CUSTOM_SHIFT_KEYS_NEGMODS ~MOD_MASK_SHIFT

// When idle, turn off Layer Lock after 60 seconds.
#define LAYER_LOCK_IDLE_TIMEOUT 60000


// // When idle, turn off Sentence Case after 2 seconds.
// #define SENTENCE_CASE_TIMEOUT 2000

// #ifdef AUDIO_ENABLE
// #define STARTUP_SONG SONG(NO_SOUND)
// #endif  // AUDIO_ENABLE
