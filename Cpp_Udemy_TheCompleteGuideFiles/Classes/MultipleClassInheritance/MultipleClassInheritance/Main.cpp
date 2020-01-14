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

class ExtraParts{

protected:
	bool hasPartA;
	bool hasPartB;
public:
	void setHasPartA(bool);
	bool getHasPartA();
	void setHasPartB(bool);
	bool getHasPartB();
};

class Car : public Vehicle, public ExtraParts{
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

void ExtraParts::setHasPartA(bool hasPartA){ this->hasPartA = hasPartA; }
void ExtraParts::setHasPartB(bool hasPartB){ this->hasPartB = hasPartB; }
bool ExtraParts::getHasPartA(){ return hasPartA; }
bool ExtraParts::getHasPartB(){ return hasPartB; }

int main(){

	Vehicle v1; v1.setWheelsNumber(6);
	Car car1; car1.setCarName("bmw"); car1.setWheelsNumber(4); car1.setHasPartA(true); car1.setHasPartB(false);

	cout << v1.getWheelsNumber() << endl;
	cout << car1.getWheelsNumber() << " PartA: " << (car1.getHasPartA() ? "true" : "false") << "| PartB: " << (car1.getHasPartB() ? "true" : "false") << endl;
	

	system("pause");
	return 0;
}

/*
/*
Public Inheritance − When deriving a class from a public base class, public members of the base class become public members of the derived class and protected members of the base class become protected members of the derived class.
A base class's private members are never accessible directly from a derived class, but can be accessed through calls to the public and protected members of the base class.

Protected Inheritance − When deriving from a protected base class, public and protected members of the base class become protected members of the derived class.

Private Inheritance − When deriving from a private base class, public and protected members of the base class become private members of the derived class.

PS:class A : public B, public C ;
In this case, first class B constructor will be executed, then class C constructor and then class A constructor.
*/
