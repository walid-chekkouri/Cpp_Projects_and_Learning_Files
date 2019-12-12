#include <iostream>
#include "MyClass.h"
using namespace std;

int main(){
	// declaring const variables
	const int var = 5;
	int const var2 = 7;
	//constant object
	const MyClass class1(5,400);
	class1.printSmth2();// works only with constant functions.

	MyClass classy(8,900);
	classy.print();

	
	system("pause");
	return 0;
}