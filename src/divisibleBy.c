#include "algorithms.h"
#include <stdio.h>

// Problem 3.1 - Given an interval, return all numbers within that interval that when divided by X are equal to Y
DynArr divisibleBy(unsigned int start, unsigned int end, unsigned int x, unsigned int y) {
	DynArr result;
	result.size = 0;
	result.arr = malloc(result.size * sizeof(int));

	for (unsigned int i = start; i <= end; i++) {
		if (i % x == y) {
			result.arr[result.size] = i;
			result.size++;
			result.arr = realloc(result.arr, result.size * sizeof(int));
		}
	}

	return result;
}
