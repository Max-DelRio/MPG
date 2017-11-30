/*
Max Del Rio
Homework 1
Date Due: Thu, 21 Sept 2017
Visual Studio 2015
Make a program so that the user will input the number of miles traveled, and gallons used to determine miles per gallon. Optionally program with a loop.
*/

#include <iostream>
#include <cmath> //

using namespace std;

int main()
{
	double numOfMiles = 0;
	double numofGal = 0;
	double MPG = 0;
	char ch = 0;

	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);
	

	do
	{
		cout << "Enter number of gallons used  : ";
		cin >> numofGal;

		cout << "Enter number of miles traveled: ";
		cin >> numOfMiles;

		MPG = numOfMiles / numofGal;
		cout << "Your MPG is                   : " << MPG << endl;

		cout << "Do you want to quit the program 'q' or 'y' to run again: ";
		cin.ignore();
		ch = cin.get();

	}while ((numofGal>0) && (ch !='q'));


	system("Pause");

	return 0;
}