#include "MyClass.h"
#include <iostream>

using namespace std;
MyClass::MyClass()
{
	cout << "I am the constructor" << endl;
}

void MyClass::printSmth()
{
	cout << "Good evening" << endl;
}
MyClass::~MyClass()// deconstructor never has parameters nor values to return.
{
	cout << "I am dead now" << endl;
}