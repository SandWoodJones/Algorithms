#include "algorithms.h"

// Problem 3.4 - Calculate the n-th fibonacci number.
uint64_t fibonacci(uint32_t n) {
	uint64_t a, b, c;
	a = 0;
	b = 1;

	for (size_t i = 0; i < n; i++) {
		c = a + b;
		a = b;
		b = c;
	}

	return a;
}
