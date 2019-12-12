#include<iostream>


class Base
{
public:
	virtual void foo();
	Base();
};

void Base::foo()
{
	std::cout << "Base Class Function \n";

}
Base::Base() { std::cout << "Base Class Constructed \n"; };

class Derived : public Base
{
public:
	void foo() override; // OK: Derived::foo overrides Base::foo
	Derived();
};
Derived::Derived() { std::cout << "Derived Class Constructed \n"; };

void Derived::foo()
{
	std::cout << "Derived Class Function \n";

}

int main()
{
	//Base b1; b1.foo();

	//Derived d1; d1.foo();


	//with pointers
	Base b1;
	Derived d1;

	Base* myPtr = &b1;
	myPtr->foo();

	myPtr = &d1;
	myPtr->foo();

	system("pause");
	return 0;
}