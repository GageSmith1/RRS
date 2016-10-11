#pragma once
#ifdef RobotModel
#define RobotModel
#endif RobotModel

#include <iostream>
#include <string>

using namespace std;

class RobotModel {
public:
	RobotModel(string a, int b, double c) {
		name = a;
		modelNum = b;
		price = c;
	}
	void printRobotModel(int count);
protected:
	string name;
	int modelNum;
	double price;
};

class Part {
public:
	//Part(string a, int b, double c, double d, string e)
		//: name(a), partNum(b), weight(c), cost(d), description(e) {}
protected:
	string name;
	int partNum;
	double weight;
	double cost;
	string description;
};

class Arm:public Part {
public:
	Arm(string a , int b, double c, double d, string e) {
		name = a;
		partNum = b;
		weight = c;
		cost = d;
		description = e;
	}
	void printArm(int count);
};
class Head : public Part {
public:
	Head(string a, int b, double c, double d, string e) {
		name = a;
		partNum = b;
		weight = c;
		cost = d;
		description = e;
	}
	void printHead(int count);
};
class Locomotor : public Part {
public:
	Locomotor(string a, int b, double c, double d, string e, int f) {
		name = a;
		partNum = b;
		weight = c;
		cost = d;
		description = e;
		maxSpeed = f;
	}
	void printLocomotor(int count);
protected:
	int maxSpeed;
};
class Battery : public Part {
public:
	Battery(string a, int b, double c, double d, string e, double f, double g) {
		name = a;
		partNum = b;
		weight = c;
		cost = d;
		description = e;
		energy = f;
		maxPower = g;
	}
	void printBattery(int count);
protected:
	double energy;
	double maxPower;
};
class Torso : public Part {
public:
	Torso(string a, int b, double c, double d, string e, int f) {
		name = a;
		partNum = b;
		weight = c;
		cost = d;
		description = e;
		batterySlots = f;
	}
	void printTorso(int count);
protected:
	int batterySlots;
};

void RobotModel::printRobotModel(int count) {
	cout << endl << "(" << count + 1 << ") " << name << "-" << modelNum << " $" << price;
}

void Arm::printArm(int count) {
	cout << endl << count << ". " << name;
	cout << endl << "Part number: " << partNum;
	cout << endl << "Weight[lb]: " << weight;
	cout << endl << "Cost[Dollars]: " << "$" << cost;
	cout << endl << "Description: " << description;
	cout << endl << endl;
}

void Head::printHead(int count) {
	cout << endl << count + 1 << ". " << name;
	cout << endl << "Part number: " << partNum;
	cout << endl << "Weight[lb]: " << weight;
	cout << endl << "Cost[Dollars]: " << "$" << cost;
	cout << endl << "Description: " << description;
	cout << endl << endl;
}

void Torso::printTorso(int count) {
	cout << endl << count + 1 << ". " << name;
	cout << endl << "Part number: " << partNum;
	cout << endl << "Weight[lb]: " << weight;
	cout << endl << "Cost[Dollars]: " << "$" << cost;
	cout << endl << "Description: " << description;
	cout << endl << "Battery slots: " << batterySlots;
	cout << endl << endl;
}

void Locomotor::printLocomotor(int count) {
	cout << endl << count + 1 << ". " << name;
	cout << endl << "Part number: " << partNum;
	cout << endl << "Weight[lb]: " << weight;
	cout << endl << "Cost[Dollars]: " << "$" << cost;
	cout << endl << "Description: " << description;
	cout << endl << "Max Speed[MPH]: " << maxSpeed;
	cout << endl << endl;
}

void Battery::printBattery(int count) {
	cout << endl << count + 1 << ". " << name;
	cout << endl << "Part number: " << partNum;
	cout << endl << "Weight[lb]: " << weight;
	cout << endl << "Cost[Dollars]: " << "$" << cost;
	cout << endl << "Description: " << description;
	cout << endl << "Energy[Kilowatt hours]: " << energy;
	cout << endl << "Power[watts]: " << maxPower;
	cout << endl << endl;
}