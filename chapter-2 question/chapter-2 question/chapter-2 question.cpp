// chapter-2 question.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;
int main()
{
	int number;
	int sum;
	int positivesum =0;
		int negativesum=0;
		
		for (int i = 0; i < 10; i++)
		{
			cout << "Enter a whole number ";
			cin >> number;
			if (number >= 0)
			{
				positivesum=positivesum+number;
				
			}
			else
			{
				
				negativesum= negativesum+number;
				
			}
		}

		
		cout << " The sum fo all the number less than zero"<< negativesum <<endl;
		
		cout << "The sum of all thenumber greater than zero"<< positivesum <<endl;
		cin >> positivesum;
		sum = negativesum + positivesum;
		cout << "the sum of allthe number is" << endl;
		cin >> sum;
}

