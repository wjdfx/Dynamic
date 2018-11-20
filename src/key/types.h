// Copyright (c) 2014-2015 The ShadowCoin developers
// Copyright (c) 2017-2018 The Particl Core developers
// Copyright (c) 2016-2018 Duality Blockchain Solutions Developers
// Copyright (c) 2009-2018 Satoshi Nakamoto
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef DYNAMIC_KEY_TYPES_H
#define DYNAMIC_KEY_TYPES_H

typedef std::vector<uint8_t> ec_point;

const size_t EC_SECRET_SIZE = 32;
const size_t EC_COMPRESSED_SIZE = 33;
const size_t EC_UNCOMPRESSED_SIZE = 65;

//typedef struct ec_secret { uint8_t e[EC_SECRET_SIZE]; } ec_secret;

#endif  // DYNAMIC_KEY_TYPES_H
