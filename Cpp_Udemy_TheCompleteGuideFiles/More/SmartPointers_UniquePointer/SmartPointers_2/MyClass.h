#pragma once
#include<iostream>
#include <string> 

class MyClass
{
	friend std::ostream& operator<<(std::ostream& os, const MyClass& rhs);
	friend std::istream& operator>>(std::istream& in, MyClass& rhs);


private:
	char* str;

public:
	MyClass();									//No-Args Constructor
	MyClass(const char* s);					//Overloaded Constructor
	MyClass(const MyClass& source);			//Copy Constructor
	MyClass(MyClass&& source);	//Move Constructor
	virtual ~MyClass();								//Destructor

	MyClass& operator=(const MyClass& rhs);	//Copy Assignment
	MyClass& operator=(MyClass&& rhs);		//Move Assignment


	virtual void display()const;

	virtual int getLength() const;						//Getters
	virtual const char* getStr()const;
};