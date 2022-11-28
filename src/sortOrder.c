#include "algorithms.h"

void insert_sort(float*, size_t, bool);
void big_mid_sort(float*, size_t);

// Problem 2.6 - Given an array, sort it according to the option value:
// 1 - Ascending order
// 2 - Descending order
// 3 - Biggest value in the middle
int sortOrder(SortingOption option, float numbers[], size_t len) {
	switch (option) {
		case sASCENDING: {
					 insert_sort(numbers, len, true);
					 break;
		}
		case sDESCENDING: {
					  insert_sort(numbers, len, false);
					  break;
	  	}
		case sBIG_MIDDLE: {
					  big_mid_sort(numbers, len);
					  break;
		}
		default: return 1;
	}
	return 0;
}

void insert_sort(float arr[], size_t len, bool ascending) {
	float res[len];
	for (size_t i = 0; i < len; i++) { res[i] = arr[i]; } // copy the passed array into res
	
    size_t j;
    for (size_t i = 1; i < len; i++) {
		j = i;
		if (ascending) {
			while (j > 0 && res[j - 1] > res[j]) {
				float temp = res[j];
				res[j] = res[j - 1];
				res[j - 1] = temp;

				j -= 1;
			}
		} else {
			while (j > 0 && res[j - 1] < res[j]) {
				float temp = res[j];
				res[j] = res[j - 1];
				res[j - 1] = temp;

				j -= 1;
			}
		}
    }

	for (size_t i = 0; i < len; i++) { arr[i] = res[i]; } // copy the sorted array back into arr
}

void big_mid_sort(float arr[], size_t len) {
	float res[len];
	float biggest = 0;
	uint32_t biggest_index = 0;
	for (size_t i = 0; i < len; i++) {
		res[i] = arr[i]; // copy the passed array into res
		if (res[i] > biggest) {
			biggest = res[i];
			biggest_index = i;
		}
	}

	uint32_t middle_index = len / 2;
	if (biggest_index != middle_index) {
		float temp = res[biggest_index];
		res[biggest_index] = arr[middle_index];
		res[middle_index] = temp;
	}

	for (size_t i = 0; i < len; i++) { arr[i] = res[i]; } // copy the sorted array back into arr
}
