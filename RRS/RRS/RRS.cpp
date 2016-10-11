// RRS.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "RobotModel.h"
#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int b, count = 0,armCount = 0,headCount = 0, torsoCount = 0, i, m, partNum, loop;
	int num = -1, locoCount = 0, batteryCount = 0, q, d, e, f, g, h, i1, j, k, batterySlots;
	string a, l, p;
	double c, n, o, r, s;

	vector<RobotModel> model;
	vector<Arm> arm;
	vector<Head> head;
	vector<Locomotor> loco;
	vector<Battery> battery;
	vector<Torso> torso;

	while (num != 0) {
		cout << "--------------------" << endl;
		cout << "(1) Create RobotModel" << endl;
		cout << "(2) Browse RoboModels" << endl;
		cout << "(3) Create RobotPart" << endl;
		cout << "(4) Browse parts" << endl;
		cout << "(0) Exit program" << endl;
		cout << "--------------------" << endl;
		cin >> num;
		if (num == 1) {
			if (armCount != 0 && headCount != 0 && torsoCount != 0 && locoCount != 0 && batteryCount != 0) {
				c = 0;
				cin.ignore();
				cout << endl << "Enter name of model: ";
				getline(cin, a);
				loop = 1;
				while (loop == 1) {
					loop = 0;
					cout << endl << "Enter model number: ";
					cin >> b;
					for (i = 0; i < count; i++) {
						partNum = model[i].get_modelNum();
						if (b == partNum) {
							loop = 1;
							cout << "Model number already exists please try again.";
						}
					}
				}

				//arms
				cout << endl << "----------" << endl << "Arm" << endl << "----------" << endl;
				for (i = 0; i < armCount; i++) {
					arm[i].printArm(i);
				}
				cout << endl << "Enter part number for left arm: ";
				cin >> d;
				for (i = 0; i < armCount; i++) {
					partNum = arm[i].get_partNum();
					if (d == partNum) {
						c += arm[i].get_cost();
					}
				}
				cout << endl << "Enter part number for right arm: ";
				cin >> e;
				for (i = 0; i < armCount; i++) {
					partNum = arm[i].get_partNum();
					if (e == partNum) {
						c += arm[i].get_cost();
					}
				}

				//head
				cout << endl << "----------" << endl << "Head" << endl << "----------" << endl;
				for (i = 0; i < headCount; i++) {
					head[i].printHead(i);
				}
				cout << endl << "Enter part number for head: ";
				cin >> f;
				for (i = 0; i < headCount; i++) {
					partNum = head[i].get_partNum();
					if (f == partNum) {
						c += head[i].get_cost();
					}
				}

				//torso
				cout << endl << "----------" << endl << "Torso" << endl << "----------" << endl;
				for (i = 0; i < torsoCount; i++) {
					torso[i].printTorso(i);
				}
				cout << endl << "Enter part number for torso: ";
				cin >> g;
				for (i = 0; i < torsoCount; i++) {
					partNum = torso[i].get_partNum();
					if (g == partNum) {
						batterySlots = torso[i].get_batterySlots();
						c += torso[i].get_cost();
					}
				}

				//locomotor
				cout << endl << "----------" << endl << "Locomotor" << endl << "----------" << endl;
				for (i = 0; i < locoCount; i++) {
					loco[i].printLocomotor(i);
				}
				cout << "Enter part number for locomotor: ";
				cin >> h;
				for (i = 0; i < locoCount; i++) {
					partNum = loco[i].get_partNum();
					if (h == partNum) {
						c += loco[i].get_cost();
					}
				}

				//battery
				cout << endl << "----------" << endl << "Battery" << endl << "----------" << endl;
				for (i = 0; i < batteryCount; i++) {
					battery[i].printBattery(i);
				}
				if (batterySlots == 1) {
					cout << endl << "Enter part number for the battery: ";
					cin >> i1;
					for (i = 0; i < batteryCount; i++) {
						partNum = battery[i].get_partNum();
						if (i1 == partNum) {
							c += battery[i].get_cost();
						}
					}
					j = -1;
					k = -1;
				}
				else if (batterySlots == 2) {
					cout << endl << "Enter part number for the first battery: ";
					cin >> i1;
					for (i = 0; i < batteryCount; i++) {
						partNum = battery[i].get_partNum();
						if (i1 == partNum) {
							c += battery[i].get_cost();
						}
					}
					cout << endl << "Enter part number for the second battery: ";
					cin >> j;
					for (i = 0; i < batteryCount; i++) {
						partNum = battery[i].get_partNum();
						if (j == partNum) {
							c += battery[i].get_cost();
						}
					}
					k = -1;
				}
				else if (batterySlots == 3) {
					cout << endl << "Enter part number for the first battery: ";
					cin >> i1;
					for (i = 0; i < batteryCount; i++) {
						partNum = battery[i].get_partNum();
						if (i1 == partNum) {
							c += battery[i].get_cost();
						}
					}
					cout << endl << "Enter part number for the second battery: ";
					cin >> j;
					for (i = 0; i < batteryCount; i++) {
						partNum = battery[i].get_partNum();
						if (j == partNum) {
							c += battery[i].get_cost();
						}
					}
					cout << endl << "Enter part number for the third battery: ";
					cin >> k;
					for (i = 0; i < batteryCount; i++) {
						partNum = battery[i].get_partNum();
						if (k == partNum) {
							c += battery[i].get_cost();
						}
					}
				}

				model.push_back(RobotModel(a, b, c, d, e, f, g, h, i1, j, k));
				count++;
				cout << endl;
			}
			else {
				cout << endl << "In order to create a robot model you must first create the following parts:" << endl;
				if (armCount == 0) {
					cout << "arm" << endl;
				}
				if (headCount == 0) {
					cout << "head " << endl;
				}
				if (torsoCount == 0) {
					cout << "torso " << endl;
				}
				if (locoCount == 0) {
					cout << "locomotor " << endl;
				}
				if (batteryCount == 0) {
					cout << "battery " << endl;
				}
				cout << endl;
			}
		}
		else if (num == 2) {
			for (i = 0; i < count; i++) {
				model[i].printRobotModel(i);
			}
			cout << endl << endl;
		}
		else if (num == 3) {
			while (num != 0 && num != -1) {
				cout << "--------------------" << endl;
				cout << "What kind of part would you like to create." << endl;
				cout << "(1) Arm" << endl;
				cout << "(2) Head" << endl;
				cout << "(3) Torso" << endl;
				cout << "(4) Locomotor" << endl;
				cout << "(5) Battery" << endl;
				cout << "(-1) Back" << endl;
				cout << "(0) Exit program" << endl;
				cout << "--------------------" << endl;
				cin >> num;
				if (num == 1) {
					cin.ignore();
					cout << endl << "Enter name of part: ";
					getline(cin, l);
					loop = 1;
					while (loop == 1) {
						loop = 0;
						cout << endl << "Enter part number: ";
						cin >> m;
						for (i = 0; i < armCount; i++) {
							partNum = arm[i].get_partNum();
							if (m == partNum) {
								loop = 1;
								cout << "Model number already exists please try again.";
							}
						}
					}
					cout << endl << "Enter weight: ";
					cin >> n;
					cout << endl << "Enter cost: ";
					cin >> o;
					cout << endl << "Enter part description: ";
					cin.ignore();
					getline(cin, p);
					arm.push_back(Arm(l, m, n, o, p));
					armCount++;
				}
				else if (num == 2) {
					cin.ignore();
					cout << endl << "Enter name of part: ";
					getline(cin, l);
					loop = 1;
					while (loop == 1) {
						loop = 0;
						cout << endl << "Enter part number: ";
						cin >> m;
						for (i = 0; i < headCount; i++) {
							partNum = head[i].get_partNum();
							if (m == partNum) {
								loop = 1;
								cout << "Model number already exists please try again.";
							}
						}
					}
					cout << endl << "Enter weight: ";
					cin >> n;
					cout << endl << "Enter cost: ";
					cin >> o;
					cout << endl << "Enter part description: ";
					cin.ignore();
					getline(cin, p);
					head.push_back(Head(l, m, n, o, p));
					headCount++;
				}
				else if (num == 3) {
					cin.ignore();
					cout << endl << "Enter name of part: ";
					getline(cin, l);
					loop = 1;
					while (loop == 1) {
						loop = 0;
						cout << endl << "Enter part number: ";
						cin >> m;
						for (i = 0; i < torsoCount; i++) {
							partNum = torso[i].get_partNum();
							if (m == partNum) {
								loop = 1;
								cout << "Model number already exists please try again.";
							}
						}
					}
					cout << endl << "Enter weight: ";
					cin >> n;
					cout << endl << "Enter cost: ";
					cin >> o;
					cout << endl << "Enter part description: ";
					cin.ignore();
					getline(cin, p);
					cout << endl << "Enter number of battery slots: ";
					cin >> q;
					torso.push_back(Torso(l, m, n, o, p, q));
					torsoCount++;
				}
				else if (num == 4) {
					cin.ignore();
					cout << endl << "Enter name of part: ";
					getline(cin, l);
					loop = 1;
					while (loop == 1) {
						loop = 0;
						cout << endl << "Enter part number: ";
						cin >> m;
						for (i = 0; i < locoCount; i++) {
							partNum = loco[i].get_partNum();
							if (m == partNum) {
								loop = 1;
								cout << "Model number already exists please try again.";
							}
						}
					}
					cout << endl << "Enter weight: ";
					cin >> n;
					cout << endl << "Enter cost: ";
					cin >> o;
					cout << endl << "Enter part description: ";
					cin.ignore();
					getline(cin, p);
					cout << endl << "Enter max speed: ";
					cin >> q;
					loco.push_back(Locomotor(l, m, n, o, p, q));
					locoCount++;
				}
				else if (num == 5) {
					cin.ignore();
					cout << endl << "Enter name of part: ";
					getline(cin, l);
					loop = 1;
					while (loop == 1) {
						loop = 0;
						cout << endl << "Enter part number: ";
						cin >> m;
						for (i = 0; i < batteryCount; i++) {
							partNum = battery[i].get_partNum();
							if (m == partNum) {
								loop = 1;
								cout << "Model number already exists please try again.";
							}
						}
					}
					cout << endl << "Enter weight: ";
					cin >> n;
					cout << endl << "Enter cost: ";
					cin >> o;
					cout << endl << "Enter part description: ";
					cin.ignore();
					getline(cin, p);
					cout << endl << "Enter energy: ";
					cin >> r;
					cout << endl << "Enter max power: ";
					cin >> s;
					battery.push_back(Battery(l, m, n, o, p, r, s));
					batteryCount++;
				}
				cout << endl;
			}
		}
		else if (num == 4) {
			cout << endl << "----------" << endl << "Arm" << endl << "----------" << endl;
			for (i = 0; i < armCount; i++) {
				arm[i].printArm(i);
			}
			cout << endl << "----------" << endl << "Head" << endl << "----------" << endl;
			for (i = 0; i < headCount; i++) {
				head[i].printHead(i);
			}
			cout << endl << "----------" << endl << "Torso" << endl << "----------" << endl;
			for (i = 0; i < torsoCount; i++) {
				torso[i].printTorso(i);
			}
			cout << endl << "----------" << endl << "Locomotor" << endl << "----------" << endl;
			for (i = 0; i < locoCount; i++) {
				loco[i].printLocomotor(i);
			}
			cout << endl << "----------" << endl << "Battery" << endl << "----------" << endl;
			for (i = 0; i < batteryCount; i++) {
				battery[i].printBattery(i);
			}
		}
	}
    return 0;
}


