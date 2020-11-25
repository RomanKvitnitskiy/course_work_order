#pragma once
#include <iostream>
using namespace std;

class Drone
{
public:
	/* ������������ */
	Drone();
	Drone(int, string, int, int);

	/* ������ */
	int getId();
	string getType();
	int getVelocity();
	int getBatteryCharge();
	int getCurrentX();
	int getCurrentY();
	int getDesinationX();
	int getDesinationY();

	/* ������ */
	void setId(int);
	void setType(string);
	void setVelocity(int);
	void setBatteryCharge(int);
	void setCurrentX(int);
	void setCurrentY(int);
	void setDestinationX(int);
	void setDestinationY(int);

	/* �������������� ������ */

	// ����������� �����
	virtual void info() = 0;

	// ����� �������� ������ 
	void move();

	~Drone();
private:
	int id;
	string type;
	int velocity;
	int batteryCharge;
	int currentX;
	int currentY;
	int destinationX;
	int destinationY;
};
