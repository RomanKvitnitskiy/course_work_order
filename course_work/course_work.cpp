#include <iostream>
#include "Drone.h"
#include "Navigator.h"
#include "Communicator.h"
using namespace std;

int main()
{
	Communicator com;
	com.info(&com);
}
