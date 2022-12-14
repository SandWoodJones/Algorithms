#include "algorithms.h"

// Problem 3.6 - Given X and N, calculate the output of these series
// S = 1 + 1/X^2 + 1/X^3 + ... + 1/X^N
// S = X^N/1 - X^(N - 1)/2 + X^(N - 2) / 3 - X^(N - 3)/4 + ... + X/N
// S = X - (X^2)/3! + (X^4)/5! - (X^6)/7! + (X^8)/9! - ...
long double interestingSeries(float x, int n, unsigned short choice) {
	long double result = 0;

	switch (choice) {
		case 0: {
			for (int i = 1; i <= n; i++) {
				result += 1.0 / pow(x, i);
			}
			break;
		}
		case 1: {
			for (int i = 1; i <= n; i++) {
				if (i % 2 != 0) result += pow(x, n - i + 1) / i;
				else result -= pow(x, n - i + 1) / i;
			}
			break;
		}
        case 2: {
            for (int i = 1, j = 1; i <= n; i++, j+= 2) {
                if (i % 2 != 0) result += pow(x, i) / factorial(j);
                else result -= pow(x, i) / factorial(j);
            }
            break;
        }
		default: return -1;
	}

	return result;
}
