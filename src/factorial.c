#include <algorithms.h>

// Problem 3.2 - Calculate the factorial of some number n.
uint64_t factorial(uint32_t n) {
	uint64_t result = 1;
	for (size_t i = n; i > 0; i--) {
		result *= i;
	}
	return result;
}
