/**
 * This file is part of sally.
 * Copyright (C) 2015 SRI International.
 *
 * Sally is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * Sally is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with sally.  If not, see <http://www.gnu.org/licenses/>.
 */

#include "expr/term_ops.h"

#include <iostream>

namespace sally {
namespace expr {

std::ostream& operator << (std::ostream& out, term_op op) {

#define SWITCH_TO_STRING(op) case op: out << #op; break;
  switch (op) {
    SWITCH_TO_STRING(TYPE_BOOL)
    SWITCH_TO_STRING(TYPE_INTEGER)
    SWITCH_TO_STRING(TYPE_REAL)
    SWITCH_TO_STRING(TYPE_STRUCT)
    SWITCH_TO_STRING(VARIABLE)
    SWITCH_TO_STRING(TERM_EQ)
    SWITCH_TO_STRING(TERM_ITE)
    SWITCH_TO_STRING(CONST_BOOL)
    SWITCH_TO_STRING(TERM_AND)
    SWITCH_TO_STRING(TERM_OR)
    SWITCH_TO_STRING(TERM_NOT)
    SWITCH_TO_STRING(TERM_IMPLIES)
    SWITCH_TO_STRING(TERM_XOR)
    SWITCH_TO_STRING(CONST_RATIONAL)
    SWITCH_TO_STRING(TERM_ADD)
    SWITCH_TO_STRING(TERM_SUB)
    SWITCH_TO_STRING(TERM_MUL)
    SWITCH_TO_STRING(TERM_DIV)
    SWITCH_TO_STRING(TERM_LEQ)
    SWITCH_TO_STRING(TERM_LT)
    SWITCH_TO_STRING(TERM_GEQ)
    SWITCH_TO_STRING(TERM_GT)
    SWITCH_TO_STRING(CONST_STRING)
    SWITCH_TO_STRING(CONST_BITVECTOR)
    SWITCH_TO_STRING(TERM_BV_ADD)
    SWITCH_TO_STRING(TERM_BV_SUB)
    SWITCH_TO_STRING(TERM_BV_MUL)
    SWITCH_TO_STRING(TERM_BV_UDIV)
    SWITCH_TO_STRING(TERM_BV_SDIV)
    SWITCH_TO_STRING(TERM_BV_UREM)
    SWITCH_TO_STRING(TERM_BV_SREM)
    SWITCH_TO_STRING(TERM_BV_SMOD)
    SWITCH_TO_STRING(TERM_BV_XOR)
    SWITCH_TO_STRING(TERM_BV_SHL)
    SWITCH_TO_STRING(TERM_BV_LSHR)
    SWITCH_TO_STRING(TERM_BV_ASHR)
    SWITCH_TO_STRING(TERM_BV_NOT)
    SWITCH_TO_STRING(TERM_BV_AND)
    SWITCH_TO_STRING(TERM_BV_OR)
    SWITCH_TO_STRING(TERM_BV_NAND)
    SWITCH_TO_STRING(TERM_BV_NOR)
    SWITCH_TO_STRING(TERM_BV_XNOR)
    SWITCH_TO_STRING(TERM_BV_CONCAT)
    SWITCH_TO_STRING(TERM_BV_EXTRACT)
    SWITCH_TO_STRING(TERM_BV_ULEQ)
    SWITCH_TO_STRING(TERM_BV_SLEQ)
    SWITCH_TO_STRING(TERM_BV_ULT)
    SWITCH_TO_STRING(TERM_BV_SLT)
    SWITCH_TO_STRING(TERM_BV_UGEQ)
    SWITCH_TO_STRING(TERM_BV_SGEQ)
    SWITCH_TO_STRING(TERM_BV_UGT)
    SWITCH_TO_STRING(TERM_BV_SGT)
    SWITCH_TO_STRING(OP_LAST)

  default:
    out << "unknown";
  }
#undef SWITCH_TO_STRING
  return out;
}

}
}
