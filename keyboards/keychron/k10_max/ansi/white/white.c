/* Copyright 2024 @ Keychron (https://www.keychron.com)
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

#include "quantum.h"

// clang-format off
#ifdef LED_MATRIX_ENABLE
const snled27351_led_t g_snled27351_leds[LED_MATRIX_LED_COUNT] = {
/* Refer to SNLED27351 manual for these locations
 *   driver
 *   |  LED address
 *   |  | */
    {0, A_16},
    {0, A_14},
    {0, A_13},
    {0, A_12},
    {0, A_11},
    {0, A_10},
    {0, A_9},
    {0, A_8},
    {0, A_7},
    {0, A_6},
    {0, A_5},
    {0, A_4},
    {0, A_3},
    {0, A_2},
    {0, A_1},
    {0, G_1},
    {0, G_2},
    {0, G_3},
    {0, G_4},

    {0, B_16},
    {0, B_15},
    {0, B_14},
    {0, B_13},
    {0, B_12},
    {0, B_11},
    {0, B_10},
    {0, B_9},
    {0, B_8},
    {0, B_7},
    {0, B_6},
    {0, B_5},
    {0, B_4},
    {0, B_3},
    {0, B_2},
    {0, B_1},
    {0, H_1},
    {0, H_2},
    {0, H_3},
    {0, H_4},

    {0, C_16},
    {0, C_15},
    {0, C_14},
    {0, C_13},
    {0, C_12},
    {0, C_11},
    {0, C_10},
    {0, C_9},
    {0, C_8},
    {0, C_7},
    {0, C_6},
    {0, C_5},
    {0, C_4},
    {0, C_3},
    {0, C_2},
    {0, C_1},
    {0, G_6},
    {0, G_7},
    {0, G_8},
    {0, G_9},

    {0, D_16},
    {0, D_15},
    {0, D_14},
    {0, D_13},
    {0, D_12},
    {0, D_11},
    {0, D_10},
    {0, D_9},
    {0, D_8},
    {0, D_7},
    {0, D_6},
    {0, D_5},
    {0, D_4},
    {0, G_5},
    {0, H_5},
    {0, G_10},
    {0, H_10},
    {0, H_7},
    {0, H_8},
    {0, H_9},

    {0, E_16},
    {0, E_14},
    {0, E_13},
    {0, E_12},
    {0, E_11},
    {0, E_10},
    {0, E_9},
    {0, E_8},
    {0, E_7},
    {0, E_6},
    {0, E_5},
    {0, E_3},
    {0, E_1},
    {0, H_6},
    {0, H_11},
    {0, H_12},

    {0, F_16},
    {0, F_15},
    {0, F_14},
    {0, F_10},
    {0, F_6},
    {0, F_5},
    {0, F_4},
    {0, F_3},
    {0, F_2},
    {0, F_1},
    {0, G_13},
    {0, G_11},
    {0, G_12},
};

#define __ NO_LED

led_config_t g_led_config = {
    {
        // Key Matrix to LED Index
        {   0,  __,   1,   2,   3,   4,   5,   6,   7,   8,   9,  10,  11,  12,  13,  14,  15,  16,  17,  18 },
        {  19,  20,  21,  22,  23,  24,  25,  26,  27,  28,  29,  30,  31,  32,  33,  34,  35,  36,  37,  38 },
        {  39,  40,  41,  42,  43,  44,  45,  46,  47,  48,  49,  50,  51,  52,  53,  54,  55,  56,  57,  58 },
        {  59,  60,  61,  62,  63,  64,  65,  66,  67,  68,  69,  70,  71,  72,  73,  74,  75,  76,  77,  78 },
        {  79,  __,  80,  81,  82,  83,  84,  85,  86,  87,  88,  89,  __,  90,  __,  91,  __,  92,  93,  94 },
        {  95,  96,  97,  __,  __,  __,  98,  __,  __,  __,  99, 100, 101, 102, 103, 104, 105,  __, 106, 107 },
    },
    {
        // LED Index to Physical Position
        {0, 0},          {21, 0}, {31, 0}, {42, 0}, {52, 0}, {68, 0}, {78, 0}, {89, 0}, {99, 0}, {115, 0}, {125, 0}, {136, 0}, {146, 0}, {159, 0}, {169, 0}, {180, 0}, {193, 0}, {203, 0}, {214, 0},
        {0,15}, {10,15}, {21,15}, {31,15}, {42,15}, {52,15}, {63,15}, {73,15}, {83,15}, {94,15}, {104,15}, {115,15}, {125,15}, {141,15}, {159,15}, {169,15}, {180,15}, {193,15}, {203,15}, {214,15},
        {3,27}, {16,27}, {26,27}, {36,27}, {47,27}, {57,27}, {68,27}, {78,27}, {89,27}, {99,27}, {109,27}, {120,27}, {130,27}, {143,27}, {159,27}, {169,27}, {180,27}, {193,27}, {203,27}, {214,27},
        {4,40}, {18,40}, {29,40}, {39,40}, {50,40}, {60,40}, {70,40}, {81,40}, {91,40}, {102,40},{112,40}, {123,40}, {139,40}, {224, 0}, {224,15}, {224,34}, {224,58}, {193,40}, {203,40}, {214,40},
        {7,52},          {23,52}, {34,52}, {44,52}, {55,52}, {65,52}, {76,52}, {86,52}, {96,52}, {107,52}, {117,52},           {137,52},           {169,52},           {193,52}, {203,52}, {214,52},
        {1,64}, {14,64}, {27,64},                            {66,64},                            {105,64}, {118,64}, {131,64}, {145,64}, {159,64}, {169,64}, {180,64},           {198,64}, {214,64},
    },
    {
        // LED Index to Flag
        1,    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
        1,    1, 1, 1, 1, 1, 1, 1, 1, 1, 1,    1,    1,    1, 1, 1,
        1, 1, 1,          1,          1, 1, 1, 1, 1, 1, 1,    1, 1,
    }
};
#endif
