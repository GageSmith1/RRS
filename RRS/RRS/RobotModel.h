#pragma once
#ifdef RobotModel
#define RobotModel
#endif RobotModel

#include <iostream>
#include <string>

using namespace std;

class RobotModel {
public:
	RobotModel(string a, int b, double c, int d, int e, int f, int g, int h, int i, int j, int k) {
		name = a;
		modelNum = b;
		price = c;
		leftArm = d;
		rightArm = e;
		head = f;
		torso = g;
		locomotor = h;
		battery1 = i;
		battery2 = j;
		battery3 = k;
	}
	void printRobotModel(int count);
	int get_modelNum() { return modelNum; };

protected:
	string name;
	int modelNum;
	double price;
	int leftArm;
	int rightArm;
	int head;
	int torso;
	int locomotor;
	int battery1;
	int battery2;
	int battery3;
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
	int get_partNum() { return partNum; };
	int get_cost() { return cost; };
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
	int get_partNum() { return partNum; };
	int get_cost() { return cost; };
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
	int get_partNum() { return partNum; };
	int get_cost() { return cost; };
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
	int get_partNum() { return partNum; };
	int get_cost() { return cost; };
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
	int get_batterySlots() { return batterySlots; };
	int get_partNum() { return partNum; };
	int get_cost() { return cost; };
protected:
	int batterySlots;
};

void RobotModel::printRobotModel(int count) {
	cout << endl << "(" << count + 1 << ") " << name << endl << "Model number: " << modelNum << endl << "Price: $" << price;
}

void Arm::printArm(int count) {
	cout << endl << count + 1 << ". " << name;
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