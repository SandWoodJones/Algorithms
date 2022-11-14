#include "algorithms.h"
#include <stdio.h>

int main() {
	printf("The mean of 42 and 7 is %.2f.\n", mean(42,7));

	printf("13.5 gallons is %.4f liters.\n", gallon2liter(13.5));

	printf("The volume of a sphere of radius 6.001 is %lf.\n", sphereVolume(6.001));

	printf("A room of 5x2.5 meters uses %.2f watts for lighting.\n", lightPotency(5, 2.5));

	Time convertedTime = timeConverter(7322);
	printf("7322 seconds is %d hours, %d minutes and %d seconds.\n", convertedTime.hours, convertedTime.minutes, convertedTime.seconds);
	
	char* intervals[] = {
		"the [1,10] interval",
		"the [5,8] interval",
		"in both intervals [1,10] and [5,8]",
		"in no intervals"
	};
	printf("The number 7 is in %s.\n", intervals[inInterval(7,1,10,5,8)]);
	
	float* raise = salaryRaise(303);
	printf("Employee number #653 your current salary of $303 will be raised by %.0f%% to a total of $%.2f.\n", raise[0], raise[1]);

	char* triangle_types[] = {
		"don't form a",
		"form an equilateral",
		"form an isosceles",
		"form a scalene"
	};
	printf("The sides 5, 8 and 8 %s triangle.\n", triangle_types[triangleCategorizer(5, 8, 8)]);
	
	char * quadrants[] = {
		"first quadrant",
		"second quadrant",
		"third quadrant",
		"fourth quadrant",
		"X axis",
		"Y axis",
		"origin",
	};
	printf("The point (-33, 6) is in the %s.\n", quadrants[pointQuadrantLocator(-33,6)]);

	Time beginTime = {7, 31, 5};
	Time endTime = {3, 49, 49};
	Time totalTime = timePassed(beginTime, endTime);
	printf("The time passed between 7:31:05 and 03:49:49 of the next day is %d hours, %d minutes and %d seconds.\n", totalTime.hours, totalTime.minutes, totalTime.seconds);

	float unsorted_array[7] = {50.05, 13.22, 8, 9.993, 0, -5.3, 7};
	sortOrder(sBIG_MIDDLE, unsorted_array, 7);
	printf("The array [50.5, 13.22, 8, 9.993, 0, -5.3, 7] sorted with its biggest value in the middle is [");
	for (int i = 0; i < 7; i++) {
		printf("%.2f", unsorted_array[i]);
		if (i < 6) printf(", ");
	}
	printf("].\n");


	Shape shape = {0,5,3};
	printf("The area of a cylinder of height of 5 and radius of 3 is %.2f.\n", shapeAreaCalculator(shape));

	DynArr test = divisibleBy(1, 100, 13, 3);
	printf("The numbers between 1 and 100 that result in 3 when divided by 13 are ");
	for (int i = 0; i < test.size; i++) {
		printf("%d", test.arr[i]);
		if (i < test.size - 2) printf(", ");
		else if (i < test.size - 1) printf(" and ");
	}
	printf(".\n");
	free(test.arr);

	return 0;
}
