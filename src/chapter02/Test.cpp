// Copyright (c) 2019 FRC Team 3512. All Rights Reserved.

#include <gtest/gtest.h>

#include "Exercise.hpp"

TEST(Chapter2, Exercise1A) {
    testing::internal::CaptureStdout();
    HelloProgramming();
    EXPECT_EQ(testing::internal::GetCapturedStdout(), "Hello, programming!");
}

TEST(Chapter2, Exercise1B) {
    testing::internal::CaptureStdout();
    HereWeGo();
    EXPECT_EQ(testing::internal::GetCapturedStdout(), "Here we go!");
}
