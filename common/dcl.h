/* ScummVM - Graphic Adventure Engine
 *
 * ScummVM is the legal property of its developers, whose names
 * are too numerous to list here. Please refer to the COPYRIGHT
 * file distributed with this source distribution.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA.
 *
 */

/**
 * @file
 * PKWARE DCL ("explode") ("PKWARE data compression library") decompressor used in engines:
 * - agos (exclusively for Simon 2 setup.shr file)
 * - mohawk
 * - sci
 */

#ifndef COMMON_DCL_H
#define COMMON_DCL_H

#include "common/scummsys.h"

namespace Common {

class ReadStream;
class SeekableReadStream;

/**
 * Try to decompress a PKWARE DCL (PKWARE data compression library) compressed stream. Returns true if
 * successful.
 */
bool decompressDCL(ReadStream *sourceStream, byte *dest, uint32 packedSize, uint32 unpackedSize);

/**
 * Try to decompress a PKWARE DCL (PKWARE data compression library) compressed stream. Returns a valid pointer
 * if successful and 0 otherwise.
 */
SeekableReadStream *decompressDCL(SeekableReadStream *sourceStream, uint32 packedSize, uint32 unpackedSize);

/**
 * Try to decompress a PKWARE DCL (PKWARE data compression library) compressed stream. Returns a valid pointer
 * if successful and 0 otherwise. This method is meant for cases, where the unpacked size is not known.
 */
SeekableReadStream *decompressDCL(SeekableReadStream *sourceStream);

} // End of namespace Common

#endif
