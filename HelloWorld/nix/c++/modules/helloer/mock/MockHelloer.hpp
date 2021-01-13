#pragma once

#include <string>
#include "Helloer.hpp"
#include "gmock/gmock.h"

class MockHelloer
: public Helloer {
 public:
    MOCK_METHOD(std::string, hello,
                (), (const, override));
    MOCK_METHOD(std::string, hello_to,
                (const std::string &), (const, override));
};

namespace mock_helloer {

extern MockHelloer * mock_helloer;
void init_mock_helloer();
void destroy_mock_helloer();

}  // namespace mock_helloer
