// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int main()
{
	float a, b, x;
    a = 8.11; 
	b = 3.09;
	x = -1.16;
	printf("a = %.1f, b = %.2f, x = %.2f\n", a, b, x);
	printf("Result: %.5f\n", cbrt(b * tan(2 * x)) / (a * sin(2 - x)));
	getchar();
    return 0;
}

