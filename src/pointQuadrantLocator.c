#include "algorithms.h"

// Problem 2.3 - Given a point in 2D space, find if it belongs over a quadrant, an axis or the origin.
Quadrant pointQuadrantLocator(float x, float y) {
	if (x == 0) {
		if (y == 0) return qIN_ORIGIN;
		return qIN_X_AXIS;
	}
	if (y == 0) return qIN_Y_AXIS;
	if (x > 0) {
		if (y > 0) return qIN_FIRST;
		return qIN_FOURTH;
	}
	if (y > 0) return qIN_SECOND;
	return qIN_THIRD;
}
