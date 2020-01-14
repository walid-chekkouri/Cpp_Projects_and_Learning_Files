#include<iostream>
#include<string>

class Player
{
private:
	std::string name;
	int health;
	int xp;
public:
	std::string getName()const { return name; }
	int getHealth()const { return health; }
	int getXp()const { return xp; }
	//constructor Definition
	Player(std::string nameVal = "None", int healthVal = 0, int xpVal = 0);

	//Copy Constructor Definition
	Player(const Player& source);

	//Destructor
	~Player() { std::cout << "Destructor called for: " + name << std::endl;};

};

//Constructor Implementation
Player::Player(std::string nameVal, int healthVal, int xpVal)
	:name{ nameVal }, health{ healthVal }, xp{xpVal}
{
	std::cout << "Three args constructor for: " + name << std::endl;
}

//Copy Constructor Implementation
Player::Player(const Player& source)
	:name{ source.name }, health{ source.health }, xp{source.xp}
	//:Player{source.name, source.health, source.xp}//delegated. This will call the 3 args contructor!
{
	std::cout << "Copy constructor made a copy of: " << source.name << std::endl;
}

void displayerPlayer(Player p)//pass by value thus make a copy.
{
	std::cout << "Name: " << p.getName() << std::endl;
	std::cout << "Health: " << p.getHealth() << std::endl;
	std::cout << "XP: " << p.getXp() << std::endl;
}


int main()
{
	Player empty;
	displayerPlayer(empty);

	std::cout << std::endl;


	Player maria("Maria", 100, 20);

	Player copyOfMaria{ maria };//make a copy of the object maria

	displayerPlayer(copyOfMaria);

	system("pause");
	return 0;
}

//When a copy constructor is not created then by default all attribute members will be copied, pointers will be copied but not what they point to (it's a shallow copy).
//So we end up having both the intial object and the copied object both pointing to the same area of storage in the heap, which is a problem when one of the objects
//gets destroyed (), then the other one will still be pointing to that area on the heap, it will still be refering to the released storage.