#pragma once
#ifdef RobotModel
#define RobotModel
#endif RobotModel

#include <iostream>
#include <string>

using namespace std;

class RobotModel {
public:
	string name;
	int modelNum;
	double price;
	RobotModel(string a, int b, double c) {
		name = a;
		modelNum = b;
		price = c;
	}
	void printRobotModel();
};

class Part {
	string name;
	int partNum;
	double weight;
	double cost;
	string description;
};

void RobotModel::printRobotModel() {
	cout << "Name: " << name << endl;
	cout << "modelNum: " << modelNum << endl;
	cout << "Price: " << price << endl;
}