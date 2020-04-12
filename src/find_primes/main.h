// Copyright (c) 2020 Juraj Fiala

#ifndef SRC_FIND_PRIMES_MAIN_H_
#define SRC_FIND_PRIMES_MAIN_H_

#include <iostream>
#include <utility>
#include <vector>

/**
 * Asks the user to supply a number interval
 *
 * @return std::pair<int, int> -- interval as <upper, lower>
 */
std::pair<int, int> get_numbers();

/**
 * Finds all primes in <a, b>
 *
 * @param a -- lower bound
 * @param b -- upper bound
 * @return std::vector<int>
 */
std::vector<int> get_primes(int a, int b);

/**
 * Pretty-prints a vector of primes
 *
 * @param primes -- reference to the vector
 */
void print_primes(const std::vector<int>& primes);

#endif  // SRC_FIND_PRIMES_MAIN_H_
