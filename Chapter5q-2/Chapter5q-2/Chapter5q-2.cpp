// Chapter5q-2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;
int main()
{

	char choice;

	do {
		int Chours, Cmins;
		int Whours, Wmins;
		int Totalhours, Totalmins;
		cout << "Enter current Hours";
		cin >> Chours;
		cout << "Enter crrent minutes";
		cin >> Cmins;
		cout << "Enter waited Hours";
		cin >> Whours;
		cout << "Enter waited minutes";
		cin >> Wmins;
		Totalhours = Chours + Whours;
		Totalmins = Cmins + Wmins;
		if (Totalmins>=60)
		{
			Totalhours++;
			
		}
		cout << "Totaltime is" << Totalhours << ":" << Totalmins << endl;

			cout << "Do you want to repeat";
			cin >> choice;

	}
	while (choice == 'y' || choice == 'Y');



}


