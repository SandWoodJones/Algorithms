#ifndef SWJ_ALGORITHMS
#define SWJ_ALGORITHMS

#include <math.h>
#include <stdbool.h>

float mean(float, float);

float gallon2liter(float);

double sphereVolume(double);

float lightPotency(float, float);

typedef struct {
	unsigned int hours;
	unsigned int minutes;
	unsigned int seconds;
} Time;
Time timeConverter(unsigned int);

typedef enum {
	IN_FIRST,
	IN_SECOND,
	IN_BOTH,
	IN_NONE
} IntervalStatus;
IntervalStatus inInterval(float, float, float, float, float);

float* salaryRaise(float);

#endif
