#include<iostream>
#include<vector>
#include"MyString.h"

using namespace std;

int main()
{
	MyString a{ "Hello" };
	MyString b;

	b = a;//copy assignment called

	b = "This is a test";//copy assignment called



	system("pause");
	return 0;
}