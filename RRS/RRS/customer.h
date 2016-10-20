#pragma once
#ifdef customer
define customer
#endif customer

#include <iostream>
#include <string>

using namespace std;

class customer {
public:
	customer(string a, int b, double c) {
		name = a;
		customerNum = b;
		wallet = c;
	}
	int get_customerNum() { return customerNum; };
	void printCustomer(int i);

protected:
	string name;
	int customerNum;
	double wallet;
};

class SA {
public:
	SA(string a, int b) {
		name = a;
		employeeNum = b;
	}
	void printSA(int count);
protected:
	string name;
	int employeeNum;
};

class Order {
public:
	Order(int a, int b, int c, int d, int e, int f, int g) {
		month = a;
		day = b;
		year = c;
		orderNum = d;
		robotModelNum = e;
		employeeNum = f;
		customerNum = g;
	}
	int get_customerNum() { return customerNum; };
	int get_robotModelNum();

protected:
	int month;
	int day;
	int year;
	int orderNum;
	int robotModelNum;
	int employeeNum;
	int customerNum;
};

void customer::printCustomer(int i) {
	cout << endl << "(" << i + 1 << ") " << name << endl << "Customer ID: " << customerNum << endl;
}

void SA::printSA(int count) {
	cout << endl << "(" << count + 1 << ") " << name << endl << "Employee ID: " << employeeNum << endl;
}

int Order::get_robotModelNum() {
	return robotModelNum;
}