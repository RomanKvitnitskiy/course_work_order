#pragma once
#include "Drone.h"

class Navigator : public Drone
{
public:
	Navigator();
	Navigator(int, string, int, int, string);

	string getGpsType();
	void setGpsType(string);

	~Navigator();

private:
	string gpsType;
};

