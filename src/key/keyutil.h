// Copyright (c) 2017-2018 The Particl Core developers
// Copyright (c) 2016-2018 Duality Blockchain Solutions Developers
// Copyright (c) 2009-2018 Satoshi Nakamoto
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef DYNAMIC_KEY_KEYUTIL_H
#define DYNAMIC_KEY_KEYUTIL_H

#include <vector>
#include <inttypes.h>

uint32_t DynamicChecksum(uint8_t *p, uint32_t nBytes);
void AppendChecksum(std::vector<uint8_t> &data);
bool VerifyChecksum(const std::vector<uint8_t> &data);


#endif  // DYNAMIC_KEY_KEYUTIL_H
