#include<iostream>
#include<string>

class Shallow
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
	Shallow(int dataPointer, std::string nameVal = "None", int healthVal = 0, int xpVal = 0);

	//Copy Constructor Definition
	Shallow(const Shallow& source);

	//Destructor
	~Shallow();

};


//Constructor Implementation
Shallow::Shallow(int dataPointerVal, std::string nameVal, int healthVal, int xpVal)
	:name{ nameVal }, health{ healthVal }, xp{ xpVal }
{
	dataPointer = new int;
	*dataPointer = dataPointerVal;
	std::cout << "Three args constructor for: " + name << std::endl;
}

//Copy Constructor Implementation
Shallow::Shallow(const Shallow& source)
	:dataPointer{ source.dataPointer }, name{ source.name }, health{ source.health }, xp{ source.xp }
	//:Shallow{aource.dataPointer,source.name, source.health, source.xp}//delegated. This will call the 3 args contructor!
{
	std::cout << "Copy constructor made a copy of: " << source.name << std::endl;
}


Shallow::~Shallow()
{
	delete dataPointer;//free allocated memory.
	std::cout << "Destructor called for: " + name << std::endl;
};

void displayerShallow(Shallow p)//pass by value thus make a copy.
{
	std::cout << "Name: " << p.getName() << std::endl;
	std::cout << "Health: " << p.getHealth() << std::endl;
	std::cout << "XP: " << p.getXp() << std::endl;
	std::cout << "ShallowPointer Value pointed at: " << p.getDataPointer() << std::endl;
}


int main()
{
	Shallow obj1(100);
	displayerShallow(obj1);
	

	Shallow obj2(obj1);
	obj2.setDataPointer(200);

	//both obj1 and obj2 have pointers pointing to the same memory area in the heap which is a problem.
	

	system("pause");
	return 0;
}

//When a copy constructor is not created then by default all attribute members will be copied, pointers will be copied but not what they point to (it's a shallow copy).
//So we end up having both the intial object and the copied object both pointing to the same area of storage in the heap, which is a problem when one of the objects
//gets destroyed (), then the other one will still be pointing to that area on the heap, it will still be refering to the released storage.