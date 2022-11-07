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

	return 0;
}
