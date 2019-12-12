#include<iostream>

class Vehicle{

public:
	Vehicle();
	~Vehicle();

	int*pointer;
};

Vehicle::Vehicle()
{
	pointer = new int();
	std::cout << "Object Created" << std::endl;
}

Vehicle::~Vehicle()
{
	delete pointer;
	std::cout << "Object Destroyed" << std::endl;
}

int main(){

	Vehicle v1;
	*v1.pointer = 40;

	v1.~Vehicle();

	system("pause");
	return 0;
}