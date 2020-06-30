// Copyright (c) 2020 Juraj Fiala

#include <iostream>
#include <utility>
#include <vector>

#include "find_primes/find_primes.h"

/**
 * Asks the user to supply a number interval
 *
 * @return std::pair<int, int> -- interval as <upper, lower>
 */
auto get_numbers() -> std::pair<int, int> {
  int a;
  int b;

  std::cout << "Enter lower bound:" << std::endl;
  std::cin >> a;

  std::cout << "Enter upper bound:" << std::endl;
  std::cin >> b;

  return {a, b};
}

/**
 * Pretty-prints a vector of primes
 *
 * @param primes -- reference to the vector
 */
void print_primes(const std::vector<int>& primes) {
  std::cout << std::endl << "Found primes:" << std::endl;
  int i = 0;
  for (auto p : primes) {
    std::cout << (i++ ? ", " : "") << p;
  }
  std::cout << std::endl;
}

auto main() -> int {
  auto [a, b] = get_numbers();
  print_primes(get_primes(a, b));
}
