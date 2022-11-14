#include "algorithms.h"

// Problem 2.6 - Given a shape that can be a cube, triangle, circle or cylinder, calculate its area.
float shapeAreaCalculator(Shape shape) {
	float area;

	// If the shape has:
	// Only base = cube
	// Base and height = triangle
	// Only radius = circle
	// Radius and height = cylinder
	
	if (shape.base == shape.radius || (shape.base != 0 && shape.radius != 0)) return -1; // invalid shape
	
	if (shape.base != 0) {
		if (shape.height != 0) { area = (shape.base * shape.height) / 2.0; }
		else { area = 6 * pow(shape.base, 2); }
	} else {
		if (shape.height != 0) { area = 2 * M_PI * shape.radius * (shape.radius + shape.height); }
		else { area = M_PI * pow(shape.radius, 2); }
	}

	return area;
}
