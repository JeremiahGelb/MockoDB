#pragma once

#include <string>

#include "Helloer.hpp"

class HelloerImpl
: public Helloer {
 public:
    std::string hello() const override;
    std::string hello_to(const std::string & to) const override;
};
