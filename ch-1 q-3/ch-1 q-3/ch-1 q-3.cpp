// ch-1 q-3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;
//chapter-1 ques-3
int main()
{
	int quarters, dimes, nickels;
	cout << "Enter No of quarters\n";
	cin >> quarters;
	cout << "Enter No of dims\n";
	cin >> dimes;
	cout << "Enter No of nickels\n";
	cin >> nickels;
	int  sum;
	sum = quarters * 25 + dimes * 10 + nickels * 5;
	cout << " Total is :\n" << sum;

	system("pause");


	return 0;
}
