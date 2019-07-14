// Copyright (c) 2019 FRC Team 3512. All Rights Reserved.

#include <gtest/gtest.h>

#include <cstdio>

#include "Exercise.hpp"

TEST(Chapter03, Exercise01A) {
    std::freopen("../src/chapter03/inputs/Exercise01AInput.txt", "r", stdin);
    testing::internal::CaptureStdout();
    PrintNameAndAge();
    std::fclose(stdin);
    EXPECT_EQ(testing::internal::GetCapturedStdout(),
              "Please enter your first name and age\nHello, Tyler (age 294 "
              "months)\n");
}

TEST(Chapter03, Exercise01B) {
    std::freopen("../src/chapter03/inputs/Exercise01BInput.txt", "r", stdin);
    testing::internal::CaptureStdout();
    TestInteger();
    std::fclose(stdin);
    EXPECT_EQ(testing::internal::GetCapturedStdout(),
              "Please enter a floating-point value: n == 31\nn+1 == 32\nthree "
              "times n == 93\ntwice n == 62\nn squared == 961\nhalf of n == "
              "15\nsquare root of n == 5.56776\nremainder of half of n == 1\n");
}

TEST(Chapter03, Exercise01C) {
    std::freopen("../src/chapter03/inputs/Exercise01CInput.txt", "r", stdin);
    testing::internal::CaptureStdout();
    DetectRepeatedWords();
    std::fclose(stdin);
    EXPECT_EQ(testing::internal::GetCapturedStdout(),
              "repeated word: He\nrepeated word: He\nrepeated word: "
              "did\nrepeated word: very\nrepeated word: good\n");
}

TEST(Chapter03, Exercise01D) {
    testing::internal::CaptureStdout();
    PrintGoodbye();
    EXPECT_EQ(testing::internal::GetCapturedStdout(),
              "Goodbye, cruel world!\n");
}

TEST(Chapter03, Exercise01E) {
    std::freopen("../src/chapter03/inputs/Exercise01EInput.txt", "r", stdin);
    testing::internal::CaptureStdout();
    TestInputs();
    std::fclose(stdin);
    EXPECT_EQ(
        testing::internal::GetCapturedStdout(),
        "d==2 i==2 i2==2 char(\x2)\nd==3 i==3 i2==3 char(\x3)\nd==128 i==128 "
        "i2==-128 char(\x80)\nd==1001 i==1001 i2==-23 char(\xE9)\nd==-1 i==-1 "
        "i2==-1 char(\xFF)\nd==56 i==56 i2==56 char(8)\nd==89 i==89 i2==89 "
        "char(Y)\nd==128 i==128 i2==-128 char(\x80)\nd==56.9 i==56 i2==56 "
        "char(8)\nd==56.2 i==56 i2==56 char(8)\n");
}

TEST(Chapter03, Exercise02) {
    std::freopen("../src/chapter03/inputs/Exercise02Input.txt", "r", stdin);
    testing::internal::CaptureStdout();
    MiToKm();
    std::fclose(stdin);
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_TRUE(output.find("7.4014") != std::string::npos);
}

TEST(Chapter03, Exercise04) {
    std::freopen("../src/chapter03/inputs/Exercise04Input.txt", "r", stdin);
    testing::internal::CaptureStdout();
    CompareIntegers();
    std::fclose(stdin);
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_TRUE(output.find("Smaller: 17\nLarger: 38\n") != std::string::npos);
    EXPECT_TRUE(output.find("55") != std::string::npos);
    EXPECT_TRUE(output.find("-21") != std::string::npos);
    EXPECT_TRUE(output.find("646") != std::string::npos);
    EXPECT_TRUE(output.find("0") != std::string::npos);
}

TEST(Chapter03, Exercise05) {
    std::freopen("../src/chapter03/inputs/Exercise05Input.txt", "r", stdin);
    testing::internal::CaptureStdout();
    CompareDoubles();
    std::fclose(stdin);
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_TRUE(output.find("Smaller: 17.0\nLarger: 38.0\n") !=
                std::string::npos);
    EXPECT_TRUE(output.find("55.0") != std::string::npos);
    EXPECT_TRUE(output.find("-21.0") != std::string::npos);
    EXPECT_TRUE(output.find("646.0") != std::string::npos);
    EXPECT_TRUE(output.find("0.447368") != std::string::npos);
}

TEST(Chapter03, Exercise06) {
    std::freopen("../src/chapter03/inputs/Exercise06Input.txt", "r", stdin);
    testing::internal::CaptureStdout();
    RearrangeIntegers();
    std::fclose(stdin);
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_TRUE(output.find("9, 10, 10") != std::string::npos);
}

TEST(Chapter03, Exercise07) {
    std::freopen("../src/chapter03/inputs/Exercise07Input.txt", "r", stdin);
    testing::internal::CaptureStdout();
    RearrangeStrings();
    std::fclose(stdin);
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_TRUE(output.find("Douglas, Rowe, Soto") != std::string::npos);
}

TEST(Chapter03, Exercise08) {
    std::freopen("../src/chapter03/inputs/Exercise08Input.txt", "r", stdin);
    testing::internal::CaptureStdout();
    OddOrEven();
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_TRUE(output.find("The value 7 is an odd number") !=
                std::string::npos);
    testing::internal::CaptureStdout();
    OddOrEven();
    output = testing::internal::GetCapturedStdout();
    EXPECT_TRUE(output.find("The value -12 is an even number") !=
                std::string::npos);
    testing::internal::CaptureStdout();
    OddOrEven();
    std::fclose(stdin);
    output = testing::internal::GetCapturedStdout();
    EXPECT_TRUE(output.find("The value 0 is an even number") !=
                std::string::npos);
}

TEST(Chapter03, Exercise09) {
    std::freopen("../src/chapter03/inputs/Exercise09Input.txt", "r", stdin);
    testing::internal::CaptureStdout();
    ConvertSpelledOutNumber();
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_TRUE(output.find("0") != std::string::npos);
    testing::internal::CaptureStdout();
    ConvertSpelledOutNumber();
    output = testing::internal::GetCapturedStdout();
    EXPECT_TRUE(output.find("1") != std::string::npos);
    testing::internal::CaptureStdout();
    ConvertSpelledOutNumber();
    output = testing::internal::GetCapturedStdout();
    EXPECT_TRUE(output.find("2") != std::string::npos);
    testing::internal::CaptureStdout();
    ConvertSpelledOutNumber();
    output = testing::internal::GetCapturedStdout();
    EXPECT_TRUE(output.find("3") != std::string::npos);
    testing::internal::CaptureStdout();
    ConvertSpelledOutNumber();
    output = testing::internal::GetCapturedStdout();
    EXPECT_TRUE(output.find("4") != std::string::npos);
    testing::internal::CaptureStdout();
    ConvertSpelledOutNumber();
    output = testing::internal::GetCapturedStdout();
    EXPECT_TRUE(output.find("not a number I know") != std::string::npos);
}

TEST(Chapter03, Exercise10) {
    std::freopen("../src/chapter03/inputs/Exercise10Input.txt", "r", stdin);
    testing::internal::CaptureStdout();
    Operate();
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_TRUE(output.find("14.0") != std::string::npos);
    testing::internal::CaptureStdout();
    Operate();
    output = testing::internal::GetCapturedStdout();
    EXPECT_TRUE(output.find("6.0") != std::string::npos);
    testing::internal::CaptureStdout();
    Operate();
    output = testing::internal::GetCapturedStdout();
    EXPECT_TRUE(output.find("11.4") != std::string::npos);
    testing::internal::CaptureStdout();
    Operate();
    output = testing::internal::GetCapturedStdout();
    EXPECT_TRUE(output.find("5.0") != std::string::npos);
}

TEST(Chapter03, Exercise11) {
    std::freopen("../src/chapter03/inputs/Exercise11Input.txt", "r", stdin);
    testing::internal::CaptureStdout();
    CalculateCoins();
    EXPECT_EQ(
        testing::internal::GetCapturedStdout(),
        "How many pennies do you have?\nHow many nickels do you have?\nHow "
        "many dimes do you have?\nHow many quarters do you have?\nHow many "
        "half dollars do you have?\nYou have 1 penny.\nYou have 2 "
        "nickels.\nYou have 3 dimes.\nYou have 4 quarters.\nYou have 5 half "
        "dollars.\nThe value of all of your coins is $3.91.\n");
}
