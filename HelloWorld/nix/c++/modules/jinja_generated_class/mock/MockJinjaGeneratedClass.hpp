#pragma once

#include <string>
#include "JinjaGeneratedClass.hpp"
#include "gmock/gmock.h"

class MockJinjaGeneratedClass
: public JinjaGeneratedClass {
 public:
    MOCK_METHOD(void, your_method_here,
                (), (const, override));
};

namespace mock_jinja_generated_class {

extern MockJinjaGeneratedClass * mock_jinja_generated_class;
void init_mock_jinja_generated_class();
void destroy_mock_jinja_generated_class();

}  // namespace mock_jinja_generated_class
