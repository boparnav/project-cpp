// Chapter-5 question1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	char choice;
	do {
		int min, hours;
		char type, yes, no;
		cout << "Enter Hours";
		cin >> hours;
		cout << "Enter minutes ";
		cin >> min;
		// conversion of 24 hors to 12min
		//A =AM, P=PM
		if (hours > 12)
		{
			hours = hours - 12;
			type = 'P';
		}
		else {
			type = 'A';
		}
		cout << "The oututis\n" << hours << ":" << min << type << endl;
		//for user repeat
		cout << "You want to repeat the process again";
		cin >> choice;
	}
	while (choice == 'y' || choice == 'Y');
		system("pause");
		return 0;
	}