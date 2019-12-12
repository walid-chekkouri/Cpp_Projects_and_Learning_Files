#pragma once
#include<iostream>
#include <string> 

class MyString
{
	friend bool operator==(const MyString& lhs, const MyString& rhs);
	friend MyString operator-(const MyString& obj);
	friend MyString operator+(const MyString& lhs, const MyString& rhs);
private:
	char* str;

public:
	MyString();									//No-Args Constructor
	MyString(const char* s);					//Overloaded Constructor
	MyString(const MyString& source);			//Copy Constructor
	MyString(MyString&& source)noexcept;		//Move Constructor
	~MyString();								//Destructor

	MyString& operator=(const MyString& rhs);	//Copy Assignment
	MyString& operator=(MyString&& rhs);		//Move Assignment

	//Overloading operators as non member functions(global functions)



	void display()const;

	int getLength() const;						//Getters
	const char* getStr()const;
};