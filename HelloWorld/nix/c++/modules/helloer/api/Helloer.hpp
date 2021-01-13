#pragma once

#include <string>

class Helloer {
 public:
    virtual ~Helloer() = default;
    virtual std::string hello() const = 0;
    virtual std::string hello_to(const std::string & to) const = 0;
};
