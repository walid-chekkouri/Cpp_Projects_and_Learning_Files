#include<iostream>
using namespace std;

class Vehicle{
protected:
	int wheelsNumber;

public:
	Vehicle();
	int getWheelsNumber();
	void setWheelsNumber(int);
};

class Car : public Vehicle{
	string carName;
public:
	Car();
	string getCarName();
	void setCarName(string);

};
////////////////Implementations//////////////
Vehicle::Vehicle(){}
int Vehicle::getWheelsNumber(){ return wheelsNumber; }
void Vehicle::setWheelsNumber(int wheelsNumber){ this->wheelsNumber = wheelsNumber; }

Car::Car(){ wheelsNumber = 4; }
string Car::getCarName(){ return carName; }
void Car::setCarName(string carName){ this->carName = carName; }

int main(){

	Vehicle v1; v1.setWheelsNumber(6);
	Car car1; car1.setCarName("bmw"); car1.setWheelsNumber(4);

	cout << v1.getWheelsNumber() << endl;
	cout << car1.getWheelsNumber() << endl;

	system("pause");
	return 0;
}

/*
/*
Public Inheritance − When deriving a class from a public base class, public members of the base class become public members of the derived class and protected members of the base class become protected members of the derived class.
A base class's private members are never accessible directly from a derived class, but can be accessed through calls to the public and protected members of the base class.

Protected Inheritance − When deriving from a protected base class, public and protected members of the base class become protected members of the derived class.

Private Inheritance − When deriving from a private base class, public and protected members of the base class become private members of the derived class.
*/
*/