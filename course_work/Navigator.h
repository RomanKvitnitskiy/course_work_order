/*
	Ўвидк≥сть Ц дв≥ умовних одиниц≥.
	–озр€дка батарењ Ц одна умовна одиниц€
*/
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
