// lab4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <cctype>
#include <string>
#include <iostream>
using namespace std;

char* appendCharToCharArray(char* array, char a)
{
	size_t len = strlen(array);

	char* ret = new char[len + 2];

	strcpy(ret, array);
	ret[len] = a;
	ret[len + 1] = '\0';

	return ret;
}



int main()
{
	char source[] = "Test string for lab4 for lab4 and lab4 and last one lab4";
	bool counter = false; //jakshcho ryadok zustrichaietsa 1 raz - True, jakshcho 2 - False
	char* substring="lab4";
	char* result = new char[strlen(source)];
	char* temp;
	char* starstring = "";
	char* Xstring = "";
	cout << strlen(substring);
	cout << '\n';
	for (int i = 0; i < strlen(substring); i++)
	{
		starstring = appendCharToCharArray(starstring, '*');
		Xstring = appendCharToCharArray(Xstring, 'X');
		cout << starstring<<'\n';
		cout << Xstring << '\n';
	}
	while (strstr(source, substring) != NULL)
	{
		if (counter == false) {
			temp = (strstr(source, substring));
			printf("\n\ntemp value 1:\n");
			printf(temp);
			printf("\n\n\n");
			printf(strncpy(temp, Xstring, strlen(starstring)));
			counter = true;
			//source+= strlen(substring)+1;
		}
		else
		{
			counter = false;
			temp = (strstr(source, substring));
			printf("\n\ntemp value 2:\n");
			printf(temp);
			printf("\n\n\n");
			printf(strncpy(temp,starstring,strlen(starstring)));
		}

		

	}
	printf("\n\n\n");
	printf(source);
	while (strstr(source, Xstring) != NULL)
	{
		temp = (strstr(source, Xstring));
		printf("\n\ntemp value 1:\n");
		printf(temp);
		printf("\n\n\n");
		printf(strncpy(temp, substring, strlen(starstring)));
	}
	printf("\n\nResult:\n");
	printf(source);
	getchar();
    return 0;
}


