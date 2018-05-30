
#include "stdafx.h"
#include <stdio.h>
#include <conio.h>
int main()
{
	printf("Enter a number (then press f to finish)\n");
	int min, max, num, count = 0;
	while (scanf_s("%d", &num) == 1)
	{
		if (count == 0)
		{
			min = max = num;
		}
		else {
			if (min > num)
				min = num;
			else if (max < num)
				max = num;
		}
		++count;
	}
	printf("Entered %d numbers\n", count);
	printf("Min, max: %d, %d", min, max);
	_getch();
	return 0;
}