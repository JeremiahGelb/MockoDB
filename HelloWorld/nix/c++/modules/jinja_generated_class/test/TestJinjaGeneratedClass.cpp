#include <gtest/gtest.h>
#include "JinjaGeneratedClassFactory.hpp"

class JinjaGeneratedClassTest
: public testing::Test {
 public:
    void SetUp() override {
        jinja_generated_class = create_jinja_generated_class();
    };

    void TearDown() override {
        jinja_generated_class.reset();
    }

    std::unique_ptr<JinjaGeneratedClass> jinja_generated_class;
};

TEST_F(JinjaGeneratedClassTest, SetupTeardown) {}
