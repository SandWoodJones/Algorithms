#ifndef SWJ_ALGORITHMS
#define SWJ_ALGORITHMS

#include <math.h>
#include <stdbool.h>
#include <stdlib.h>
#include <stdint.h>

float mean(float, float);

float gallon2liter(float);

double sphereVolume(double);

float lightPotency(float, float);

typedef struct {
    uint32_t hours;
    uint32_t minutes;
    uint32_t seconds;
} Time;
Time timeConverter(uint32_t);

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
int sortOrder(SortingOption, float[], size_t);

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

DynArr divisibleBy(uint32_t, uint32_t, uint32_t, uint32_t);

uint64_t factorial(uint32_t);

double eulers(uint32_t);

uint64_t fibonacci(uint32_t);

double interestingSums(unsigned short);

long double interestingSeries(float, int, unsigned short);

typedef enum {
    tCELSIUS,
    tFAHRENHEIT,
    tKELVIN
} UnitOfTemperature;

typedef struct {
    double value;
    UnitOfTemperature unit;
} Temperature;

void temperatureConversion(Temperature*, UnitOfTemperature);

int sumOfMultiples(int, int, int);

float bigMean(int*, size_t);

bool perfectNumber(uint32_t);

uint32_t metersToSteps(float, float);

float powerSum(uint32_t, uint32_t, uint32_t);

#endif
