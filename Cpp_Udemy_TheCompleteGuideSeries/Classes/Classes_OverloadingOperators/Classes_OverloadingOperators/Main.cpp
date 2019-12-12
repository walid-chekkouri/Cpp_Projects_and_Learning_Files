#include<iostream>

class Vehicle{
	float speed;
	float age;
public:
	
	Vehicle();
	Vehicle(float, float);
	Vehicle operator +(const Vehicle &parameter); // it returns a Vehicle object.

	void setSpeed(float);
	float getSpeed();
	void setAge(float);
	float getAge();

};

Vehicle::Vehicle()
{
	speed = 40.5f; age = 2.0f;
}
Vehicle::Vehicle(float speed, float age)
{
	this->speed = speed; this->age = age;
}

Vehicle Vehicle::operator +(const Vehicle &parameter)
{
	Vehicle tempVehicule;
	tempVehicule.speed=(speed + parameter.speed);
	tempVehicule.age=(age + parameter.age);
	return tempVehicule;

}

float Vehicle::getSpeed()
{
	return speed;
}
void Vehicle::setSpeed(float speed)
{
	this->speed = speed;
}

float Vehicle::getAge()
{
	return age;
}
void Vehicle::setAge(float age)
{
	this->age = age;
}

int main()
{

	Vehicle bmw1(400.42f, 20.5f);
	Vehicle bmw2(30.95f, 3.5f);

	Vehicle superBmw = bmw1 + bmw2;
	
	std::cout << superBmw.getSpeed() << " | "<<superBmw.getAge() <<std::endl;

	system("pause");
	return 0;
}