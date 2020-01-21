#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(recursiveFactorial, HandlesZero) {
  Solution solution;
  int actual = solution.recursiveFactorial(0);
  EXPECT_EQ(1, actual);
}

TEST(recursiveFactorial, HandlesNegative) {
  Solution solution;
  int actual = solution.recursiveFactorial(-5);
  EXPECT_EQ(-1, actual);
}

TEST(recursiveFactorial, HandlesGeneral) {
  Solution solution;
  int actual = solution.recursiveFactorial(6);
  EXPECT_EQ(720, actual);
}

TEST(nonRecursive, HandlesZero) {
  Solution solution;
  int actual = solution.recursiveFactorial(0);
  EXPECT_EQ(1, actual);
}

TEST(nonRecursive, HandlesNegative) {
  Solution solution;
  int actual = solution.recursiveFactorial(-5);
  EXPECT_EQ(-1, actual);
}

TEST(nonRecursive, HandlesGeneral) {
  Solution solution;
  int actual = solution.recursiveFactorial(6);
  EXPECT_EQ(720, actual);
}