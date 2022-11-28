#include "algorithms.h"

// Problem 1.5 - Convert seconds into hours, minutes and seconds
Time timeConverter(uint32_t seconds) {
	Time result;

	result.hours = seconds / 3600;
	seconds -= result.hours * 3600; // removes the hours

	result.minutes = seconds / 60;
	seconds -= result.minutes * 60;

	result.seconds = seconds;

	return result;
}
