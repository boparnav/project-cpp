// ch-2q-6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>


	//chater2 question-5
	using namespace std;
	int main()
	{
		int  capacity;
		cout << "what is the maximum capacity of room for meeting\n";
		cin >> capacity;

		int attender;
		cout << "How many people are attending meeting\n";
		cin >> attender;
		int req = (capacity - attender);

		if (attender == capacity)
		{
			cout << "legal to hold the meeting\n";
		}
		else if (attender < capacity) {
			cout << "it is legal to held meeting you can add" <<  req << " more people";
		}
		else if (attender > capacity)

		{
			cout << "illegal to hold the meeting you need to exclude\n" <<  req << "people from room";
		}


		system("pause");


		return 0;
}

