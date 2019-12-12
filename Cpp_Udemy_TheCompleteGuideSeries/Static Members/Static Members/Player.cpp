#include"Player.h"

int Player::numPlayers{ 0 };

Player::Player(std::string nameVal, int healthVal, int xpVal)
	:name{ nameVal }, health{ healthVal }, xp{xpVal}
{
	++numPlayers;
}

int Player::getNumPlayers() //only has access to static member variables
{
	return numPlayers;
}

Player::~Player()
{
	--numPlayers;
}