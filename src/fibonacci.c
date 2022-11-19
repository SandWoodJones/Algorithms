#include "algorithms.h"

// Problem 3.3 - Calculate the n-th fibonacci number.
unsigned long long fibonacci(unsigned int n) {
	unsigned long long a, b, c;
	a = 0;
	b = 1;

	for (unsigned int i = 0; i < n; i++) {
		c = a + b;
		a = b;
		b = c;
	}

	return a;
}
