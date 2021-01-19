//
// Created by vagrant on 1/19/21.
//

#ifndef NETTY_CPP_REQUEST_H
#define NETTY_CPP_REQUEST_H


#include <string>
#include <unordered_map>

class Request {
private:
    enum class Method {
        GET,
        POST,
        PUT,
        DELETE
    };
    Method method;
    std::string host;
    std::string path;
    std::unordered_map<std::string, std::string> query_string;
    std::unordered_map<std::string, std::string> headers;
};


#endif //NETTY_CPP_REQUEST_H
