// RRS.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "RobotModel.h"
#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int b, count = 0,armCount = 0,headCount = 0, torsoCount = 0, i, m;
	int num = -1, locoCount = 0, batteryCount = 0, q;
	string a, l, p;
	double c, n, o, r, s;

	vector<RobotModel> model;
	vector<Arm> arm;
	vector<Head> head;
	vector<Locomotor> loco;
	vector<Battery> battery;
	vector<Torso> torso;

	while (num != 0) {
		cout << "(1) Create RobotModel" << endl;
		cout << "(2) Print RoboModels" << endl;
		cout << "(3) Create RobotPart" << endl;
		cout << "(4) Browse parts" << endl;
		cout << "(0) Exit program" << endl;
		cin >> num;
		if (num == 1) {
			cin.ignore();
			cout << endl << "Enter name of model: ";
			getline(cin, a);
			cout << endl << "Enter model number: ";
			cin >> b;
			cout << endl << "Enter price of model: ";
			cin >> c;
			model.push_back(RobotModel(a, b, c));
			count++;
			cout << endl;
		}
		else if (num == 2) {
			for (i = 0; i < count; i++) {
				model[i].printRobotModel(i);
			}
			cout << endl << endl;
		}
		else if (num == 3) {
			while (num != 0 && num != -1) {
				cout << endl << "What kind of part would you like to create." << endl;
				cout << "(1) Arm" << endl;
				cout << "(2) Head" << endl;
				cout << "(3) Torso" << endl;
				cout << "(4) Locomotor" << endl;
				cout << "(5) Battery" << endl;
				cout << "(-1) Back" << endl;
				cout << "(0) Exit program" << endl;
				cin >> num;
				if (num == 1) {
					cin.ignore();
					cout << endl << "Enter name of part: ";
					getline(cin, l);
					cout << endl << "Enter part number: ";
					cin >> m;
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
					cout << endl << "Enter part number: ";
					cin >> m;
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
					cout << endl << "Enter part number: ";
					cin >> m;
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
					cout << endl << "Enter part number: ";
					cin >> m;
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
					cout << endl << "Enter part number: ";
					cin >> m;
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


