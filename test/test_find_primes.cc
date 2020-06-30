// Copyright (c) 2020 Juraj Fiala

#include "find_primes/find_primes.h"
#include "gtest/gtest.h"

TEST(find_primes, get_primes) {
  std::vector<int> correct = {2, 3, 5, 7};
  ASSERT_EQ(get_primes(0, 10), correct);
}