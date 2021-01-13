#pragma once

#include <string>
#include "{{camel_case}}.hpp"
#include "gmock/gmock.h"

class Mock{{camel_case}}
: public {{camel_case}} {
 public:
    MOCK_METHOD(void, your_method_here,
                (), (const, override));
};

namespace mock_{{snake_case}} {

extern Mock{{camel_case}} * mock_{{snake_case}};
void init_mock_{{snake_case}}();
void destroy_mock_{{snake_case}}();

}  // namespace mock_{{snake_case}}
