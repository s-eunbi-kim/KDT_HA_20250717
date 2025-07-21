#include <gtest/gtest.h>

extern "C"
{
#include "hiker.h"
}

using namespace ::testing;

// add 함수 테스트
TEST(AddTest, ValidInputs) {
    ASSERT_EQ(add(3, 4), 7);        // 정상 입력
    ASSERT_EQ(add(0, 0), 0);        // 0 입력
}

TEST(AddTest, InvalidInputs) {
    ASSERT_EQ(add(-1, 5), -1);      // 음수 입력
    ASSERT_EQ(add(10, -5), -1);     // 음수 입력
}

// subtract 함수 테스트
TEST(SubtractTest, ValidInputs) {
    ASSERT_EQ(subtract(5, 3), 2);   // 정상 입력
    ASSERT_EQ(subtract(0, 0), 0);   // 0 입력
}

TEST(SubtractTest, InvalidInputs) {
    ASSERT_EQ(subtract(-5, 3), -1); // 음수 입력
    ASSERT_EQ(subtract(10, -5), -1);// 음수 입력
}

// multiply 함수 테스트
TEST(MultiplyTest, ValidInputs) {
    EXPECT_EQ(multiply(4, 5), 20);  // 정상 입력
    EXPECT_EQ(multiply(0, 100), 0); // 0 곱하기
}

TEST(MultiplyTest, InvalidInputs) {
    EXPECT_EQ(multiply(-1, 5), -1); // 음수 입력
    EXPECT_EQ(multiply(3, -3), -1); // 음수 입력
}

// divide 함수 테스트
TEST(DivideTest, ValidInputs) {
    EXPECT_EQ(divide(10, 2), 5);    // 정상 입력
    EXPECT_EQ(divide(0, 1), 0);     // 0 나누기
}

TEST(DivideTest, InvalidInputs) {
    EXPECT_EQ(divide(10, 0), -1);   // 0으로 나누기
    EXPECT_EQ(divide(-10, 2), -1);  // 음수 입력
}

TEST(GreetTest, ValidName) {
    EXPECT_STREQ(greet("Alice"), "Hello, Alice!");
    EXPECT_STREQ(greet("Bob"), "Hello, Bob!");
}

TEST(GreetTest, NullOrEmpty) {
    EXPECT_STREQ(greet(NULL), "[ERROR] name is null or empty");
    EXPECT_STREQ(greet(""), "[ERROR] name is null or empty");
}
