#include<iostream>
#include<memory>
#include<vector>
#include"MyClass.h"

//Shared Pointers Example
//Unlike unique Pointers, shared pointers can be copied and assigned.

void func(std::shared_ptr<MyClass> myP)
{
	std::cout << "Test2_ Use count: " << myP.use_count() << std::endl;
}//the pointer will be destroyed when out of scope and decrementing the use_count by 1;

int main()
{
	/*{
		std::shared_ptr<MyClass>p1{ new MyClass{"Char1"} };
	}//destructor automatically called
	std::shared_ptr<MyClass>p1{ new MyClass{"Char1"} };

	std::cout << "Use count: " << p1.use_count() << std::endl;//1 the number of pointers that share the same allocated heap memory as p1(including p1).
	
	std::shared_ptr<MyClass>p2{ p1 };//shared owenership.
	std::cout << "Use count: " << p1.use_count() << std::endl;//2*/

	std::cout << "\n=================================\n";
	std::shared_ptr<MyClass>ptr = std::make_shared<MyClass>("MyChar");//better way to initialize a pointer.
	std::cout << "Test1_ Use count " << ptr.use_count() << std::endl;
	
	func(ptr);//I will make a copy of the shared pointer object.

	std::cout << "Test3_ Use count " << ptr.use_count() << std::endl;
	
	{
		std::shared_ptr<MyClass> ptr1 = ptr;
		std::cout << "Use count: " << ptr.use_count() << std::endl;
	}
	std::cout << "Use count: " << ptr.use_count() << std::endl;

	std::cout << "\n=================================\n";
	std::shared_ptr<MyClass>myC1 = std::make_shared<MyClass>("Char1");
	std::shared_ptr<MyClass>myC2 = std::make_shared<MyClass>("Char2");
	std::shared_ptr<MyClass>myC3 = std::make_shared<MyClass>("Char3");
	std::shared_ptr<MyClass>myC4 = std::make_shared<MyClass>("Char4");

	std::vector<std::shared_ptr<MyClass>> myClasses;

	//will be making copies when pushing them into our vector.
	myClasses.push_back(myC1);
	myClasses.push_back(myC2);
	myClasses.push_back(myC3);
	myClasses.push_back(myC4);

	for (const auto& myC:myClasses)
	{
		std::cout << *myC << std::endl;
		std::cout << "Use count: " << myC.use_count() << std::endl;
	}


	system("pause");
	return 0;
}