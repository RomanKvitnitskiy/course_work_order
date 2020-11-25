#pragma once
#include <iostream>
using namespace std;

class Drone
{
public:
	/* Конструкторы */
	Drone();
	Drone(int, string, int, int);

	/* Гетеры */
	int getId();
	string getType();
	int getVelocity();
	int getBatteryCharge();
	int getCurrentX();
	int getCurrentY();
	int getDesinationX();
	int getDesinationY();

	/* Сетеры */
	void setId(int);
	void setType(string);
	void setVelocity(int);
	void setBatteryCharge(int);
	void setCurrentX(int);
	void setCurrentY(int);
	void setDestinationX(int);
	void setDestinationY(int);

	/* Дополнительные методы */

	// Виртуальный метод
	virtual void info() = 0;

	// Метод движения дроном 
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
