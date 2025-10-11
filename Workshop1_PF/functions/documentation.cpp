/**
 * @file math_utils.cpp
 * @brief Simple math utility functions demonstrating Doxygen.
 * 
 * This file contains basic functions to perform mathematical
 * and logical operations — perfect for learning functions, 
 * parameters, return types, and documentation.
 */
#include <iostream>
using namespace std;

/**
 * @brief Adds two integers.
 * 
 * Demonstrates parameter passing and returning a value.
 * @param a First integer.
 * @param b Second integer.
 * @return Sum of a and b.
 */
int add(int a, int b) {
    return a + b;
}

/**
 * @brief Checks if a number is prime.
 * 
 * Uses a loop and conditional statements to test primality.
 * @param n Number to check.
 * @return true if n is prime, false otherwise.
 */
bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

/**
 * @brief Prints all prime numbers up to a limit.
 * 
 * Demonstrates loops, function calling, and variable scope.
 * @param limit Upper range for printing primes.
 */
void printPrimes(int limit) {
    for (int i = 2; i <= limit; i++) {
        if (isPrime(i)) {
            printf("%d ", i);
        }
    }
}
