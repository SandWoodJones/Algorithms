#include "algorithms.h"

/* 2.2 - Find an employee's raise and new salary according the following table:
|  current wage  | raise percentage |
|    0 - 300     |        10%       |
|  300.01 - 600  |        11%       |
|  600.01 - 900  |        12%       |
|  900.01 - 1500 |         6%       |
| 1500.01 - 2000 |         3%       |
|   above 2000   |     no raise     | */
float* salaryRaise(float currentWage) {
	static float result[2];

	if (currentWage <= 300) {
		result[0] = 10;
		result[1] = currentWage * 1.10;
	} else if (currentWage <= 600) {
		result[0] = 11;
		result[1] = currentWage * 1.11;
	} else if (currentWage <= 900) {
		result[0] = 12;
		result[1] = currentWage * 1.12;
	} else if (currentWage <= 1500) {
		result[0] = 6;
		result[1] = currentWage * 1.6;
	} else if (currentWage <= 2000) {
		result[0] = 6;
		result[1] = currentWage * 1.6;
	} else {
		result[0] = 0;
		result[1] = currentWage;
	}

	return result;
}
