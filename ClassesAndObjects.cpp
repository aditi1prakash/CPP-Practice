// Standard (system) header files
#include <iostream>
#include <stdlib.h>
// Add more standard header files as required
#include <string>

using namespace std;

// Add your project's header files here
class Player{

public:
	string name;
	int health;
	int xp;

	void talk(string message){
		cout << name << " says " << message << endl;
	}
	bool isDead()
	{
		cout << name << " is Dead!!" << endl;
		return 1;
	}
};

// Main program
int main (void)
{

	//Accessing class attributes using member of pointer (arrow) operator
	Player *voldemort = new Player;
	voldemort -> name = "Voldemort";
	voldemort -> health = 100;
	voldemort -> xp = 12;

	voldemort->talk("Avada Kedavra!!");

	delete voldemort;

	//Accessing class attributes and methods using dot operator
	Player aditi;
	aditi.name = "Aditi";
	aditi.health = 100;
	aditi.xp = 12;

	aditi.talk("Expelliarmus!");

	voldemort -> isDead();


	return 0;
}
