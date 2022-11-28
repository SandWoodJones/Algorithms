#include "algorithms.h"

// Problem 4.2 - Given an array of numbers, calculate the mean of the array.
float bigMean(int* arr, size_t len) {
    float result = 0;
    for (size_t i = 0; i < len; i++) {
        result += arr[i];
    }
    return result / len;
}
