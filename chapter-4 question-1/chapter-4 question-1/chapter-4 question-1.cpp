// chapter-4 question-1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;
int main()
{
	double aCost, dPayment;
	double InLoan, loanbalance;
	double interestloan;
	double mortgage, savetax, costaftertax;
	cout << "Enter the price  of house" << endl;
	cin >> aCost;
	cout << "Enter downpayment" << endl;
	cin >> dPayment;

	// for initial loan
	InLoan = aCost - dPayment;
	cout << "Loan balance"<< InLoan;

	//for annual mortgae
	interestloan = InLoan * 3 / 100;
	loanbalance = InLoan * 6 / 100;
	mortgage = interestloan + loanbalance;
	cout << "Annual murtgage is:"<< mortgage;

	// for tax saving
	savetax = loanbalance * 35 / 100;
	cout << "tax asving is:"<< savetax;
	costaftertax = mortgage - savetax;
	cout << "annual Cost afte tax is:"<< costaftertax;






	system("pause");
	return 0;


}


