#include<iostream> 
using namespace std;
// An abstract class, is a class with a pure function in it.
class Base
{
public:
	// currently not a pure virtual function.
	virtual void print(){ cout << "print base class" << endl; }// a pure virtual function is defined like: virtual void print()=0; See Note down below.

	void show(){ cout << "show base class" << endl; }// Not a virtual function
};

class Derived1 :public Base
{
public:
	void print(){ cout << "print derived1 class" << endl; }

	void show(){ cout << "show derived1 class" << endl; }// Not a virtual function
};

class Derived2 :public Derived1
{
public:
	void print(){ cout << "print derived2 class" << endl; }//!!! when this line id deleted, its base class (Derived1)'s function print will be used instead.

	void show(){ cout << "show derived2 class" << endl; }// Not a virtual function
};

int main()
{
	Base *bptr; Base b1;
	bptr = &b1; bptr->print();

	Derived2 d2;
	bptr = &d2;

	//virtual function, binded at runtime 
	bptr->print();

	// Non-virtual function, binded at compile time 
	bptr->show();// will show the base function instead

	Derived1 d1;
	bptr = &d1;

	bptr->print();//virtual function, binded at runtime 

	bptr->show();// will show the base function instead

	system("pause");
	return 0;
}
/*
For every derived class that inherits from the base class that includes a pure virtual function, it needs to
overwrite that function.
*/
