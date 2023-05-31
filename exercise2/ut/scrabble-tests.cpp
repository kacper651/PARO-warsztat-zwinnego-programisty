#include "gtest/gtest.h"
#include "scrabble-calculator.hpp"

struct ScrabbleCalculatorTestSuite {};

TEST(ScrabbleCalculatorTestSuite, dummyTest) // bez sensu lmao
{
  ASSERT_TRUE(true);
}

TEST(ScrabbleCalculatorTestSuite, emptyStringScoresZero)
{
  ASSERT_EQ(calculate(""), 0);
}

TEST(ScrabbleCalculatorTestSuite, whitespaceScoresZero)
{
  ASSERT_EQ(calculate(" \t\n"), 0);
}

TEST(ScrabbleCalculatorTestSuite, tabScoresZero)
{
  ASSERT_EQ(calculate("\t"), 0);
}

TEST(ScrabbleCalculatorTestSuite, singleLetterScoresCorrectly)
{
  ASSERT_EQ(calculate("A"), 1);
}

TEST(ScrabbleCalculatorTestSuite, lowercaseLetterScoresCorrectly)
{
  ASSERT_EQ(calculate("a"), 1);
}

TEST(ScrabbleCalculatorTestSuite, cabbageScores14)
{
  ASSERT_EQ(calculate("cabbage"), 14);
}
