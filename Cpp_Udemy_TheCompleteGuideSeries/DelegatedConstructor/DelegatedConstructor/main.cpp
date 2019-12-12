#include<iostream>
#include<string>
//Example of delegated constructors.


class Player
{
private:
	std::string name;
	int health;
	int xp;
public:
	//overloaded constructors
	Player();
	Player(std::string nameVal);
	Player(std::string nameVal, int healthVal, int xpVal);
};

Player::Player()
	:Player{"None", 0, 0}
{
	std::cout << "No-args constructor" << std::endl;
}

Player::Player(std::string nameVal)
	: Player{ nameVal, 0, 0 }
{
	std::cout << "One-args constructor" << std::endl;
}


Player::Player(std::string nameVal, int healthVal, int xpVal)//Note that it's better to use one constructor with default values (see default constructor project for more info)
	: name{ nameVal }, health{ healthVal }, xp{ xpVal } 
{
	std::cout << "Three-args constructor" << std::endl;
}

int main()
{

	Player frank;

	std::cout<< std::endl;

	Player bob("bob");



	system("pause");

	return 0;
}