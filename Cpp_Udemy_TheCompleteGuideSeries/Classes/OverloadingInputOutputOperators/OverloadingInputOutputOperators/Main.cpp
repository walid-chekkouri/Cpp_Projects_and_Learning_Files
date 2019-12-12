#include<iostream>

class Vehicle
{
	float age, speed;
public:
	Vehicle();
	Vehicle(float, float);

	friend std::ostream & operator << (std::ostream &out, const Vehicle &v);
	friend std::istream & operator >> (std::istream &in, Vehicle &v);

};

Vehicle::Vehicle(){}
Vehicle::Vehicle(float age, float speed)
{
	this->age = age; this->speed = speed;
}


std::ostream & operator << (std::ostream &out, const Vehicle &v)
{
	out << "Age: "<<v.age;
	out << " Speed: " << v.speed << std::endl;
	return out;
}

std::istream & operator >> (std::istream &in, Vehicle &v)
{
	std::cout << "Enter Age Part ";
	in >> v.age;
	std::cout << "Enter Speed Part ";
	in >> v.speed;
	return in;
}


int main(){
	Vehicle toyota(400.40f, 4.0f);
	Vehicle bmw(600.60f, 6.0f);


	std::cout << toyota << std::endl;

	std::cin >> bmw;
	std::cout << bmw << std::endl;


	system("pause");
	return 0;
}