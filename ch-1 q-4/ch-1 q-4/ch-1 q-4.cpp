// ch-1 q-4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "pch.h"
#include <iostream>
#include <cmath>
using namespace std;
//chapter-1 ques-4

int main()
{
	int sec;
	int accelaration=32;
	int distance;
	cout << "Enter  time\n";
	cin >> sec;

	distance = (accelaration * (sec*sec)) / 2;
	cout << "total distance:\n" << distance<<endl;


system("pause");


	return 0;
}