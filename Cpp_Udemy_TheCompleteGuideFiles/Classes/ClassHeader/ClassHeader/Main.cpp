#include<iostream>
#include "myClass.h"
using namespace std;

int main(){

	MyClass myClass1;
	myClass1.PrintFunction();
	myClass1.i = 90;
	myClass1.PrintFunction();

	system("pause");
	return 0;
}