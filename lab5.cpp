// lab5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string.h>

int* bubble(int* numb_array, int n)
{
	int c, d, swap;
	for (c = 0; c < n - 1; c++)
	{
		for (d = 0; d < n - c - 1; d++)
		{
			if (numb_array[d] > numb_array[d + 1]) /* For decreasing order use < */
			{
				swap = numb_array[d];
				numb_array[d] = numb_array[d + 1];
				numb_array[d + 1] = swap;
			}
		}

	}
	return numb_array;
}
bool check_array(int* first_array, int* second_array, int n)
{
	for (int i = 0; i < n; i++)
	{
		if (first_array[i] != second_array[i])
		{
			return false;
		}
	}
	return true;
}
int main()
{
	int n_array[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int n = 10;
	int r_array[10];
	for (int i = 0; i < n; i++)
	{
		r_array[i] = n_array[i];
	}
	//int* r_array = n_array;
	int* res_array = bubble(r_array,n);
	if (check_array(n_array, r_array, n))
	{
		printf("This array is sorted");
	}
	else
	{
		printf("This array is not sorted");
	}
	getchar();
    return 0;
}

