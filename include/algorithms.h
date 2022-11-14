#ifndef SWJ_ALGORITHMS
#define SWJ_ALGORITHMS

#include <math.h>
#include <stdbool.h>
#include <stdlib.h>

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
	iIN_FIRST,
	iIN_SECOND,
	iIN_BOTH,
	iIN_NONE
} IntervalStatus;
IntervalStatus inInterval(float, float, float, float, float);

float* salaryRaise(float);

typedef enum {
	tNOT_TRIANGLE,
	tEQUILATERAL,
	tISOSCELES,
	tSCALENE
} TriangleType;
TriangleType triangleCategorizer(float, float, float);

typedef enum {
	qIN_FIRST,
	qIN_SECOND,
	qIN_THIRD,
	qIN_FOURTH,
	qIN_X_AXIS,
	qIN_Y_AXIS,
	qIN_ORIGIN,
} Quadrant;
Quadrant pointQuadrantLocator(float, float);

Time timePassed(Time, Time);

typedef enum {
	sASCENDING,
	sDESCENDING,
	sBIG_MIDDLE
} SortingOption;
int sortOrder(SortingOption, float[], unsigned int);

typedef struct {
	float base;
	float height;
	float radius;
} Shape;
float shapeAreaCalculator(Shape);

typedef struct {
	int* arr;
	unsigned long size;
} DynArr;

DynArr divisibleBy(unsigned int, unsigned int, unsigned int, unsigned int);

unsigned long long factorial(unsigned int);

double eulers(unsigned int);

unsigned long long fibonacci(unsigned int);

#endif
