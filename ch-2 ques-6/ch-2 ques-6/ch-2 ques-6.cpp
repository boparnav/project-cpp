// ch-2 ques-6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	double hourworked,overtimehours,grosspay,netpay;
	double sstax = 0.06;
	double ftax = 0.14;
	double sitax =0.05;
	int unionpay = 10;
	int  hinsurence=35; 
	double dependent, sstaxpay, ftaxpay, sitaxpay;
		cout << "Enter how many hours you have worked"<<endl;
	cin >> hourworked;
	if (hourworked <= 40)
	{
		grosspay = hourworked * 16.78;
		cout << "grosspay upto 40 hours worked is" <<  grosspay<<endl;
	}
	else
	{
		overtimehours = hourworked - 40;
		grosspay = 40 * 16.78 + overtimehours * 16.78*1.5;
		cout << "grosspay greater than 40 hours worked is" << grosspay << endl;
	}
	sstaxpay = grosspay * sstax;
	cout << "your grosspay with soial security  tax is:" << sstaxpay<< endl;

	ftaxpay = grosspay * ftax;
	cout << "your grosspay with fedral tax is:" << ftaxpay;

	sitaxpay = grosspay * sitax;
	cout << "your grosspay with state income  tax is:" <<sitaxpay;

	netpay = grosspay - sstaxpay - ftaxpay - sitaxpay - unionpay;

	cout << "your netpay after unionpay deduction  is:" << netpay;

	
	cout << "how many deendents you have" << endl;
	cin >> dependent;
	if (dependent > 3) {
		netpay = netpay - hinsurence;
		cout << "Total netpay with three or more deendents healthinsurence is:" << endl;
		cin >> netpay;
	}
	else
	{
		cout << "Total netpay with lessthan three deendents healthinsurence is:" << endl;
		cin >> netpay;
	}

	system("pause");
	return 0;
	}
	