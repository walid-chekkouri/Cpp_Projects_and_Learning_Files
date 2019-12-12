#include<iostream>
#include<string>

//Example of default constructor parameter values.

class Player
{
private:
	std::string name;
	int health;
	int xp;
public:
	Player(std::string nameVal="None", int healthVal=0, int xpVal=0);//constructor with default param values.
	void showVals();
};

Player::Player(std::string nameVal, int healthVal, int xpVal)//Note that it's better to use one constructor with default values (see default constructor project for more info)
	: name{ nameVal }, health{ healthVal }, xp{ xpVal }
{
	std::cout << "Three-args constructor" << std::endl;
}

void Player::showVals()
{
	std::cout <<"Name: "<<name<< " Health: " << health << " Xp: " << xp << std::endl;
}


int main()
{
	Player frank;
	frank.showVals();

	std::cout << std::endl;

	Player bob("bob");

	bob.showVals();

	Player jerry("jerry",400);

	jerry.showVals();

	system("pause");

	return 0;
}