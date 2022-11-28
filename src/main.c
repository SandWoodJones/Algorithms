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
    
    char* quadrants[] = {
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

    DynArr divisibles = divisibleBy(1, 100, 13, 3);
    printf("The numbers between 1 and 100 that result in 3 when divided by 13 are ");
    for (unsigned int i = 0; i < divisibles.size; i++) {
        printf("%d", divisibles.arr[i]);
        if (i < divisibles.size - 2) printf(", ");
        else if (i < divisibles.size - 1) printf(" and ");
    }
    printf(".\n");
    free(divisibles.arr);

    printf("The factorial of 7 is %ld.\n", factorial(7));

    printf("Euler's number is %lf.\n", eulers(20));

    printf("The 77th fibonacci number is %ld.\n", fibonacci(77));

    printf("The sum S = 2/500 - 5/450 + 2/400 - 5/350 + ... is equal to %lf.\n", interestingSums(2));

    printf("The series S = 1 + 1/X^2 + 1/X^3 + ... + 1/X^N, where X = 13 and N = 7 is %Lf.\n", interestingSeries(13, 7, 0));

    char* units[] = {"celsius", "fahrenheit", "kelvin"};
    Temperature temp = {50, tFAHRENHEIT};
    printf("%.2lf° %s is", temp.value, units[temp.unit]);
    temperatureConversion(&temp, tKELVIN);
    printf(" %.2lf° %s.\n", temp.value, units[temp.unit]);

    printf("The sum of all the multiples of 13 between 1 and 540 is %d.\n", sumOfMultiples(1, 540, 13));
    
    int meanArr[] = {382, 114, 125, 276, 39, 201, 241, 196, 194, 305, 172, 79, 342};
    printf("The mean of the set [382, 114, 125, 276, 39, 201, 241, 196, 194, 305, 172, 79, 342] is %.3f.\n", bigMean(meanArr, sizeof(meanArr) / sizeof(meanArr[0])));

    if (perfectNumber(28)) printf("28 is a perfect number.\n");

    printf("If you want to climb 5m of stairs with steps of 30cm in height, you must climb %d steps.\n", metersToSteps(30, 5));

    printf("Given A = 11, B = 7, C = 2 and R = (A+B)^2 and S = (B+C)^2 we have that D = (R+S)/2 = %.2f.\n", powerSum(11, 7, 2));

    return 0;
}
