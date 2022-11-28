#include "algorithms.h"

// Problem 4.4 - Given the height of the steps of a set of stairs in centimeters and a height in meters that a person wants to climb, calculate how many steps that person must climb.
uint32_t metersToSteps(float stepHeight, float climbMeters) { return (climbMeters * 100) / stepHeight; }
