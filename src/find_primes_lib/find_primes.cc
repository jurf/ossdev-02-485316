// Copyright (c) 2020 Juraj Fiala

#include "find_primes/find_primes.h"

#include <algorithm>

auto get_primes(int a, int b) -> std::vector<int> {
  std::vector<int> primes;

  auto is_prime = [](int n) {
    for (int i = 2; i <= n / 2; i++) {
      if (n % i == 0) {
        return false;
      }
    }
    return true;
  };

  for (int i = std::max(2, a); i <= b; i++) {
    if (is_prime(i)) {
      primes.push_back(i);
    }
  }
  return primes;
}
