#include "algorithms.h"

// Problem 4.3 - Given a number, return whether or not it is a perfect number (The sum of all of its divisors except itself is equal to itself)
bool perfectNumber(unsigned int n) { 
    unsigned int sum = 0;
    for (unsigned int i = 1; i < n; i++) { sum += (n % i == 0) ? i : 0; }
    return (sum == n);
}
