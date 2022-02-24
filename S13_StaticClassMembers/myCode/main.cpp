// Standard (system) header files
#include <iostream>
#include <cstdlib>

using namespace std;

#include "Player.h"


void display_active_players()
{
	cout << "Active Players: " << Player::getNumPlayers() << endl;
}

// Main program
int main ()
{
	display_active_players();

	Player p1 {"Player1"};
	display_active_players();

	{
		Player p2 {"Player2", 100, 50};
		display_active_players();
	}
	display_active_players();

	Player *p3 = new Player{"Player3", 100, 80};
	display_active_players();
	delete p3;

	display_active_players();

	return 0;
}
