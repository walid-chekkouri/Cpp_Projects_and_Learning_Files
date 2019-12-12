#include "MyClass.h"
#include <iostream>
using namespace std;
MyClass::MyClass(int a, int b)
	: regVar(a), constVar(b) // assigning the values to our variables.

{
	
}
void MyClass::printSmth(){
	cout << "I am a regular function" << endl;
}
MyClass::~MyClass(){

}
//constant function
void MyClass::printSmth2() const{
	cout << "I am a constant function" << endl;
}

void MyClass::print()
{
	cout << "regular variable is: " << regVar << " Constant variable is: " << constVar << endl;
}