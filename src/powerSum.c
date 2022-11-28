#include "algorithms.h"

// Problem 4.5 - Given 3 positive integers A, B and C, calculate D = (R+S) / 2, where R = (A+B)^2 and S=(B+C)^2.
float powerSum(uint32_t A, uint32_t B, uint32_t C) {
    if (A == 0 || B == 0 || C == 0) return -1;
    return (pow(A+B, 2) + pow(B+C, 2)) / 2.0;
}
