// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
// chater-5 ,Questions


#include "pch.h"
#include <iostream>
#include <cmath>
using namespace std;

double w(double v, double t)
{
	if (t <= 10)
	{
		double w = 13.12 + 0.6215*t - 11.37*pow(v, 0.6) + 0.3965*t*pow(v, 0.016);
		cout << " According to your feedback the windchill index is";
		return w;
	}
	else {
		return (0);
	}
}

int main()
{
	double v = 0;  //wind speed in m/sec 
	double t = 0; // temp in degree celsius
	;// windcill index
	cout << "Enter wind speed";
	cin >> v;
	cout << "Enter current temperature here";
	cin >> t;

	cout << w(v, t) << endl;

	system("pause");
	return 0;
}
