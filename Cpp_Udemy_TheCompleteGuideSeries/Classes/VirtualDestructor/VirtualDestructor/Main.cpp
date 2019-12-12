#include<iostream> 
using namespace std;
//This is an abstract class.An abstract class is a class that is designed to be specifically used as a base class.
class Base {
public:
	Base()
	{
		cout << "Constructing base \n";
	}
	virtual ~Base() = 0;
};

Base::~Base()
{
	cout << "Destructing base \n";
	//Pure Virtual Destructors are legal in C++.
	//Also, pure virtual Destructors must be defined, which is against the pure virtual behaviour.
}

class Derived : public Base {
public:
	Derived()
	{
		cout << "Constructing derived \n";
	}
	~Derived()
	{
		cout << "Destructing derived \n";
	}
};

int main(void)
{

	Base *dPtr =new Derived();
	delete dPtr;
	
	system("pause");
	return 0;
}
/*
Deleting a derived class object using a pointer to a base class that has a non-virtual destructor results in undefined behavior.
To correct this situation, the base class should be defined with a virtual destructor.

Making base class destructor virtual guarantees that the object of derived class is destructed properly,
i.e., both base class and derived class destructors are called (in this order).

!!! NB: virtual constructor is not possible
*/