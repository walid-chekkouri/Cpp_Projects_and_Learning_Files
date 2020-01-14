#include<iostream>
#include<string>

class Deep
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
	Deep(int dataPointer, std::string nameVal = "None", int healthVal = 0, int xpVal = 0);

	//Copy Constructor Definition
	Deep(const Deep& source);

	//Destructor
	~Deep();

};


//Constructor Implementation
Deep::Deep(int dataPointerVal, std::string nameVal, int healthVal, int xpVal)
	:name{ nameVal }, health{ healthVal }, xp{ xpVal }
{
	dataPointer = new int;
	*dataPointer = dataPointerVal;
	std::cout << "Three args constructor for: " + name << std::endl;
}

//Copy Constructor Implementation Deep copying
Deep::Deep(const Deep& source)
	:Deep{*source.dataPointer,source.name, source.health, source.xp}//delegated. This will call the 3 args contructor!

	//:dataPointer{ source.dataPointer }, name{ source.name }, health{ source.health }, xp{ source.xp } but have to add this
	//line before the cout test: dataPointer = new int; *dataPointer = dataPointerVal;
{
	std::cout << "Copy constructor made a copy of: " << source.name << std::endl;
}


Deep::~Deep()
{
	delete dataPointer;//free allocated memory.
	std::cout << "Destructor called for: " + name << std::endl;
};

void displayerDeep(Deep p)//pass by value thus make a copy.
{
	std::cout << "Name: " << p.getName() << std::endl;
	std::cout << "Health: " << p.getHealth() << std::endl;
	std::cout << "XP: " << p.getXp() << std::endl;
	std::cout << "ShallowPointer Value pointed at: " << p.getDataPointer() << std::endl;
}


int main()
{
	Deep obj1(100);
	displayerDeep(obj1);


	Deep obj2(obj1);
	obj2.setDataPointer(200);

	displayerDeep(obj2);


	//both obj1 and obj2 have pointers pointing to different memory areas now.


	system("pause");
	return 0;
}
