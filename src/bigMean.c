#include "algorithms.h"

// Problem 4.2 - Given an array of numbers, calculate the mean of the array.
float bigMean(int* arr, unsigned int size) {
    float result = 0;
    for (unsigned int i = 0; i < size; i++) {
        result += arr[i];
    }
    return result / size;
}
