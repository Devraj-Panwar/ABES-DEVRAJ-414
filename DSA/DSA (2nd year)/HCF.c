#include <stdio.h>
#include <stdlib.h>

/*
 * Recursive Euclidean algorithm to compute HCF/GCD.
 * Contract:
 * - Inputs: two integers (may be negative or zero)
 * - Output: non-negative greatest common divisor
 * - Error modes: none (handles zero/negative by normalization)
 */

int hcf_recursive(int a, int b) {
	if (b == 0) return (a >= 0) ? a : -a; // ensure non-negative result
	return hcf_recursive(b, a % b);
}

int main(int argc, char *argv[]) {
	int x, y;

	if (argc == 3) {
		x = atoi(argv[1]);
		y = atoi(argv[2]);
	} else {
		printf("Enter two integers separated by space: ");
		if (scanf("%d %d", &x, &y) != 2) {
			fprintf(stderr, "Invalid input. Provide two integers.\n");
			return 1;
		}
	}

	/* handle case when both are zero: gcd undefined, return 0 by convention */
	if (x == 0 && y == 0) {
		printf("HCF is undefined for (0, 0). Returning 0 by convention.\n");
		return 0;
	}

	int result = hcf_recursive(x, y);
	printf("HCF(%d, %d) = %d\n", x, y, result);
	return 0;


    
}