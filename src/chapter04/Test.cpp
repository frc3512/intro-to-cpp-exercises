// Copyright (c) 2019 FRC Team 3512. All Rights Reserved.

#include <gtest/gtest.h>

#include <cstdio>

#include "Exercise.hpp"

TEST(Chapter04, Exercise01A) {
    std::freopen("../src/chapter04/inputs/Exercise01AInput.txt", "r", stdin);
    testing::internal::CaptureStdout();
    MoneyConversion();
    std::fclose(stdin);
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_TRUE(output.find("1.3485") != std::string::npos);
    EXPECT_TRUE(output.find("22.2") != std::string::npos);
    EXPECT_TRUE(output.find(".605") != std::string::npos);
}

TEST(Chapter04, Exercise01B) {
    std::freopen("../src/chapter04/inputs/Exercise01BInput.txt", "r", stdin);
    testing::internal::CaptureStdout();
    SwitchMoneyConversion();
    std::fclose(stdin);
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_TRUE(output.find("19.0278") != std::string::npos);
    EXPECT_TRUE(output.find("30.525") != std::string::npos);
    EXPECT_TRUE(output.find(".12342") != std::string::npos);
    EXPECT_TRUE(output.find("10220") != std::string::npos);
    EXPECT_TRUE(output.find(".2") != std::string::npos);
}

TEST(Chapter04, Exercise01C) {
    testing::internal::CaptureStdout();
    IntegerAlphabet();
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_TRUE(output.find("a  97") != std::string::npos);
    EXPECT_TRUE(output.find("z  122") != std::string::npos);
}

TEST(Chapter04, Exercise01D) {
    testing::internal::CaptureStdout();
    ForIntegerAlphabet();
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_TRUE(output.find("a  97") != std::string::npos);
    EXPECT_TRUE(output.find("z  122") != std::string::npos);
    EXPECT_TRUE(output.find("A  123") != std::string::npos);
    EXPECT_TRUE(output.find("Z  148") != std::string::npos);
    EXPECT_TRUE(output.find("1  149") != std::string::npos);
    EXPECT_TRUE(output.find("10 159") != std::string::npos);
}

TEST(Chapter04, Exercise01E) {
    std::freopen("../src/chapter04/inputs/Exercise01EInput.txt", "r", stdin);
    testing::internal::CaptureStdout();
    Square();
    std::fclose(stdin);
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_TRUE(output.find("531441") != std::string::npos);
}

TEST(Chapter04, Exercise01F) {
    std::freopen("../src/chapter04/inputs/Exercise01FInput.txt", "r", stdin);
    testing::internal::CaptureStdout();
    BleepWords();
    std::fclose(stdin);
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_TRUE(output.find("BLEEP") != std::string::npos);
    EXPECT_TRUE(output.find("Pizza") != std::string::npos);
}
