#include<iostream>
#include<string>

class Vehicle
{
	float speed;
public:
	Vehicle();
	Vehicle(float);

	float getSpeed();
	void setSpeed(float);

	static int counter;

	
};

int Vehicle::counter = 0;


Vehicle::Vehicle()
{
	speed = 100.00f;// default value
	counter++;

}
Vehicle::Vehicle(float newSpeed)
{
	speed = newSpeed;
	counter++;
}


float Vehicle::getSpeed()
{
	return speed;
}
void Vehicle::setSpeed(float newSpeed)
{
	speed = newSpeed;
}


int main()
{
	Vehicle toyota;
	std::cout << Vehicle::counter << std::endl;

	Vehicle bmw(600.34f);
	std::cout << Vehicle::counter << std::endl;

	

	system("pause");
	return 0;
}