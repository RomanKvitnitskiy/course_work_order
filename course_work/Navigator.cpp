/*
	Имплементация Navigator.h
*/
#include "Navigator.h"

Navigator::Navigator() {}
Navigator::Navigator(int a, string b, int c, int d, string e) : Drone(a, b, c, d), gpsType(e){}

string Navigator::getGpsType() { return gpsType; }
void Navigator::setGpsType(string gpsType) { this->gpsType = gpsType; }

Navigator::~Navigator() {}
