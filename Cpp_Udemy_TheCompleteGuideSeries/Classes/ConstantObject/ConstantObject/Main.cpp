#include<iostream>

class Vehicle{

public:
	float speed;
	float age;
	Vehicle(float, float);
	void changeSpeed(float);

};

Vehicle::Vehicle(float speed, float age)
{
	this->speed = speed; this->age = age;
}

void Vehicle::changeSpeed(float speed)
{
	this->speed = speed;

}

int main(){

	const Vehicle bmw(300.4f, 15.4f);

	std::cout << bmw.age << std::endl;
	//bmw.changeSpeed(400); //We can't assign to a variable that is constant.

	//bmw.age = 20.4f; // a constant object can't have its attributs changed.

	
	system("pause");
	return 0;
}