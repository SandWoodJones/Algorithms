#include <algorithms.h>

// Problem 3.2 - Calculate the factorial of some number n.
unsigned long long factorial(unsigned int n) {
	unsigned long result = 1;
	for (unsigned int i = n; i > 0; i--) {
		result *= i;
	}
	return result;
}
