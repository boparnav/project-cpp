// chapter-2 q-3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>


using namespace std;
int main()
{
	int annualpay;
	double retro = 7.6;
	cout << "enter your annual salary\n " << endl;
	cin >> annualpay;

	// retropay is for six month salary
	int months;
	cout << "Enter months you want to calculate your salary ";
	cin >> months;
	int retropay;
	retropay = annualpay / months;
	cout << "Eligible salary to get retro increase is:\n" << retropay << endl;

	// retroSalary is for multiplying the 7.6% with six month salary
	int retroSalary;
	retroSalary = retropay * 0.76;
	cout << "Salary with increase is :\n" << retroSalary << endl;
	int increasedSalary = 0;
	increasedSalary = retroSalary + retropay;
	cout << "Total retrosalary\n" << increasedSalary << endl;
	// newannualSalary for annual salary with increase
	int newannualSalary;
	newannualSalary = increasedSalary + retropay;
	cout << "New salary with increase is:\n" << newannualSalary << endl;
	//newmonthly salary is for new monthly salary for next year
	int newmonthlySalary;
	newmonthlySalary = newannualSalary / 12;
	cout << "new monthly salary is:\n" << newmonthlySalary << endl;



	system("pause");


	return 0;
}