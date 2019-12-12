#define _CRT_SECURE_NO_WARNINGS
#include<cstring>
#include<iostream>
#include"MyClass.h"

//No-args constructor
MyClass::MyClass()
	:str{ nullptr }
{

	str = new char[1];
	*str = '\0';
	std::cout << "Constructor, char is: " << str << "\n";
}

//Overloaded Constructor
MyClass::MyClass(const char* s)
	:str{ nullptr }
{

	if (s == nullptr)
	{
		str = new char[1];
		*str = '\0';
	}
	else
	{
		str = new char[std::strlen(s) + 1];
		strcpy(str, s);


	}
	std::cout << "Constructor, char is: " << str << "\n";
}
//Copy Constructor
MyClass::MyClass(const MyClass& source)
	:str{ nullptr }
{
	str = new char[std::strlen(source.str) + 1];
	strcpy(str, source.str);
	std::cout << "Copy Constructor" << str << "\n";
}

//Move Constructor
MyClass::MyClass(MyClass&& source)
	:str{ source.str }
{
	source.str = nullptr;
	std::cout << "Move constructor used " << std::endl;

}


//Copy Assignment| This works with l-value references. by default if a move assigment operator is not overloaded then this copy assignment is used.
MyClass& MyClass::operator=(const MyClass& rhs)//copy the right hand side object to the left hand side object.
{
	std::cout << "Copy Assignment" << std::endl;
	if (this == &rhs)//Is it the same object (comparing their addresses)
		return *this;//return a reference.

	delete[] str;
	str = new char[std::strlen(rhs.str) + 1];
	std::strcpy(this->str, rhs.str);
	return *this;


}

//Move Assignment
MyClass& MyClass::operator=(MyClass&& rhs)
{
	std::cout << "Using move assignment" << std::endl;

	if (this == &rhs)
		return *this;

	delete[]str;
	str = rhs.str;
	rhs.str = nullptr;
	return *this;

}


//Overloaded Insertion Operator
std::ostream& operator<<(std::ostream& os, const MyClass& rhs)
{
	os << rhs.str;
	return os;

}

//Overloading Extraction Operator
std::istream& operator>>(std::istream& in, MyClass& rhs)
{
	char* buff = new char[1000];
	in >> buff;
	rhs = MyClass{ buff };//we have to have copy/move assignment.
	delete[] buff;
	return in;
}

void MyClass::display()const
{
	std::cout << "MyString1 display" << std::endl;
}


//Getters
int MyClass::getLength() const { return std::strlen(str); }
const char* MyClass::getStr()const { return str; }


MyClass::~MyClass()
{
	std::cout << "Destructor\n";
	delete[]str;
}
