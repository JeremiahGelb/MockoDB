#include "HelloerImpl.hpp"

std::string HelloerImpl::hello() const {
    return "Hello!";
}

std::string HelloerImpl::hello_to(const std::string & to) const {
    return "Hello " + to + "!";
}
