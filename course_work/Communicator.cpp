/*
	Имплементация Communicator.h

	Скорость - две условные единицы
	Разряд батареи - одна условная единица
*/
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
	/* если заряд батареи больше нуля */
	if (obj->getBatteryCharge() > 0) 
	{
		if (obj->getCurrentY() == 100 && obj->getCurrentX() == obj->getDesinationX())
			cout << "----------------------------------------------" << endl
				<< "Drone ID: " << obj->getId() << ", arrived at the destination." << endl
				<< "Position: " << endl
				<< "x -> " << obj->getCurrentX() << ";" << endl
				<< "y -> " << obj->getCurrentY() << ";" << endl;
				
		else
			cout << "Drone ID: " << obj->getId() << ", keeps moving." << endl
				<< "Position: " << endl
				<< "x -> " << obj->getCurrentX() << ";" << endl
				<< "y -> " << obj->getCurrentY() << ";" << endl
				<< "----------------------------------------------" << endl;
	}

	/* если заряд батареи закончился но дрон успел добраться до точки назначения */
	else if (obj->getBatteryCharge() == 0 && obj->getCurrentY() == 100 && obj->getCurrentX() == obj->getDesinationX())
		cout << "Drone ID: " << obj->getId() << ", arrived at the destination." << endl
			<< "Position: " << endl
			<< "x -> " << obj->getCurrentX() << ";" << endl
			<< "y -> " << obj->getCurrentY() << ";" << endl
			<< "----------------------------------------------" << endl;

	/* если заряд батареи закончился до того, как дрон добрался места назначения */
	else
		cout << "Drone ID: " << obj->getId() << ", the battery has run out, movement is not possible." << endl
		<< "Position: " << endl
		<< "x -> " << obj->getCurrentX() << ";" << endl
		<< "y -> " << obj->getCurrentY() << ";" << endl 
		<< "----------------------------------------------" << endl;
}

Communicator::~Communicator() {}
