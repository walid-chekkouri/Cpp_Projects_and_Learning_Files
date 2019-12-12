#include<iostream>
#include<memory>
#include<vector>
#include"MyClass.h"

int main()
{
	
	{
	//	MyClass* p1 = new MyClass();//raw pointer, the destructor won't be excecuted when out of scope.
	//std::unique_ptr<MyClass> t1{ new MyClass{"char1"} };//destructor is excecuted once out of scope.
		std::unique_ptr<MyClass> t2 = std::make_unique<MyClass>("char2");//better way to create a unique pointer.
	
		std::unique_ptr<MyClass>t3;
	//	t3 = t2;//error, not allowed to initialize unique pointers nor when using copy constructor(ex vector.pusb_back(ptr))
		t3 = std::move(t2);//but we can move them.So t3 will be owning what te points to, and t2 will be a nullptr.
			if (!t2)
				std::cout << "T2 is now a  NUllptr\n";

	}

	std::vector<std::unique_ptr<MyClass>> myClasses;

	myClasses.push_back(std::make_unique<MyClass>("M1"));
	myClasses.push_back(std::make_unique<MyClass>("M2"));
	myClasses.push_back(std::make_unique<MyClass>("M3"));

	for (const auto& myC : myClasses)//make sure it's used by reference (so we won't use copy since it's not allowed with smart pointers)
		std::cout << *myC << std::endl;;


	system("pause");
	return 0;
}