#pragma once
#include<iostream>

class MyClass
{
	int myInt;
	friend std::ostream& operator<<(std::ostream& os, const MyClass& obj);
public:
	MyClass(int myIntVal = 0);

};

