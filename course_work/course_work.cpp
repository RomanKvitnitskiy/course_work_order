/*
Name: ############;
...
Discipline: ################;
...
Due date: ############;
...
Time spent: ##########;
...
This is my own work;
...
Симулятор демонстрирует перелет роя дронов с начальной в конечную точку.
*/
#include <iostream>
#include <random> 
#include <ctime>
#include "Drone.h"
#include "Navigator.h"
#include "Communicator.h"
#include "Carrier.h"
#include "Commander.h"
using namespace std;

int main()
{
	const int CARRYING_CAPACITY = 20;
	const int COMMUNICATION_RANGE = 5;
	const string COMMAND_AND_CONTROL_TYPE = "low";
	const string GPS_TYPE = "gps";

	mt19937 rng(time(NULL));
	uniform_int_distribution<> rand(1, 100);

	cout << "===============================[The simulation has started]===============================" << endl << endl;

	Commander commander(1, "Commander", rand(rng), rand(rng), GPS_TYPE, COMMAND_AND_CONTROL_TYPE);
	Communicator communicator(2, "Communicator", rand(rng), rand(rng), COMMUNICATION_RANGE);
	Carrier firstCarrier(3, "Carrier 1", rand(rng), rand(rng), CARRYING_CAPACITY);
	Carrier secondCarrier(4, "Carrier 2", rand(rng), rand(rng), CARRYING_CAPACITY);

	commander.info(&commander);
	commander.info(&communicator);
	commander.info(&firstCarrier);
	commander.info(&secondCarrier);
	system("pause");

	int count{ 1 };
	do
	{
		cout << "====================================[Step " << count++ << "]====================================" << endl;

		/* Движение дроном */
		commander.move();
		communicator.move();
		firstCarrier.move();
		secondCarrier.move();

		/* Информация по каждому дрону */
		communicator.info(&commander);
		communicator.info(&communicator);
		communicator.info(&firstCarrier);
		communicator.info(&secondCarrier);
	} while (count != 100);

	cout << "===============================[The simulation is over]===============================" << endl;
	return 0;
}
