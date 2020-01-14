#pragma once
#include<iostream>
#include <string> 

class MyString
{
	friend std::ostream& operator<<(std::ostream& os, const MyString& rhs);
	friend std::istream& operator>>(std::istream& in, MyString& rhs);


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


	void display()const;

	int getLength() const;						//Getters
	const char* getStr()const;
};