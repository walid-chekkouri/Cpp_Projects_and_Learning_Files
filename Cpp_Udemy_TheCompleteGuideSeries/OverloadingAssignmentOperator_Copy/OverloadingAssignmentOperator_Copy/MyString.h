#pragma once

class MyString
{
private:
	char* str;

public:
	MyString();									//No-Args Constructor
	MyString(const char* s);					//Overloaded Constructor
	MyString(const MyString& source);			//Copy Constructor
	~MyString();								//Destructor

	MyString& operator=(const MyString& rhs);	//Copy Assignment

	void display()const;

	int getLength() const;						//Getters
	const char* getStr()const;
};