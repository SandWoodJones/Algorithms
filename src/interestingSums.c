#include "algorithms.h"

// Problem 3.4 - Calculate the output of these sums
// S = 1/1 + 3/2 + 5/3 + ... + 99/50
// S = 1/1 - 2/4 + 3/9 + ... - 10/100
// S = 2/500 - 5/450 + 2/400 - 5/350 + ...
// S = 1000/1 - 997/2 + 994/3 - 991/4 + ...
double interestingSums(unsigned short choice) {
	double result = 0;

	switch (choice) {
		case 0: {
			for (float i = 1, j = 1; i <= 50; i++, j += 2) {
				result += j/i;
			}
			break;
		}
		case 1: {
			for (float i = 1; i <= 10; i++) {
				result += i / pow(i, 2);
			}
			break;
		}
		case 2: {
			for (int i = 500; i > 0; i -= 50) {
				if ((i / 50) % 2 == 0) result += 2.0/i;
				else result -= 5.0/i;
			}
			break;
		}
		case 3: {
			for (int i = 1000, j = 1; j <= 50; i -= 3, j++) {
				if (j % 2 == 0) result += i/(float)j;
				else result -= i/(float)j;
			}
			break;
		}
		default: return -1;
	}

	return result;
}
