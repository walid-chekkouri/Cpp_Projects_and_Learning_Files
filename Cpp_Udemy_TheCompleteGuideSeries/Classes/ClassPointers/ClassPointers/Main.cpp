#include<iostream>

class Vehicle{
	float speed;
	float age;
public:
	Vehicle();
	Vehicle(float, float);

	void setSpeed(float);
	float getSpeed();

};

Vehicle::Vehicle(){}
Vehicle::Vehicle(float speedTemp, float ageTemp)
{
	speed = speedTemp; age = ageTemp;
}

float Vehicle::getSpeed()
{
	return speed;
}
void Vehicle::setSpeed(float speedTemp)
{
	speed = speedTemp;
}

int main()
{

	Vehicle bmw(400.45f, 20.5f);
	Vehicle *bmwP = &bmw;

	bmwP->setSpeed(200.3f);

	std::cout << bmwP->getSpeed() << std::endl;

	system("pause");
	return 0;
}