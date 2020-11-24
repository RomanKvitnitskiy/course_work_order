#pragma once
#include <iostream>
using namespace std;

class Drone
{
public:
	Drone();
	Drone(int, string, int, int);
private:
	int id;
	string type;
	int velocity;
	int batteryCharge;
	int currentX;
	int currentY;
	int desinationX;
	int destinationY;
};

