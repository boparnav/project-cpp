// Chater-2q-10.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;
int main()
{
	int number;
	int count;
	int pcount=0;
	int	ncount=0;
	int nsum, psum, sum;
	int naverage, paverage, average;
	psum = 0;
	nsum = 0;
	paverage = 0;
	naverage = 0;
	count = 0;

	for (int i = 0; i < 10; i++, count++)
	{
		cout << "Enter a whole number  ";
		cin >> number;

		if (number <= 0)
		{
			nsum =nsum+ number;
			ncount++;
			
		}
		else
		{
			psum=psum+ number;
			pcount++;
			
		}
	}
	cout << "The sum of all the numbers less than zero is:" << nsum << endl;
	cout << "The sum of all the numbers greater than zero is: " << psum << endl;
	sum = psum + nsum;
		cout << "The sum of all the numbers is: "<< sum<< endl;
	paverage = psum / pcount;
		cout << "The average of all the numbers greater than zero is: " << paverage<< endl;
	naverage = nsum / ncount;
		cout << "The average of all the numbers less than zero is: " << naverage<< endl;
	average = sum / count;
			cout << "The average of all the numbers is: "<< average<< endl;

	system("pause");
	return 0;
}



