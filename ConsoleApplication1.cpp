#include "stdafx.h"
#include <iostream>
#include <ctime>
using namespace std;
int main()
{
	int i, j, N, M, a[20][20];
	cout << "N=";
	cin >> N;
	cout << "M=";
	cin >> M;
	//cout << "Input matrix A \n";
	srand(time(NULL));
	for (i = 0; i < N; i++)
	{
		for (j = 0; j < M; j++)
		{
			a[i][j] = (rand() % 10) - 10;
		}
	}
		
			
	cout << "matrix A \n";
	for (i = 0; i<N; i++)
	{
		for (j = 0; j < M; j++)
		{
			cout << a[i][j] << "\t";
		}
			
		cout << endl;
	}
	system("pause");
	return 0;
}