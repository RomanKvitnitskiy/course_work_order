/*
	Швидкість - дві умовні одиниці
	Розрядка батареї - одна умовна	одиниця
*/

#pragma once
#include "Drone.h"

class Communicator : public Drone
{
public:
	Communicator();
	Communicator(int, string, int, int, int);

	int getCommunicationRange();
	void setCommunicationRange(int);

	void info(Drone*) override;

	~Communicator();
private:
	int communicationRange{};
};
