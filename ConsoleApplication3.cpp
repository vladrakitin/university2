#include "stdafx.h"
#include <iostream>
#include <cstdlib>
#include <clocale>
#include <string>
using namespace std;

bool isNeededChar(char c) {
	switch (c) {
	case '.':
	case '!':
	case '?':
		return true;
	default:
		return false;
	}
}
  
int main() {
	cout << "Enter some text na russkom)" << endl;
	int counter = 0;
	string text;
	getline(cin, text);
	for (int i = 1; i < text.length(); i++) {
		if (isNeededChar(text.at(i))) {
			if (!isNeededChar(text.at(i - 1))) {
				counter++;
			}
		}
	}
	cout << "This txt contains" << endl;
	cout << counter << "sentences" << endl;
	return 0;
}