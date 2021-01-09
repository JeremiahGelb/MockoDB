#include <gtest/gtest.h>
#include "TalkerFactory.hpp"
#include "MockHelloer.hpp"

class TalkerTest
: public testing::Test {
 public:
    void SetUp() override {
        mock_helloer::init_mock_helloer();
        talker = create_talker("Jerry");
    };

    void TearDown() override {
        mock_helloer::destroy_mock_helloer();
        talker.reset();
    }

    std::unique_ptr<Talker> talker;
};

TEST_F(TalkerTest, TestTalker) {
    EXPECT_CALL(*mock_helloer::mock_helloer, hello())
        .WillOnce(testing::Return("apples"));

    EXPECT_EQ(talker->talk(), "apples My name is Jerry.");
}

