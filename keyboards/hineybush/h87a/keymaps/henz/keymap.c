/* Copyright 2018 Josh Hinnebusch

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

#define MAIN 0
#define LED_MANAGE 1
#define ARROW 2
#define GAMING 3

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

   [MAIN] = LAYOUT_all(
     KC_ESC,           KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,    KC_F10,     KC_F11,     KC_F12,                  KC_PSCR, KC_SCRL, TG(GAMING),
     KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,     KC_SLSH,    KC_EQL,     KC_BSLS,   KC_BSLS,      KC_INS,  KC_HOME, KC_PGUP,
     KC_TAB,  KC_QUOT,    KC_COMM,    KC_DOT,    KC_P,    KC_Y,    KC_F,    KC_G,    KC_C,    KC_R,    KC_L,     KC_LBRC,    KC_RBRC,    KC_BSPC,                 KC_DEL,  KC_END,  KC_PGDN,
     KC_LCTL, KC_A,    KC_O,    KC_E,    KC_U,    KC_I,    KC_D,    KC_H,    KC_T,    KC_N,    KC_S,    KC_MINS, KC_MINS,    KC_ENT,
     KC_LSFT, KC_NUBS, KC_SCLN,    KC_Q,    KC_J,    KC_K,    KC_X,    KC_B,    KC_M,    KC_W, KC_V,   KC_Z,    KC_RSFT,    KC_TRNS,                          KC_UP,
     KC_CAPS, KC_LGUI, KC_LALT,                   LT(ARROW,KC_SPC),                                      XXXXXXX,  KC_RALT, KC_RGUI,MO(LED_MANAGE) ,              KC_LEFT, KC_DOWN, KC_RGHT),

   [LED_MANAGE] = LAYOUT_all(
     KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, RGB_TOG, RGB_MOD, RGB_HUD, RGB_HUI,          RGB_SAD, RGB_SAI, RGB_VAD, RGB_VAI,                        BL_TOGG, BL_DOWN, BL_UP,
     KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,               KC_TRNS, KC_TRNS, KC_VOLU,
     KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, QK_BOOT,  KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                        KC_MPLY, KC_MNXT, KC_VOLD,
     KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
     KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
     KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),

   [ARROW] = LAYOUT_all(
     KC_ESC,           KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,    KC_F10,     KC_F11,     KC_F12,                  KC_PSCR, KC_SCRL, KC_PAUS,
     KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,     KC_MINS,    KC_EQL,     KC_BSPC,   XXXXXXX,      KC_INS,  KC_HOME, KC_PGUP,
     KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_UP,    KC_P,     KC_LBRC,    KC_RBRC,    KC_BSLS,                 KC_DEL,  KC_END,  KC_PGDN,
     KC_CAPS, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_LEFT,    KC_DOWN,    KC_RIGHT,    KC_SCLN,  KC_QUOT,    KC_NUHS,    KC_ENT,
     KC_LSFT, XXXXXXX, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,   KC_SLSH,    KC_RSFT,    KC_TRNS,                          KC_UP,
     KC_LCTL, KC_LGUI, KC_LALT,                   KC_SPC,                                      XXXXXXX,  MO(1),      KC_RGUI,      KC_RCTL,               KC_LEFT, KC_DOWN, KC_RGHT),


 [GAMING] = LAYOUT_all(
     KC_ESC,           KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,    KC_F10,     KC_F11,     KC_F12,                  KC_PSCR, KC_TRNS, KC_TRNS,
     KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,     KC_MINS,    KC_EQL,     KC_BSPC,   KC_BSPC,      KC_INS,  KC_HOME, KC_PGUP,
     KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,     KC_LBRC,    KC_RBRC,    KC_BSLS,                 KC_DEL,  KC_END,  KC_PGDN,
     KC_CAPS, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN,  KC_QUOT,    KC_NUHS,    KC_ENT,
     KC_LSFT, XXXXXXX, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,   KC_SLSH,    KC_RSFT,    KC_TRNS,                          KC_UP,
     KC_LCTL, KC_LGUI, KC_LALT,                   KC_SPC,                                      XXXXXXX,       KC_RALT,    MO(LED_MANAGE),      MO(LED_MANAGE),                 KC_LEFT, KC_DOWN, KC_RGHT),


};

void matrix_init_user(void) {

}

void matrix_scan_user(void) {

}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  return true;
}
