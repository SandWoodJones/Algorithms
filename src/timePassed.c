#include "algorithms.h"

// Problem 2.4 - Given a start and an end time calculate the total passed time taking into account that the end time may be on the next day.
Time timePassed(Time begin, Time end) {
	Time result = {
		0,
		end.minutes - begin.minutes,
		end.seconds - begin.seconds
	};

	if (end.hours < begin.hours) result.hours = 24 - (begin.hours - end.hours);
	else result.hours = end.hours - begin.hours;
	
	return result;
}
