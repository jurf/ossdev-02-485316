// Copyright (c) 2020 Juraj Fiala

#include <iostream>
#include <tuple>
#include <vector>

std::pair<int, int> get_numbers() {
  int a = 0;
  int b = 0;

  std::cout << "Enter lower bound:\n";
  std::cin >> a;

  std::cout << "Enter upper bound:\n";
  std::cin >> b;

  return {a, b};
}

std::vector<int> get_primes(int a, int b) {
  std::vector<int> primes;

  auto is_prime = [](int n) {
    for (int i = 2; i <= n / 2; i++) {
      if (n % i == 0) {
        return false;
      }
    }
    return true;
  };

  for (int i = (1 < a ? a : 2); i <= b; i++) {
    if (is_prime(i)) {
      primes.push_back(i);
    }
  }
  return primes;
}

void print_primes(const std::vector<int>& primes) {
  std::cout << "\nFound primes: \n";
  int i = 0;
  for (auto p : primes) {
    std::cout << (i++ ? ", " : "") << p;
  }
  std::cout << "\n";
}

int main() {
  auto [a, b] = get_numbers();
  print_primes(get_primes(a, b));
  return 0;
}
