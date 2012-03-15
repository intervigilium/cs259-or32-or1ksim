/* sprs.h -- OR1K architecture specific special-purpose registers

   Copyright (C) 1999 Damjan Lampret, lampret@opencores.org
   Copyright (C) 2008 Embecosm Limited

   Contributor Jeremy Bennett <jeremy.bennett@embecosm.com>

   This file is part of Or1ksim, the OpenRISC 1000 Architectural Simulator.

   This program is free software; you can redistribute it and/or modify it
   under the terms of the GNU General Public License as published by the Free
   Software Foundation; either version 3 of the License, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful, but WITHOUT
   ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
   FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for
   more details.

   You should have received a copy of the GNU General Public License along
   with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* This program is commented throughout in a fashion suitable for processing
   with Doxygen. */


#ifndef SPRS__H
#define SPRS__H

/* Autoconf and/or portability configuration */
#include "port.h"

/* Package includes */
#include "arch.h"

/* Function prototypes for external use */
extern void      mtspr (uint16_t        regno,
			const uorreg_t  value);
extern uorreg_t  mfspr (const uint16_t  regno);
extern void      sprs_status ();
extern char     *dump_spr (uint16_t  spr,
			   uorreg_t  spr_val);

#endif /* SPRS__H */
