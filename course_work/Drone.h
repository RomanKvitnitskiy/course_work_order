/*
	Заглавный файл Drone 
	основа иерархии
	основное управление дроном

*/
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
	int getBatteryLoss();
	int getCurrentX();
	int getCurrentY();
	int getDesinationX();
	int getDesinationY();

	/* Сетеры */
	void setId(int);
	void setType(string);
	void setVelocity(int);
	void setBatteryCharge(int);
	void setBatteryLoss(int);
	void setCurrentX(int);
	void setCurrentY(int);
	void setDestinationX(int);
	void setDestinationY(int);

	/* Дополнительные методы */

	// Виртуальный метод
	virtual void info(Drone*) = 0;

	// Методы движения дроном 
	void move();
	void speedCheck(bool);

	~Drone();
private:
	int id{};
	string type;
	int velocity{};
	int batteryCharge{};
	int batteryLoss{};
	int currentX{};
	int currentY{};
	int destinationX{};
	int destinationY{};
};
