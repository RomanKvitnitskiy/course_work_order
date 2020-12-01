#pragma once
#include "Drone.h"

class Carrier : public Drone
{
public:
	Carrier();
	Carrier(int, string, int, int, int);

	int getCarryingCapacity();
	void setCarryingCapacity(int);

	void info(Drone*) override;

	~Carrier();
private:
	int carryingCapacity{};
};

