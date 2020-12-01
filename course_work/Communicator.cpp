#include "Communicator.h"

Communicator::Communicator() {}
Communicator::Communicator(int a, string b, int c, int d, int e): Drone(a, b, c, d), communicationRange(e) 
{
	setVelocity(2);
	setBatteryLoss(1);
}

int Communicator::getCommunicationRange() { return communicationRange; }
void Communicator::setCommunicationRange(int communicationRange) { this->communicationRange = communicationRange; }

void Communicator::info(Drone* obj)
{

}

Communicator::~Communicator() {}
