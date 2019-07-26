// Copyright (c) 2019 FRC Team 3512. All Rights Reserved.

#include <gtest/gtest.h>

#include <cstdio>

#include "Exercise.hpp"

TEST(Chapter04, Exercise08A) { EXPECT_EQ(GetOneThousandRice(), 11); }

TEST(Chapter04, Exercise08B) { EXPECT_EQ(GetOneMillionRice(), 21); }

TEST(Chapter04, Exercise08C) { EXPECT_EQ(GetOneBillionRice(), 31); }

TEST(Chapter04, Exercise11) {
    std::vector<int> expectedOutput{{2,  3,  5,  7,  11, 13, 17, 19, 23,
                                     29, 31, 37, 41, 43, 47, 53, 59, 61,
                                     67, 71, 73, 79, 83, 89, 97}};
    EXPECT_EQ(GetAllPrimes(), expectedOutput);
}

TEST(Chapter04, Exercise13) {
    std::vector<int> expectedOutput{{2,  3,  5,  7,  11, 13, 17, 19, 23,
                                     29, 31, 37, 41, 43, 47, 53, 59, 61,
                                     67, 71, 73, 79, 83, 89, 97}};
    EXPECT_EQ(GetAllPrimes(), expectedOutput);
}

TEST(Chapter04, Exercise15) {
    std::freopen("../src/chapter04/inputs/Exercise15Input.txt", "r", stdin);
    std::vector<int> expectedOutput{{
        2,
        3,
        5,
        7,
        11,
        13,
        17,
        19,
        23,
        29,
    }};
    EXPECT_EQ(AllNthPrimes(), expectedOutput);
    std::fclose(stdin);
}

TEST(Chapter04, Exercise19) {
    std::freopen("../src/chapter04/inputs/Exercise19Input.txt", "r", stdin);
    testing::internal::CaptureStdout();
    NameValuePairs();
    std::fclose(stdin);
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_TRUE(output.find("(Kyle,18)") != std::string::npos);
    EXPECT_TRUE(output.find("(Matthew,78)") != std::string::npos);
    EXPECT_TRUE(output.find("(Jin,56)") != std::string::npos);
    EXPECT_TRUE(output.find("(Ivy,43)") != std::string::npos);
    EXPECT_TRUE(output.find("(Gabriel,12)") != std::string::npos);
    EXPECT_TRUE(output.find("(NoName,0)") != std::string::npos);
    testing::internal::CaptureStderr();
    NameValuePairs();
    std::string error = testing::internal::GetCapturedStderr();
    EXPECT_TRUE(error.find("One name is entered twice.") != std::string::npos);
}

TEST(Chapter04, Exercise20) {
    std::freopen("../src/chapter04/inputs/Exercise20Input.txt.", "r", stdin);
    testing::internal::CaptureStdout();
    NameValuePairs2();
    std::fclose(stdin);
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_TRUE(output.find("18") != std::string::npos);
    EXPECT_TRUE(output.find("78") != std::string::npos);
    EXPECT_TRUE(output.find("56") != std::string::npos);
    EXPECT_TRUE(output.find("43") != std::string::npos);
    EXPECT_TRUE(output.find("12") != std::string::npos);
    testing::internal::CaptureStderr();
    NameValuePairs2();
    std::string error = testing::internal::GetCapturedStderr();
    EXPECT_TRUE(error.find("name not found.") != std::string::npos);
}

TEST(Chapter04, Exercise21) {
    std::freopen("../src/chapter04/inputs/Exercise21Input.txt", "r", stdin);
    testing::internal::CaptureStdout();
    NameValuePairs3();
    std::fclose(stdin);
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_TRUE(output.find("Kyle") != std::string::npos);
    EXPECT_TRUE(output.find("Matthew") != std::string::npos);
    EXPECT_TRUE(output.find("jin") != std::string::npos);
    EXPECT_TRUE(output.find("Ivy") != std::string::npos);
    EXPECT_TRUE(output.find("Gabriel") != std::string::npos);
    testing::internal::CaptureStderr();
    NameValuePairs3();
    std::string error = testing::internal::GetCapturedStderr();
    EXPECT_TRUE(error.find("score not found.") != std::string::npos);
}
