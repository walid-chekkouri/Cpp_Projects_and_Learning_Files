#include<iostream>
#include<string>

struct Student
{
	std::string name;
	int age;

	Student(std::string n, int a) //parameterized constructor.
	{
		name = n; age = a;
	}

	Student() //default constructor
	{
	
	}

	void PrintInfo()
	{
		std::cout << "Name: " << name << " Age: " << age << std::endl;
	}

};



int main(){
	Student ali;
	Student john("John", 23);

	ali.name = "Ali"; ali.age = 19;

	ali.PrintInfo(); john.PrintInfo();
	/*
	In C++ the only difference between a class and a struct is that members and base classes are private by default in classes,
	whereas they are public by default in structs.
	*/


	system("pause");
	return 0;
}