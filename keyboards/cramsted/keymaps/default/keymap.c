 /* Copyright HarshitGoel96 2020
  * With permission from mattdibi, the original maintainer of the Redox hardware.
  * 
  * This program is free software: you can redistribute it and/or modify 
  * it under the terms of the GNU General Public License as published by 
  * the Free Software Foundation, either version 2 of the License, or 
  * (at your option) any later version. 
  * 
  * This program is distributed in the hope that it will be useful, 
  * but WITHOUT ANY WARRANTY; without even the implied warranty of 
  * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the 
  * GNU General Public License for more details. 
  * 
  * You should have received a copy of the GNU General Public License 
  * along with this program.  If not, see <http://www.gnu.org/licenses/>. 
  */ 
#include QMK_KEYBOARD_H

// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.

enum custom_keycodes {
  _QWERTY,
  _SYMNUM,
  _NAV,
  _MOUSE
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [_QWERTY] = LAYOUT_split_3x5_3(
        KC_Q,        KC_W,        KC_E,            KC_R,    KC_T,                         KC_Y,    KC_U,        KC_I,        KC_O,        KC_P,
        LCTL_T(KC_A),LGUI_T(KC_S),LALT_T(KC_D),LSFT_T(KC_F),KC_G,                         KC_H,    RSFT_T(KC_J),RALT_T(KC_K),RGUI_T(KC_L),RCTL_T(KC_SCLN),
        KC_Z,        KC_X,        KC_C,        KC_V,        KC_B,                         KC_N,    KC_M,        KC_COMM,     KC_DOT,      KC_SLSH,
                                          LT(_NAV, KC_ESC), KC_LSFT, KC_TAB,    LT(_MOUSE,KC_ENT),  LT(_SYMNUM,KC_SPC),  KC_BSPC
    ),
    [_SYMNUM] = LAYOUT_split_3x5_3(
        KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                         KC_6,    KC_7,    KC_8,    KC_9,    KC_0,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                      KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
        KC_GRV,  KC_LBRC, KC_RBRC, KC_MINS, KC_TRNS,                      KC_BSLS, KC_EQL,  KC_TRNS, KC_TRNS, KC_QUOT,
                                   KC_TRNS, KC_TRNS, KC_TRNS,      KC_TRNS,   KC_TRNS,  KC_TRNS
    ) ,
    [_NAV] = LAYOUT_split_3x5_3(
        KC_F1,     KC_F2,   KC_F3,   KC_F4,   KC_F5,                        KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,
        KC_TRNS,   KC_TRNS, KC_TRNS, KC_TRNS, KC_F11,                       KC_CAPS, KC_LEFT, KC_UP,   KC_DOWN, KC_RGHT,
        QK_MACRO_0,KC_TRNS, KC_TRNS, KC_DEL,  KC_F12,                       KC_INS,  KC_HOME, KC_PGUP, KC_PGDN, KC_END,
                                  KC_TRNS, KC_TRNS,  KC_TRNS,      KC_TRNS,   KC_TRNS,   KC_TRNS
    ) ,
    [_MOUSE] = LAYOUT_split_3x5_3(
        KC_WH_L,    KC_WH_D,    KC_MS_U,    KC_WH_U,    KC_WH_R,                         KC_TRNS,     KC_TRNS,     KC_TRNS,     KC_TRNS,     QK_BOOT, 
        KC_TRNS,    KC_MS_L,    KC_MS_D,    KC_MS_R,    KC_TRNS,                         KC_TRNS,     KC_TRNS,     KC_TRNS,     KC_TRNS,     KC_TRNS, 
        KC_TRNS,    KC_MUTE,    KC_VOLD,    KC_VOLU,    KC_TRNS,                         KC_TRNS,     KC_TRNS,     KC_TRNS,     KC_TRNS,     KC_TRNS, 
                                   KC_BTN1, KC_BTN2, KC_BTN3,     KC_TRNS,  KC_TRNS,   KC_TRNS
    ) 
};
