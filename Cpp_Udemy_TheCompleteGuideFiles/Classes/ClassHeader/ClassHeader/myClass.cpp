#include<iostream>
#include "myClass.h"


MyClass::MyClass()
{
	i = 0;
}

void MyClass::PrintFunction()
{

	std::cout << "Printed Message: " << i <<std::endl;
}