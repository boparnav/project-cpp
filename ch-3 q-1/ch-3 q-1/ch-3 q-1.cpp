// ch-3 q-1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;
//chapter-3 ques-1
int main()
{
	int timeofcall;
	int hours,min;

	char days;
	int costofcall=0;
	int lengthofcall;
	cout << "Enter time of call\n";
	cin >> timeofcall;
	cout << "Enter name of day\n";
	cin >> days;
	cout << "Enter length of call\n";
	cin >> lengthofcall;

	if (days == 'S')
	{

		(costofcall = lengthofcall * 0.15);
		cout << " cost of your call is " << costofcall;
	}
	else {
		if (timeofcall >= 8 && timeofcall <= 18)
		{
			(costofcall = lengthofcall * 0.40);
			cout << " cost of your call is " << costofcall;
		}

		else
		{
			(costofcall = lengthofcall * 0.25);
			cout << " cost of your call is " << costofcall;
		}
	}
	
	


system("Pause");
	return 0;
}
