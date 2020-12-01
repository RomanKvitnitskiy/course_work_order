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
int Drone::getCurrentX() { return currentX; }
int Drone::getCurrentY() { return currentY; }
int Drone::getDesinationX() { return destinationX; }
int Drone::getDesinationY() { return destinationY; }

void Drone::setType(string type) { this->type = type; }
void Drone::setId(int id) { if (id >= 0) this->id = id; }
void Drone::setVelocity(int velocity) { if (velocity > 0) this->velocity = velocity; }
void Drone::setBatteryCharge(int batteryCharge) { if (batteryCharge > 0) this->batteryCharge = batteryCharge; }
void Drone::setCurrentX(int currentX) { this->currentX = currentX; }
void Drone::setCurrentY(int currentY) { this->currentY = currentY; }
void Drone::setDestinationX(int destinationX) { this->destinationX = destinationX; }
void Drone::setDestinationY(int destinationY) { this->destinationY = destinationY; }

void Drone::move()
{
	if (getBatteryCharge() > 0)
	{

	}
}

Drone::~Drone() {}