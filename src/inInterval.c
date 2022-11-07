#include "algorithms.h"

// Problem 2.1 - Given a number n and two intervals [a, b] and [c, d] find if n is in one of these intervals, if it is in both or if it is in none.
IntervalStatus inInterval(float n, float a, float b, float c, float d) {
	IntervalStatus result = IN_NONE;
	if (n >= a && n <= b) result = IN_FIRST;
	if (n >= c && n <= d) {
		if (result == IN_FIRST) result = IN_BOTH;
		else result = IN_SECOND;
	};
	return result;
}
