#include QMK_KEYBOARD_H
#define _LAYER0 0
#define _LAYER1 1
#define _LAYER2 2
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
		[_LAYER0] = LAYOUT_65_ansi_blocker( /* Base */
		KC_GESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC, KC_DEL,  \
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS, KC_PGUP, \
        MO(2), KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,          KC_ENT,  KC_PGDN, \
        KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  RSFT_T(KC_SLSH), RSFT_T(KC_SLSH),          KC_UP,   KC_END, \
        KC_LCTL, KC_LALT, KC_LGUI,                            KC_SPC,                             KC_GRV, LT(1, KC_SLSH),   KC_LEFT, KC_DOWN, KC_RGHT ),
		[_LAYER1] = LAYOUT_65_ansi_blocker( /* FN */
		KC_GRV,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_TRNS, KC_MUTE, \
        KC_TRNS, RGB_SPD, RGB_VAI, RGB_SPI, RGB_HUI, RGB_SAI, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_PSCR, KC_SLCK, KC_PAUS, KC_TRNS, KC_VOLU, \
        KC_TRNS, RGB_RMOD, RGB_VAD, RGB_MOD, RGB_HUD, RGB_SAD, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_PGUP, KC_TRNS, KC_VOLD, \
        KC_TRNS, KC_TRNS, RGB_TOG, KC_TRNS, KC_TRNS, RESET, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_PGDN, KC_TRNS, KC_PGUP, KC_HOME, \
        KC_TRNS, KC_TRNS, KC_TRNS,                            KC_TRNS,                            KC_RALT, KC_TRNS, KC_RCTL, KC_PGDN, KC_TRNS),
		[_LAYER2] = LAYOUT_65_ansi_blocker( /* FN */
		KC_GRV,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12, KC_TRNS, KC_TRNS, \
        KC_MPLY, KC_MPRV, KC_UP, KC_MNXT, KC_VOLD, KC_VOLU, KC_MUTE, KC_TRNS, KC_TRNS, KC_P7, KC_P8, KC_P9, KC_TRNS, KC_TRNS, KC_TRNS, \
        KC_TRNS, KC_LEFT, KC_DOWN, KC_RGHT, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_P4, KC_P5, KC_P6,          KC_TRNS, KC_TRNS, \
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_P1, KC_P2, KC_P3,          KC_TRNS, KC_TRNS, \
        KC_TRNS, KC_TRNS, KC_TRNS,                            KC_TRNS,                             	KC_P0, KC_PDOT, KC_TRNS, KC_TRNS, KC_TRNS),
};

void rgb_matrix_indicators_user(void)
{

}

void matrix_init_user(void)
{
  //user initialization
}

void matrix_scan_user(void)
{
  //user matrix
}

bool process_record_user(uint16_t keycode, keyrecord_t *record)
{
	  return true;
}
