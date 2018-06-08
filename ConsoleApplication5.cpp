#include <stdio.h>
#include "stdafx.h"
#define SIZE(x)  (sizeof(x) / sizeof((x)[0]))

int main() {
	int a[] = { 1,2,3,4 };
	int b[] = { 1,2,3,4,5 };
	int c[SIZE(a) + SIZE(b)];
	int i = 0;
	int j = 0;
	int k = 0;


	while (i < SIZE(a) && j < SIZE(b)) {
		c[k++] = a[i] < b[j] ? a[i++] : b[j++];
	}

	while (i < SIZE(a)) c[k++] = b[i++];
	while (j < SIZE(b)) c[k++] = b[j++];

	for (i = 0; i < SIZE(c); i++) printf("%d ", c[i]);
	printf("\n");

	return 0;
	getchar();
}