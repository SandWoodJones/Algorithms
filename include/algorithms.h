#ifndef SWJ_ALGORITHMS
#define SWJ_ALGORITHMS

#include <math.h>
#include <stdbool.h>

float mean(float, float);

float gallon2liter(float);

double sphereVolume(double);

float lightPotency(float, float);

typedef struct {
	int hours;
	int minutes;
	int seconds;
} Time;
Time timeConverter(int);

typedef enum {
	IN_FIRST,
	IN_SECOND,
	IN_BOTH,
	IN_NONE
} IntervalStatus;
IntervalStatus inInterval(float, float, float, float, float);

#endif
