// Standard (system) header files
#include <iostream>
#include <stdlib.h>
// Add more standard header files as required
#include <string>

using namespace std;

// Add your project's header files here
// #include "CFraction.h"

class Player{

private:
	string name;
	int health;
	int xp;

public:
	std::string getName () {return name;}
	int getHealth () {return health;}
	int getxp () {return xp;}

	//Constructor
	Player (std::string name_val = "None", int health = 0, int xp = 0);

	//Copy constructor
	Player(const Player &source); 		//Player (const Player &); is also valid

	//Destructor
	~Player () { cout << "Destructor called for: " << name << endl; }

};

Player::Player(std::string name_val, int health_val, int xp_val)
	:name{name_val}, health {health_val}, xp{xp_val}{
		cout << "Three argument constructor for " + name << endl;
	}

//Copy constructor implementation
Player::Player (const Player &source)
	:name{source.name}, health{source.health}, xp{source.xp}{
		//Instead of initialization list on Line 42, the object creation can be delegated using the constructor
		//:Player {source.name, source.health, source.xp}
		//This calls the constructor and to make the copy
		cout << "Copy constructor - made a copy of: " << source.name << endl;
	}

//Function
void dispPlayer (Player p){							//Expecting parameter by value - copy
	cout << "Name:" << p.getName() << endl;
	cout << "Health:" << p.getHealth() << endl;
	cout << "XP:" << p.getxp() << endl;				//p will be out of scope after the execution of this line - destructor for p copy will be called

}


// Main program
int main (void)
{
	//Example 1
//	Player empty;
//
//	dispPlayer(empty);								//Copy constructor is called - A copy of the empty object(object p) will be made
//													//p is a copy of the empty object

	//Example 2
	Player empty {"XXXX", 5000, 50};
	Player myNewObject {empty};						//Copy constructor is called - Creates a copy of empty object
	dispPlayer(empty);

	Player frank {"Frank"};
	Player hero {"Hero", 100};
	Player villain {"Villain", 1000, 1000};

	return 0;
}
