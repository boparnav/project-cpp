// ch-5 q-3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>


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
		if (Totalmins >= 60)
		{
			Totalhours++;

		}
		if (Totalhours > 12) {
			Totalhours = Totalhours -12;
			cout << "Totaltime is" << Totalhours << ":" << Totalmins <<"PM"<< endl;
		}
		else {
			cout << "Totaltime is" << Totalhours << ":" << Totalmins <<"AM"<< endl;
		}
		

		cout << "Do you want to repeat";
		cin >> choice;

	} while (choice == 'y' || choice == 'Y');


	system("pause");
	return 0;
}



