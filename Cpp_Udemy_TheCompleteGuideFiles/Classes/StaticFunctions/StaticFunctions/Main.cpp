#include<iostream>

class Vehicle
{
	float age, speed;
public:
	Vehicle();
	Vehicle(float, float);
	static int multiplicationFunction(int, int);
};

int Vehicle::multiplicationFunction(int nb1, int nb2)
{
/*	std::cout << Vehicle::age << std::endl; !!// Static function of a class in C++ cannot access non-static variables,
	but, it can access static variable only.
	However, non-static member function can access static and non-static variable both*/
	return nb1*nb2;
}

Vehicle::Vehicle(){}
Vehicle::Vehicle(float age, float speed)
{
	this->age = age; this->speed = speed;
}




int main(){
	
	std::cout << Vehicle::multiplicationFunction(4, 5)<<std::endl;


	system("pause");
	return 0;
}