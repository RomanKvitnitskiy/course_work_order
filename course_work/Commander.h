#pragma once
#include "Navigator.h"

class Commander : public Navigator
{
public:
	Commander();
	Commander(int, string, int, int, string, string);

	string getCommandAndControlType();
	void setCommandAndControlType(string);

	void info(Drone*) override;

	~Commander();
private:
	string  commandAndControlType;
};
