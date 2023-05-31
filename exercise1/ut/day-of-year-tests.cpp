#include "gtest/gtest.h"
#include "day-of-year.hpp"

struct DayOfYearTestSuite {};

TEST(DayOfYearTestSuite, dummyTest) // bez sensu lmao
{
  ASSERT_TRUE(true);
}

TEST(DayOfYearTestSuite, January1stIsFirstDayOfYear)
{
  ASSERT_EQ(dayOfYear(1, 1, 2020), 1);
}

TEST(DayOfYearTestSuite, IfLeapYearFebruary29thIs60thDayOfYear)
{
  ASSERT_EQ(dayOfYear(2, 29, 2020), 60);
}

TEST(DayOfYearTestSuite, IfLeapYearFebruary28thIs59thDayOfYear)
{
  ASSERT_EQ(dayOfYear(2, 28, 2020), 59);
}
