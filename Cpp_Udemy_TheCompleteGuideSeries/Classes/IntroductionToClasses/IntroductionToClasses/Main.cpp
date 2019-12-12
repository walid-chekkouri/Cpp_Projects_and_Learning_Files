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

	void PrintFunction(std::string);
};

Vehicle::Vehicle()
{
	speed = 100.00f;// default value

}
Vehicle::Vehicle(float newSpeed)
{
	speed = newSpeed;

}

void Vehicle::PrintFunction(std::string message)
{

	std::cout << message << std::endl;
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
	Vehicle toyota, bmw(600.34f);

	bmw.PrintFunction(std::to_string(bmw.getSpeed()));

	bmw.setSpeed(300.30f);
	

	bmw.PrintFunction(std::to_string(bmw.getSpeed()));
	toyota.PrintFunction(std::to_string(toyota.getSpeed()));

	system("pause");
	return 0;
}