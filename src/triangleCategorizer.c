#include "algorithms.h"

// Problem 2.2 - Given 3 lengths, check if they form a triangle and if they do, categorize it.
TriangleType triangleCategorizer(float x, float y, float z) {
	// 3 lengths form a triangle if the sum of any two of them is always bigger than the last one.
	if (x + y <= z || x + z <= y || y + z <= x) return tNOT_TRIANGLE;

	if (x == y && y == z) return tEQUILATERAL;
	if (x == y || x == z || y == z) return tISOSCELES;
	return tSCALENE;
}
