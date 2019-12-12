#include "MyClass.h"
#include <iostream>
using namespace std;
MyClass::MyClass()
{
	
}
MyClass::~MyClass()
{

}

MyClass::MyClass(int a, int b)
{
	nb1 = a;
	nb2 = b;
}

void MyClass::printSmth(){
	cout << " A: " << nb1<<" B: "<<nb2<<endl;
}
