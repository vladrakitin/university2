#include <stdio.h>
#include "stdafx.h"
#include <math.h>
#define FUNC(x) cos (sqrt (x))
#define Q(x, n) - (x) /2/(n+1)/(2*n+1)
int main() {
	double x = 1.5, S = 0.0, a = 1.0;
	unsigned int n, N = 7;
	for (n = 0; n < N; ++n) {
		S += a;
		a *= Q(x, n);
	}
	double y = FUNC(x), tol = fabs(S - y);
	printf("Sum:\t\t%.7f\nControl:\t%.7f\nTolerance:\t%.7f\n", S, y, tol);
	return 0;
	getchar();
}