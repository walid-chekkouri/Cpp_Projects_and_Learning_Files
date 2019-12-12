#include<iostream>
#include<vector>
#include"MyString.h"

using namespace std;

int main()
{
	MyString a{ "Hello" };//overloaded constructor
	a = MyString{ "Hola" };//overloaded constructor then move assignment.
	a = "Bonjour";//overloaded constructor then move assignment


	MyString b;
	b = a;//using copy assignment.

	MyString c{ "CCC" };
	MyString d = c ;//Or MyString d{a}; // uses Copy Constructor.

	system("pause");
	return 0;
}