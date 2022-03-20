/* Copyright 2022 kubek344
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

// Defines names for use in layer keycodes and the keymap
enum layer_names {
    _BASE
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* Base 
    *      ,-------------.
    *      | prnt | mute |
    *  ,------+------+------.
    *  | prev | play | next |
    *  `------+------+------'
    *     | f13  | f14  |
    *     `-------------'  
    */
    [_BASE] = LAYOUT(
            KC_PSCR,   KC_MUTE,
        KC_MPRV,   KC_MPLY,   KC_MNXT,
            KC_F13,    KC_F14
    ),
};


void encoder_update_user(uint8_t index, bool clockwise) {
  if (index == 0) { /* First encoder */
    if (clockwise) {
      tap_code(KC_VOLD);
    } else {
      tap_code(KC_VOLU);
    }
  }
}

void matrix_init_user(void) {
}

void matrix_scan_user(void) {
}