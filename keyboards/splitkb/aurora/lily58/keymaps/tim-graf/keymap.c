#include QMK_KEYBOARD_H


/* THIS FILE WAS GENERATED!
 *
 * This file was generated by qmk json2c. You may or may not want to
 * edit it directly.
 */

#include "keymap_german.h"

#define _BASE 0
#define _SYMB 1
#define _MOVE 2



const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[_BASE] = LAYOUT(   KC_ESC, DE_1, DE_2, DE_3, DE_4, DE_5,                      DE_6, DE_7, DE_8, DE_9, DE_0, DE_SS,
                        KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T,                      DE_Z, KC_U, KC_I, KC_O, KC_P, DE_UDIA,
                        KC_LCTL, KC_A, KC_S, KC_D, KC_F, KC_G,                     KC_H, KC_J, KC_K, KC_L, DE_ODIA, DE_ADIA,
                        KC_LSFT, DE_Y, KC_X, KC_C, KC_V, KC_B,  KC_LBRC, KC_MUTE,  KC_N, KC_M, DE_COMM, DE_DOT, DE_MINS, KC_RSFT,
                                        KC_LALT, KC_LGUI, MO(1), KC_SPC,  KC_ENT,   MO(2), KC_BSPC, KC_RGUI),

	[_SYMB] = LAYOUT(   KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6,                               KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12,
                        KC_TRNS, KC_TRNS, KC_TRNS, DE_AT, DE_LPRN, DE_RPRN,                     KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
                        KC_TRNS, KC_TRNS, DE_CIRC, DE_HASH, DE_LBRC, DE_RBRC,                   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
                        KC_TRNS, KC_TRNS, KC_TRNS, DE_TILD, DE_LCBR, DE_RCBR, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,KC_TRNS, KC_TRNS,
                                                    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
    [_MOVE] = LAYOUT(KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_GRV, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_TRNS, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, XXXXXXX, KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, XXXXXXX, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_TRNS, KC_TRNS, KC_PLUS, KC_MINS, KC_EQL, KC_LBRC, KC_RBRC, KC_BSLS, KC_TRNS, KC_TRNS, MO(3), KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS)

};





#ifdef ENCODER_ENABLE
bool encoder_update_user(uint8_t index, bool clockwise) {

    // 0 is left-half encoder,
    // 1 is right-half encoder
    if (index == 1) {
        // Volume control
        if (clockwise) {
            tap_code(KC_VOLU);
        } else {
            tap_code(KC_VOLD);
        }
    } else if (index == 0) {
        // Page up/Page down
        if (clockwise) {
            tap_code(KC_PGDN);
        } else {
            tap_code(KC_PGUP);
        }
    }

    return false;
}
#endif

/* #ifdef OLED_ENABLE

void my_painting(void) {
    static const char PROGMEM default_layer[] = {
        0x20, 0x4F, 0x4F, 0x4F, 0x20,
        0x20, 0xb4, 0xb5, 0xb6, 0x20,
        0x20, 0xd4, 0xd5, 0xd6, 0x20, 0};
        oled_write_P(default_layer, false);
}

bool oled_task_user(void) {
    // Host Keyboard Layer Status
    oled_write_P(PSTR("Layer: "), false);

    switch (get_highest_layer(layer_state)) {
        case _QWERTZ:
            oled_write_P(PSTR("Default\n"), false);
            my_painting();
            break;
        case _FOO:
            oled_write_P(PSTR("Foo\n"), false);
            break;
        case _BAR:
            oled_write_P(PSTR("Bar\n"), false);
            break;
        default:
            // Or use the write_ln shortcut over adding '\n' to the end of your string
            oled_write_ln_P(PSTR("Undefined"), false);
    }

    // Host Keyboard LED Status
    led_t led_state = host_keyboard_led_state();
    oled_write_P(led_state.num_lock ? PSTR("NUM ") : PSTR("    "), false);
    oled_write_P(led_state.caps_lock ? PSTR("CAP ") : PSTR("    "), false);
    oled_write_P(led_state.scroll_lock ? PSTR("SCR ") : PSTR("    "), false);

    return false;
}
#endif */
