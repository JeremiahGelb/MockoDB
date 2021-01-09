#pragma once

#include <string>
#include "Helloer.hpp"
#include "gmock/gmock.h"

class MockHelloer
: public Helloer {
    // TODO(jgelb): make this gmock class
    std::string hello() const override {return "FIXME";}
    std::string hello_to(const std::string &) const override {return "";}
};
