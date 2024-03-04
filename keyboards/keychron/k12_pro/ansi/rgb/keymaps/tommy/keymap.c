/* Copyright 2023 @ Keychron (https://www.keychron.com)
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

// clang-format off
enum layers{
    MAC,
    WIN,
    FN1,
    FN2,
    KCF,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [MAC] = LAYOUT_61_ansi(
        QK_GESC,          KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_MINS,  KC_EQL,   KC_BSPC,
        KC_TAB,           KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,     KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_LBRC,  KC_RBRC,  KC_BSLS,
        LT(FN1, KC_BSPC), KC_A,     KC_S,     KC_D,     KC_F,     KC_G,     KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,  KC_QUOT,            KC_ENT,
        KC_LSFT,                    KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,            KC_RSFT,
        KC_LCTL,          KC_LOPTN, KC_LCMMD,                               KC_SPC,                                 KC_RCMMD, KC_ROPTN, MO(KCF),  KC_RCTL),

    [WIN] = LAYOUT_61_ansi(
        QK_GESC,          KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_MINS,  KC_EQL,   KC_BSPC,
        KC_TAB,           KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,     KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_LBRC,  KC_RBRC,  KC_BSLS,
        LT(FN1, KC_BSPC), KC_A,     KC_S,     KC_D,     KC_F,     KC_G,     KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,  KC_QUOT,            KC_ENT,
        KC_LSFT,                    KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,            KC_RSFT,
        KC_LCTL,          KC_LGUI,  KC_LALT,                                KC_SPC,                                 KC_RALT,  KC_APP,   MO(KCF),  KC_RCTL),

    [FN1] = LAYOUT_61_ansi(
        KC_GRV,   KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,   KC_F12,   RGB_MOD,
        MO(FN2),  KC_MSTP,  KC_MPRV,  KC_MPLY,  KC_MNXT,  _______,  _______,  KC_MUTE,  KC_VOLD,  KC_VOLU,  KC_PSCR,  _______,  _______,  _______,
        _______,  _______,  _______,  _______,  _______,  _______,  KC_LEFT,  KC_DOWN,  KC_UP,    KC_RIGHT, KC_PGUP,  KC_PGDN,            RGB_TOG,
        _______,            _______,  _______,  _______,  KC_BRID,  KC_BRIU,  KC_HOME,  KC_END,   KC_DEL,   _______,  _______,            _______,
        _______,  _______,  _______,                                _______,                                KC_LNG2,  KC_LNG1,  KC_INT5,  KC_INT4),

    [FN2] = LAYOUT_61_ansi(
        _______,  DF(MAC),  DF(WIN),  _______,  _______,  _______,  _______,  _______,    _______,    _______,     _______,     _______,       _______,  _______,
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  KC_MS_BTN1, KC_MS_UP,   KC_MS_BTN2,  _______,     _______,       _______,  _______,
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  KC_MS_LEFT, KC_MS_DOWN, KC_MS_RIGHT, KC_MS_WH_UP, KC_MS_WH_DOWN,           _______,
        _______,            _______,  _______,  _______,  _______,  BAT_LVL,  NK_TOGG,    KC_LNG2,    KC_LNG1,     KC_INT5,     KC_INT4,                 _______,
        _______,  _______,  _______,                                _______,                                       _______,     _______,       _______,  _______),

    [KCF] = LAYOUT_61_ansi(
        KC_GRV,   KC_BRID,  KC_BRIU,  KC_MCTL,  KC_LPAD,  RGB_VAD,  RGB_VAI,  KC_MPRV,  KC_MPLY,  KC_MNXT,  KC_MUTE,  KC_VOLD,  KC_VOLU,  RGB_MOD,
        _______,  BT_HST1,  BT_HST2,  BT_HST3,  _______,  _______,  _______,  _______,  _______,  _______,  KC_INS,   KC_PGUP,  KC_HOME,  _______,
        RGB_TOG,  RGB_MOD,  RGB_VAI,  RGB_HUI,  RGB_SAI,  RGB_SPI,  _______,  _______,  KC_UP,    KC_SNAP,  KC_PGDN,  KC_END,             _______,
        _______,            RGB_RMOD, RGB_VAD,  RGB_HUD,  RGB_SAD,  RGB_SPD,  NK_TOGG,  KC_LEFT,  KC_DOWN,  KC_RIGHT, KC_DEL,             _______,
        _______,  _______,  _______,                                _______,                                _______,  _______,  _______,  _______),
};
