/*
 * Player.h
 *
 *  Created on: 19-Feb-2022
 *      Author: Aditi Prakash
 */

#ifndef PLAYER_H_
#define PLAYER_H_

#include <string>

class Player
{
private:
	static int num_players;

	std::string name;
	int health;
	int xp;

public:

	Player(std::string name = "None", int health = 0, int xp = 0);

	int getHealth() const
	{
		return health;
	}

	void setHealth(int health)
	{
		this->health = health;
	}

	const std::string& getName() const
	{
		return name;
	}

	void setName(const std::string &name)
	{
		this->name = name;
	}

	static int getNumPlayers()
	{
		return num_players;
	}

	int getXp() const
	{
		return xp;
	}

	void setXp(int xp)
	{
		this->xp = xp;
	}

	void displayPlayers(const Player &p);

	~Player();

};

#endif /* PLAYER_H_ */
