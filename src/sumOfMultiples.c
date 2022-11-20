#include "algorithms.h"

// Problem 4.1 - Given a start, an end, and N, return the sum of all multiples of N between start and end.
int sumOfMultiples(int start, int end, int multiple_of) {
    if (start > end) return -1;
    int result = 0;
    for (int i = start; i <= end; i++) result += (i % multiple_of == 0) ? i : 0;
    return result;
}
