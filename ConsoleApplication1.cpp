// ConsoleApplication1.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <conio.h>
#include <cstring>

using namespace std;


int main()
{
	setlocale(LC_ALL, "Russian");
	char a[3] = { 1 , 2 };

	cout << a;
	_getch();
	return 0;
}

