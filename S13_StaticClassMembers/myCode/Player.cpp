/*
 * Player.cpp
 *
 *  Created on: 19-Feb-2022
 *      Author: Aditi Prakash
 */
#include <iostream>

#include "Player.h"

int Player::num_players {0};

Player::Player(std::string name, int health, int xp)
	:name{name}, health{health}, xp{xp}
{
	++num_players;
}

void Player::displayPlayers (const Player &p)
{
	std::cout << "Name: " << name << " Health: " << health << " xp: " << xp << std::endl;
}

Player::~Player()
{
	--num_players;
}

