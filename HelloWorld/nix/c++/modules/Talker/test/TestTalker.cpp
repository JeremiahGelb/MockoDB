#include <gtest/gtest.h>
#include "TalkerFactory.hpp"

class TalkerTest
: public testing::Test {
 public:
    void SetUp() override {
        talker = create_talker("Jerry");
    };

    void TearDown() override {
        talker.reset();
    }

    std::unique_ptr<Talker> talker;
};

TEST_F(TalkerTest, TestTalker) {
    // todo(jgelb): make this test better once helloer is mocked
    EXPECT_EQ(talker->talk(), "FIXME My name is Jerry.");
}

