#include <iostream>
#include <fstream>
#include "stdafx.h"


#include <math.h>
#define PUT_DELIM(x, h, b) (x) + (h) >= (b) ? '\n' : ' '
#define COND1(x) (x) <= -3.0
#define FUNC1(x) cosh (2 * (x) + 3)
#define COND2(x) (x) > -3 && (x) <= 3.0
#define FUNC2(x) 3 + 2 * (x)
#define FUNC3(x) (x) + (7 / ((x) - 1))
#define FUNC(x) COND1(x) ? FUNC1(x): (COND2(x) ? FUNC2(x) : FUNC3(x))
using namespace std;

void main()
{
	

	double a = -4.0, b = 4.0, x, h = 0.1;
	printf("x:\t");
	for (x = a; x <= b; x += h)
	{
		printf("%6.2f%c", x, PUT_DELIM(x, h, b));
	}
	printf("y:\t");
	for (x = a; x <= b; x += h)
	{
		printf("%6.3f%c", FUNC(x), PUT_DELIM(x, h, b));
	}
	getchar();
}

