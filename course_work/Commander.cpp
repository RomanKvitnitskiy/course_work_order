/*
	Имплементация Сommander.h

	Скорость - две условные единицы
	Разряд батареи - одна условная единица
*/
#include "Commander.h"

Commander::Commander() {}
Commander::Commander(int a, string b, int c, int d, string e, string f): Navigator(a, b, c, d, e), commandAndControlType(f) 
{
	setVelocity(2);
	setBatteryLoss(1);
}

string Commander::getCommandAndControlType() { return commandAndControlType; }
void Commander::setCommandAndControlType(string commandAndControlType) { this->commandAndControlType = commandAndControlType; }

void Commander::info(Drone* obj) {

	cout << "Drone type: " << obj->getType() << "; ID: " << obj->getId() 
		<< "; Coordinates: ("<< obj->getCurrentX() << ", " << obj->getCurrentY() << ") -> "
		<< "(" << obj->getDesinationX() << ", " << obj->getDesinationY() << ")" << endl << endl;
}

Commander::~Commander() {}
