// RRS.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "RobotModel.h"
#include <iostream>

using namespace std;

int main()
{
	string a;
	int b;
	double c;
	cout << endl << "Enter name of model: ";
	cin >> a;
	cout << endl << "Enter model number: ";
	cin >> b;
	cout << endl << "Enter price of model: ";
	cin >> c;
	RobotModel Test(a,b,c);
	Test.printRobotModel();
    return 0;
}

