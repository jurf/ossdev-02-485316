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
  int a = 0;
  int b = 0;

  std::cout << "Enter lower bound:\n";
  std::cin >> a;

  std::cout << "Enter upper bound:\n";
  std::cin >> b;

  return {a, b};
}

/**
 * Pretty-prints a vector of primes
 *
 * @param primes -- reference to the vector
 */
void print_primes(const std::vector<int>& primes) {
  std::cout << "\nFound primes: \n";
  int i = 0;
  for (auto p : primes) {
    std::cout << (i++ ? ", " : "") << p;
  }
  std::cout << "\n";
}

auto main() -> int {
  auto [a, b] = get_numbers();
  print_primes(get_primes(a, b));
}
