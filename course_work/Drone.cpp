#include "Drone.h"

Drone::Drone() {}
Drone::Drone(int a, string b, int c, int d): id(a), type(b), currentX(c), currentY(d){}

string Drone::getType() { return type; }
int Drone::getId() { return id; }
int Drone::getVelocity() { return velocity; }
int Drone::getBatteryCharge() { return batteryCharge; }
int Drone::getCurrentX() { return currentX; }
int Drone::getCurrentY() { return currentY; }
int Drone::getDesinationX() { return destinationX; }
int Drone::getDesinationY() { return destinationY; }

void Drone::setType(string type) { this->type = type; }
void Drone::setId(int id) { this->id = id; }
void Drone::setVelocity(int velocity) { this->velocity = velocity; }
void Drone::setBatteryCharge(int batteryCharge) { this->batteryCharge = batteryCharge; }
void Drone::setCurrentX(int currentX) { this->currentX = currentX; }
void Drone::




