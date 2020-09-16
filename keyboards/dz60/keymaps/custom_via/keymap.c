#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

	LAYOUT_directional(
        KC_GESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  _______, KC_BSPC,  \
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS, \
        LT(2, KC_GRAVE), KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,          KC_ENT, \
        KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,          KC_UP,   KC_DEL, \
        KC_LCTL, KC_LALT, KC_LGUI,                            KC_SPC, MO(3), KC_SPC,                             LT(1, KC_BSLASH), MO(3),   KC_LEFT, KC_DOWN, KC_RGHT  \
    ),
	LAYOUT_directional(
        _______,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  _______, _______, \
        _______, _______, _______, _______, _______, _______, _______, _______,_______,_______, _______, _______, _______, _______, \
        _______, LSFT(KC_LBRC), LSFT(KC_RBRC), _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______, \
        _______, KC_LBRC, KC_RBRC, _______, _______, _______, _______, KC_MINS, KC_EQL, LSFT(KC_9), LSFT(KC_0), _______,          _______, _______, \
        _______, _______, _______,                            _______,_______,_______,                            _______, _______, _______, _______, _______  \
    ),
	LAYOUT_directional(
        KC_NLCK,  KC_P1,   KC_P2,   KC_P3,   KC_P4,   KC_P5,   KC_P6,   KC_P7,   KC_P8,   KC_P9,   KC_P0,  _______,  _______, _______, _______, \
        KC_MPLY, KC_MPRV, KC_MNXT, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
        _______, KC_VOLD, KC_VOLU, _______, _______, _______, KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, _______, _______,          _______, \
        _______, KC_MUTE, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______, _______, \
        _______, _______, _______,                            _______,_______,_______,                             	_______, _______, _______, _______, _______  \
    ),
	LAYOUT_directional(
        _______,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  _______, _______, \
        _______, LGUI(LSFT(KC_LEFT)), LGUI(LSFT(KC_RGHT)), _______, _______, _______, _______, _______, _______, _______, KC_PSCR, KC_SLCK, KC_PAUS, _______, \
        _______, _______,_______, _______, _______, _______, KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, _______, KC_PGUP,          _______, \
        _______, _______, _______, _______, _______, RESET, _______, _______, _______, _______, KC_PGDN, LCTL(LALT(KC_DEL)),         _______, LALT(KC_F4), \
        _______, _______, _______,                            _______,_______,_______,                            KC_RALT, _______, KC_RCTL, _______, _______  \
    )
};