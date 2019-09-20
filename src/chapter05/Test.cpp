// Copyright (c) 2019 FRC Team 3512. All Rights Reserved.

#include <gtest/gtest.h>

#include<cstdio>

#include "Exercise.hpp"

using namespace std;

TEST(Chapter05, Exercise02){
    std::freopen("../src/chapter05/inputs/Exercise02Input.txt", "r", stdin);
    testing::internal::CaptureStdout();
    CelsiustoKelvin();
    std::fclose(stdin);
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_TRUE(output.find("318.85") != std::string::npos);    
};

TEST(Chapter05, Exercise03){
    std::freopen("../src/chapter05/inputs/Exercise03Input.txt", "r", stdin);
    testing::internal::CaptureStderr();
    AbsoluteZero();
    std::string error = testing::internal::GetCapturedStderr();
    EXPECT_TRUE(error.find("Temperature below absolute zero!") != std::string::npos); 
}

TEST(Chapter05, Exercise05){
    std::freopen("../src/chapter05/inputs/Exercise05Inputs.txt", "r", stdin);
    testing::internal::CaptureStdout();
    KelvintoCelsius();
    std::fclose(stdin);
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_TRUE(output.find("71.85") != std::string::npos);
}

TEST(Chapter05, Exercise07){
    std::freopen("../src/chapter05/inputs/Exercise07Inputs.txt", "r", stdin);
    testing::internal::CaptureStdout();
    QuadraticEquations();
    std::fclose(stdin);
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_TRUE(output.find("-4 and -2 are the roots of this problem.") != std::string::npos); 
    EXPECT_TRUE(output.find("No roots!") != std::string::npos);
}

TEST(Chapter05, Exercise08){
    std::freopen("../src/chapter05/inputs/Exercise08Input.txt", "r", stdin);
    testing::internal::CaptureStdout();
    NthInteger();
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_TRUE(output.find("Please enter the number of values you want to sum:") != std::string::npos);
    EXPECT_TRUE(output.find("Please enter some integers (press '|' to stop):") != std::string::npos);
    EXPECT_TRUE(output.find("The sum of the first 3 numbers (24 25 63) is 112.") != std::string::npos);
}

TEST(Chapter05, Exercise09){
    std::freopen("../src/chapter05/input/Exercise09Input.txt", "r", stdin);
    testing::internal::CaptureStderr();
    NthIntWthError();
    std::string error = testing::internal::GetCapturedStderr();
    EXPECT_TRUE(error.find("Cannot be represented as an int.") != std::string::npos);
    testing::internal::CaptureStdout();
    NthIntWthError();
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_TRUE(output.find("Please enter the number of values you want to sum:") != std::string::npos);
    EXPECT_TRUE(output.find("Please enter some integers (press '|' to stop):") != std::string::npos);
}

TEST(Chapter05, Exercise10){
std::freopen("../src/chapter05/Exercise10Input.txt", "r", stdin);
Differences();
std::vector<double> expectedOutput {{5.5, 4.45}};
EXPECT_EQ(Differences(), expectedOutput); 
testing::internal::CaptureStdout();
Differences();
std::string output = testing::internal::GetCapturedStdout();
EXPECT_TRUE(output.find("Please enter the number of values you want to sum:") != std::string::npos);
EXPECT_TRUE(output.find("Please enter some numbers (press '|' to stop):") != std::string::npos);
EXPECT_TRUE(output.find("The sum of the first 3 numbers (2.5 8 8) is 18.5") != std::string::npos); 
}