#include "algorithms.h"

// Problem 3.3 - Calculate euler's number using the formula
// e = 1/0! + 1/1! + 1/2! + ...
// with arbitrary precision
double eulers(unsigned int precision) {
	double result = 0;
	for (unsigned int i = 0; i < precision; i++) {
		result += 1.0 / factorial(i);
	}
	return result;
}
