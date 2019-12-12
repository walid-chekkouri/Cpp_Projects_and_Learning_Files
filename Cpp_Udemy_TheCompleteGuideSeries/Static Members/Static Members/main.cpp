#include<iostream>
#include"Player.h"

void displayPlayerCount()
{
	std::cout << "Active players: " << Player::getNumPlayers() << std::endl;
}


int main()
{
	displayPlayerCount();
	Player p1,p2;//add 2 new players

	{
		Player p3, p4;   //add 2 new players
	}					//destroy p3,p4.


	displayPlayerCount();

	system("pause");
	return 0;
}