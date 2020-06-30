// Copyright (c) 2020 Juraj Fiala

#include "find_primes/find_primes.h"
#include "gtest/gtest.h"

TEST(find_primes, get_primes) {
  std::vector<int> correct{2, 3, 5, 7};
  std::vector<int> single2{2};
  std::vector<int> single7{7};
  std::vector<int> empty;
  // Classic
  ASSERT_EQ(get_primes(0, 10), correct);
  // Check bounds
  ASSERT_EQ(get_primes(2, 7), correct);
  ASSERT_EQ(get_primes(2, 2), single2);
  ASSERT_EQ(get_primes(-10, 2), single2);
  ASSERT_EQ(get_primes(7, 10), single7);
  // Passage over zero
  ASSERT_EQ(get_primes(-10, 10), correct);
  // Empty ranges
  ASSERT_EQ(get_primes(-10, -5), empty);
  ASSERT_EQ(get_primes(-10, 0), empty);
  ASSERT_EQ(get_primes(-10, 1), empty);
  // Invalid ranges
  ASSERT_EQ(get_primes(1, -1), empty);
  ASSERT_EQ(get_primes(1, 0), empty);
  ASSERT_EQ(get_primes(0, -1), empty);
  // Numbers with multiple factors
  ASSERT_EQ(get_primes(0, 100).size(), 25);
}
