// Chapter-4  q-2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;


	double hatsize1(double height, double weight)
	{
     double hatsize;
	 hatsize = (weight / height)*2.9;
     return hatsize;
     }
    double jacketsize1(double height, double weight, int age)
	{
		int newage, newage1;
		   int count=0;
        double jacketsize;
        jacketsize = (weight * height) / 288;

		cout << "before " << jacketsize << endl;
if (age > 30)
     {
        newage = age - 30;
        newage1 = newage / 10;
for (count = 0; count < newage1; count++)
	{
    jacketsize = jacketsize + 0.125;
	}
	}
return jacketsize;
}
double waistsize1(double height, double weight, int age) {
    int newage, newage1, count;
     double waistsize;
      waistsize = (weight) / 5.7;
        cout << "before" << waistsize << endl;
if (age > 28)
         {
            newage = age - 28;
			newage1 = newage / 2;
	for (count = 0; count < newage1; count++)
     {
		waistsize = waistsize + 0.1;
	 }
		}
return waistsize;
}
int main()
   {
	double height = 0;
	double weight = 0;
	double hatsize, jacketsize, waistsize;
		double select=0;
		int age=0;
		 int count=0;
		 cout << "Enter height in inches\n";
		 cin >> height; 
		 cout << "Enter weight in pound\n";
		 cin >> weight;
		 cout << "Enter age";
		 cin>>age
			 ;
		hatsize = hatsize1(height, weight);
		cout << "According to requirements the hat size is:" << hatsize << endl;

		jacketsize = jacketsize1(height, weight, age);

		cout << "According to requirements the jacket size  is:" << jacketsize << endl;

		waistsize = waistsize1(height, weight, age);

		cout << "According to requirements the waist size  is:"<<waistsize<<endl ;

		system("pause");
}

