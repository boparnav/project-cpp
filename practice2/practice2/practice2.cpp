// practice2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;
int main()
{

int i, j, space;
   for (i = 1; i <= 5; i++)
{
	   //for left side 
	for (space = i; space < 5; space++)
	{
		cout << "*";
	}
	for (j = 1; j <= i; j++)
	{
		cout << " ";
	}
	for (j = 1; j <= i - 1; j++) {
		cout << " ";
	}
	    //for right side
	for (space = i; space < 5; space++)
	{
		cout << "*";
	}
	for (j = 1; j <= i; j++)
	{
		cout << " ";
	}
	for (j = 1; j <= i - 1; j++) {
		cout << " ";
	}
	if (i <= 5) {
		cout << "\n";
	}
}
     // for reverse image
for (i = 3; i >= 1; i--)
{
	 // for left side
	for (space = i; space <5; space++)
	{
		cout << "*";
	}
	for (j = 1; j <= i; j++)
	{
		cout << " ";
	}
	for (j = 1; j <= i - 1; j++) {
		cout << " ";
	}


	//for rigt side
	for (space = i; space < 5; space++)
	{
		cout << "*";
	}
	for (j = 1; j <= i; j++)
	{
		cout << " ";
	}
	for (j = 1; j <= i - 1; j++) {
		cout << " ";
	}
	cout << "\n";

}


system("pause");


return 0;
}