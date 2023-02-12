/* Copyright 2023 Ethan Foley-Lewis
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
#pragma once

#include "quantum.h"
#define ____ KC_NO

/* This a shortcut to help you visually see your layout.
 *
 * The first section contains all of the arguments representing the physical
 * layout of the board and position of the keys.
 *
 * The second converts the arguments into a two-dimensional array which
 * represents the switch matrix.
 */
#define LAYOUT_default( \
    K101, \
    K201, K202, K203, K204, K205, K206, K207, K208, K209, K210, K211, K212, K213, K214, K215, K216, \
    K301, K302, K303, K304, K305, K306, K307, K308, K309, K310, K311, K312, K313, K314,       K315, \
    K401,    K402, K403, K404, K405, K406, K407, K408, K409, K410, K411, K412, K413, K414,    K415, \
    K501,     K502, K503, K504, K505, K506, K507, K508, K509, K510, K511, K512, K513,         K514, \
    K601,       K602, K603, K604, K605, K606, K607, K608, K609, K610, K611,    K612,    K613, K614, \
    K701,   K702,   K703,                 K704,                 K705, K706, K707, K708, K709, K710  \
) { \
    { K101, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____ }, \
    { K201, K202, K203, K204, K205, K206, K207, K208, K209, K210, K211, K212, K214, K215, K216 }, \
    { K301, K302, K303, K304, K305, K306, K307, K308, K309, K310, K311, K312, K213, K314, K315 }, \
    { K401, K402, K403, K404, K405, K406, K407, K408, K409, K410, K411, K412, K313, K414, K415 }, \
    { K501, K502, K503, K504, K505, K506, K507, K508, K509, K510, K511, K512, K413, K513, K514 }, \
    { K601, ____, K602, K603, K604, K605, K606, K607, K608, K609, K610, K611, K612, K613, K614 }, \
    { K701, K702, K703, ____, ____, ____, K704, ____, ____, K705, K706, K707, K708, K709, K710 }  \
}
