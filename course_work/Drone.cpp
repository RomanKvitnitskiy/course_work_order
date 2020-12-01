/*
	»мплементаци€ Drone.h
*/
#include "Drone.h"

Drone::Drone() {}
Drone::Drone(int id, string type, int currentX, int destinationX)
{
	this->id = id;
	this->type = type;
	this->currentX = currentX;
	this->destinationX = destinationX;
	currentY = 1;
	destinationY = 100;
	batteryCharge = 100;
}

string Drone::getType() { return type; }
int Drone::getId() { return id; }
int Drone::getVelocity() { return velocity; }
int Drone::getBatteryCharge() { return batteryCharge; }
int Drone::getBatteryLoss() { return batteryLoss; }
int Drone::getCurrentX() { return currentX; }
int Drone::getCurrentY() { return currentY; }
int Drone::getDesinationX() { return destinationX; }
int Drone::getDesinationY() { return destinationY; }

void Drone::setType(string type) { this->type = type; }
void Drone::setId(int id) { if (id >= 0) this->id = id; }
void Drone::setVelocity(int velocity) { if (velocity > 0) this->velocity = velocity; }
void Drone::setBatteryCharge(int batteryCharge) { if (batteryCharge > 0) this->batteryCharge = batteryCharge; }
void Drone::setBatteryLoss(int batteryLoss) { if (batteryLoss > 0) this->batteryLoss = batteryLoss; }
void Drone::setCurrentX(int currentX) { this->currentX = currentX; }
void Drone::setCurrentY(int currentY) { this->currentY = currentY; }
void Drone::setDestinationX(int destinationX) { this->destinationX = destinationX; }
void Drone::setDestinationY(int destinationY) { this->destinationY = destinationY; }

void Drone::move()
{
	/* если зар€д батареи не равен нулю, можем двигатьс€ */
	if (getBatteryCharge() > 0)
	{
		/* если конечный ’ больше начального */
		if (getCurrentX() < getDesinationX()) speedCheck(true);

		/* если конечный ’ меньше начального */
		else if (getCurrentX() > getDesinationX()) speedCheck(false);
		
		setBatteryCharge(getBatteryCharge() - getBatteryLoss()); // разр€д батареи
		setCurrentY(getCurrentY() + 1); // перемещение по Y
	}
}

/*
	дополнительный метод дл€ проверки возможности выхода за приделы ’ с определенным шагом(скоростью)
*/
void Drone::speedCheck(bool check)
{
	if (check)
	{
		if (getVelocity() > (getDesinationX() - getCurrentX())) 
			setCurrentX(getCurrentX() + (getDesinationX() - getCurrentX()));
		else 
			setCurrentX(getCurrentX() + getVelocity());
	}
	else
	{
		if (getVelocity() > (getCurrentX() - getDesinationX())) 
			setCurrentX(getCurrentX() - (getCurrentX() - getDesinationX()));
		else 
			setCurrentX(getCurrentX() - getVelocity());
	}
}

Drone::~Drone() {}
