// chapter-5 q-4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;
int main()
{
	int quarter = 0;
	int dime = 0;
	int pennies = 0;
	int amount;
	int newamount = 0;
	cout << "Enter any no coins ";
	cin >> amount;
	quarter = amount / 25;
	cout << quarter;
	newamount = amount - (25 * quarter);
	 //for dimes
	dime = newamount / 10;
	newamount = newamount - (10 * dime);
	pennies = newamount / 1;
	newamount = newamount - (1 * pennies);
	cout << "quarter=" << quarter << endl;
	cout << "dime=" << dime << endl;
	cout << "pennies=" << pennies << endl;




}

