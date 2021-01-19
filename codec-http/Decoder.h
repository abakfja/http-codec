//
// Created by vagrant on 1/16/21.
//

#ifndef NETTY_CPP_DECODER_H
#define NETTY_CPP_DECODER_H

#include <string>
#include <unordered_map>

#include "Request.h"

class Decoder {

public:
    Decoder() = default;

    Request decode(std::string_view);
};


#endif //NETTY_CPP_DECODER_H
