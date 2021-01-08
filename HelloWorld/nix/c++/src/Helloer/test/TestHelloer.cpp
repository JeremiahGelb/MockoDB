#include <gtest/gtest.h>
#include "HelloerFactory.hpp"

class HelloerTest
: public testing::Test {
 public:
    void SetUp() override {
        helloer = create_helloer();
    };

    void TearDown() override {
        helloer.reset();
    }

    std::unique_ptr<Helloer> helloer;
};

TEST_F(HelloerTest, TestHello) {
    EXPECT_EQ(helloer->hello(), "Hello!");
}

TEST_F(HelloerTest, TestHelloTo) {
    EXPECT_EQ(helloer->hello_to("you"), "Hello you!");
}
