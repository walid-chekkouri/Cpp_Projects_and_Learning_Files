#include<iostream>
#include<string>
#include<vector>

class Move
{
private:
	std::string name;
	int health;
	int xp;
	int* dataPointer;
public:
	std::string getName()const { return name; }
	int getHealth()const { return health; }
	int getXp()const { return xp; }
	int getDataPointer()const { return *dataPointer; }
	void setDataPointer(int newVal) { *dataPointer = newVal; }

	//constructor Definition
	Move(int dataPointer, std::string nameVal = "None", int healthVal = 0, int xpVal = 0);

	//Copy Constructor Definition
	Move(const Move& source);

	//Move Constructor
	Move(Move&& source)noexcept;

	//Destructor
	~Move();

};


//Constructor Implementation
Move::Move(int dataPointerVal, std::string nameVal, int healthVal, int xpVal)
	:name{ nameVal }, health{ healthVal }, xp{ xpVal }
{
	dataPointer = new int;
	*dataPointer = dataPointerVal;
	std::cout << "Three args constructor for: " + name << std::endl;
}

//Deep Copy Constructor Implementation
Move::Move(const Move& source)
	:Move{ *source.dataPointer,source.name, source.health, source.xp }//delegated. This will call the 3 args contructor!
{
	std::cout << "Copy constructor made a copy of: " << source.name << std::endl;
}

Move::Move(Move&& source)noexcept
	:dataPointer{ source.dataPointer }
{
	source.dataPointer = nullptr;
	std::cout << "Move constructor-moving resource: " << *dataPointer << std::endl;

}


Move::~Move()
{
	if (dataPointer != nullptr)
	{
		std::cout << "Destructor freeing data for: " << *dataPointer << std::endl;
	}
	else
	{
		std::cout << "Destructor freeing data for nullptr" << std::endl;
	}

	delete dataPointer;//free allocated memory.

};

void displayerMove(Move p)//pass by value thus make a copy.
{
	std::cout << "Name: " << p.getName() << std::endl;
	std::cout << "Health: " << p.getHealth() << std::endl;
	std::cout << "XP: " << p.getXp() << std::endl;
	std::cout << "ShallowPointer Value pointed at: " << p.getDataPointer() << std::endl;
}


int main()
{

	std::vector<Move> vec;

	vec.push_back(Move{ 10 });//it will create a temp object that is an r-value.//no copy constructor is called once we provide a move constructor which is more efficient.

/*
	vec.push_back(Move{ 20 });
	vec.push_back(Move{ 30 });
	vec.push_back(Move{ 40 });
	vec.push_back(Move{ 50 });*/

	for(auto& i : vec)
	std::cout << i.getDataPointer() << std::endl;

	system("pause");
	return 0;
}
