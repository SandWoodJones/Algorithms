#ifndef SWJ_ALGORITHMS
#define SWJ_ALGORITHMS

#include <math.h>
#include <stdbool.h>

float mean(float, float);

float gallon2liter(float);

double sphereVolume(double);

float lightPotency(float, float);

struct Time {
	int hours;
	int minutes;
	int seconds;
};
struct Time timeConverter(int);

#endif
