#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include "stdafx.h"
#define MAX 100

int main() {
	float m[MAX], min = 2 ^ 31 - 2, max = 0;
	int i, n, j;
	printf("Kolichestvo elementov masiva = ");
	scanf("%i", &n);
	for (i = 0; i <= n - 1; i++) {
		printf("m[%i] =", i);
		scanf("%f", &m[i]);
		if (m[i] == 0) break;
	}
	for (i = 0; i<n; i++) {
		if (m[i] > max) max = m[i];
		if (m[i] < min) min = m[i];
	}
	printf("Max is = %.f\n", max);
	printf("Min is = %.f\n", min);
	getchar();
	return 0;
}