#include <gtest/gtest.h>
#include "{{camel_case}}Factory.hpp"

class {{camel_case}}Test
: public testing::Test {
 public:
    void SetUp() override {
        {{snake_case}} = create_{{snake_case}}();
    };

    void TearDown() override {
        {{snake_case}}.reset();
    }

    std::unique_ptr<{{camel_case}}> {{snake_case}};
};

TEST_F({{camel_case}}Test, SetupTeardown) {}
