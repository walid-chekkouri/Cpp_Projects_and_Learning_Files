#include<iostream>
#include<vector>
#include<algorithm>
#include <iterator>
#include "MyClass.h"

using namespace std;
void fun(const MyClass* value) {
	std::cout <<*value << "\n";
}

int main()
{
	vector<MyClass*> myClasses;

	MyClass* p1 = new MyClass{ 10 };
	MyClass* p2 = new MyClass{ 20 };
	MyClass* p3 = new MyClass{ 30 };
	MyClass* p4 = new MyClass{ 40 };

	myClasses.push_back(p1);
	myClasses.push_back(p2);
	myClasses.push_back(p3);
	myClasses.push_back(p4);

	/// Range based for
	for (const auto& value : myClasses)
	{
		cout <<* value;
	}

	/// Using a for loop with iterator
	/*for (auto it = std::begin(myClasses);
		it != std::end(myClasses);
		++it)
	{
		std::cout << *(*it);
	}*/

	/// Using for_each algorithm, using a function or functor:
	/*for_each(begin(myClasses), end(myClasses), fun);*/

	/// Using for_each algorithm. Using a lambda:
	/*
	for_each(begin(myClasses), end(myClasses), [](const MyClass* value)
		{
		std::cout << *value;
		});*/

	/// Using a for loop with iterator
	/*for (std::vector<MyClass*>::iterator it = std::begin(myClasses); it != std::end(myClasses); ++it)
	{
		std::cout << *(*it);
	}*/


	/// Using a for loop with index
	/*for (std::size_t i = 0; i < myClasses.size(); ++i)
	{
		std::cout << *myClasses[i];
	}*/

	///functional based - for hidden inside std::for_each
	/*std::for_each(
		myClasses.begin(), myClasses.end(),
		[&](auto&& x) { std::cout << *x << '\n'; });*/

		///algorithm based - for hidden inside std::copy
/*
	std::copy(
		v.begin(), v.end(),
		std::ostream_iterator<int>(std::cout, "\n"));*/

	system("pause");
	return 0;
}