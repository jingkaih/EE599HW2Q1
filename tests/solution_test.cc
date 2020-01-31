#include "src/lib/solution.h"
#include "gtest/gtest.h"

TEST(TwoIntergersInputShould, ReturnAnInterger) {
  Solution solution;
  int actual = solution.Add(123,456);
  int expected = 579;
  EXPECT_EQ(expected, actual);
}
TEST(TwoStringsShould, ReturnAnConcatenation)
{
  Solution solution;
  std::string actual = solution.Add("Kobe","Bryant");
  std::string expected = "KobeBryant";
  EXPECT_EQ(expected, actual);
}
TEST(OneStringAddOneIntergerShould, ReturnAnConcatenation)
{
  Solution solution;
  std::string actual = solution.Add(24,"Bryant");
  std::string expected = "24Bryant";
  EXPECT_EQ(expected, actual);
}
TEST(OneIntergerAddOneStringShould, ReturnAnConcatenation)
{
  Solution solution;
  std::string actual = solution.Add("Kobe",24);
  std::string expected = "Kobe24";
  EXPECT_EQ(expected, actual);
}