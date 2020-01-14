#pragma once
#include<iostream>
#include <string> 

class MyString
{
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


	MyString operator-()const;						//Make lowerCase
	MyString operator+(const MyString& rhs)const;	//Concatenate
	bool operator==(const MyString& rhs)const;		//Comparison

	void display()const;

	int getLength() const;						//Getters
	const char* getStr()const;
};