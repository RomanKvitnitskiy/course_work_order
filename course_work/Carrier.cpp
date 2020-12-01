#include "Carrier.h"

Carrier::Carrier() {}
Carrier::Carrier(int a, string b, int c, int d, int e): Drone(a, b, c, d), carryingCapacity(e)
{
	setVelocity(1);
	setBatteryLoss(2);
}

int Carrier::getCarryingCapacity() { return carryingCapacity; }
void Carrier::setCarryingCapacity(int carryingCapacity) { this->carryingCapacity = carryingCapacity; }

void Carrier::info(Drone* obj)
{
	cout << "Drone ID: " << obj->getId() << " have battery: " << obj->getBatteryCharge() << endl;
}

Carrier::~Carrier() {}
