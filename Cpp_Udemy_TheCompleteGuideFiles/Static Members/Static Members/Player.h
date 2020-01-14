#pragma once
#include<string>

class Player
{
private:
	static int numPlayers;
	std::string name;
	int health, xp;

public:
	Player(std::string nameVal = "None", int healthVal=0, int xpVal = 0);
	~Player();

	static int getNumPlayers();//only has access to static member variables
	std::string getName() const { return name; }
	int getHealth() const { return health; }
	int getXp() const { return xp; }
	


};
