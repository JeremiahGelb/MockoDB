#pragma once

#include <string>

class Talker {
 public:
    virtual std::string talk() const = 0;
};
