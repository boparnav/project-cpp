// Helloworld .cpp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;
int main()
{

	int i;
	int j;
	for (i = 1; i <= 5; i++)
	{
		for (j = 1; j <= i; j++)
		{
			cout << "*";
		}
		cout << "\n";
	}

	system("pause");


	return 0;
}

