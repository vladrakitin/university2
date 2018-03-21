#include <stdio.h>
#include "stdafx.h"
void main()
{
	int const n = 10;
	int arr[n] = {0,4,2,-6,3,0,-7,-5,-9,0};
	int count, maxcount = 0;
	for (int i = 0; i<n; i++)
		if (arr[i] == 0)
		{
			count = 0;
			for (int j = i + 1; j<n; j++)
			{
				if (arr[j] == 0)
				{
					if (count>maxcount) maxcount = count;
					break;
				}
				if (arr[j]>0) count++;
			}
		}
	printf ("Number of positive elements:%d\n",maxcount);
	getchar();

}