#include <stdio.h>
#include <math.h>
#include <iostream>
#include "stdafx.h"
void main()
{
	double a = -3, b = 3, c = -4, d = 4, h = 0.1;
	printf("%c\\%c", 'Y', 'X');
	for (double x = a; x <= b; x += h)
		printf("\t%8.2f", x);
	printf("\n");
	for (double y = c; y <= d; y += h)
	{
		printf("%.2f", y);
		for (double x = a; x <= b; x += h)
		{
			double z = 4 * (sin (x * y - 1));
			printf("\t%8.2f", z);
		}
		printf("\n");
	}
	printf("\n");
	getchar();
	
}