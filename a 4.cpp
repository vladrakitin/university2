#include "stdafx.h"
#include <iostream>
#include <string>
#include <map>
#include <conio.h>
using namespace std;

int main() {
	string str;
	cin >> str;
	map<char, int> coll;
	char w[] = "euoiaqwrtpsdfghjklzxcvbnm";
	for (size_t i = 0; i < str.size(); i++) {
		for (int j = 0; j < 20; j++) {
			if (str[i] == w[j]) {
				coll[w[j]]++;
				break;
			}
		}
	}
	for (const auto& i : coll) {
		cout << i.first << '\t' << i.second << endl;
	}
	cin.sync();
	cin.get();
	return 0;
	_getch();
}