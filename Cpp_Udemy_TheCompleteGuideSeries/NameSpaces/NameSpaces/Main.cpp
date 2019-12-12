#include<iostream>
/*
Namespaces are used to organize code into logical groups and to prevent name collisions that can occur
especially when your code base includes multiple libraries
*/



namespace numbers1
{
	int i1 = 10;
	float f1 = 10.10f;
	void Function1()
	{
		std::cout << "Namespace 1: " << i1<<std::endl;
	}
}

namespace numbers2
{
	int i1 = 20;
	float f1 = 20.20f;
	void Function1()
	{
		std::cout << "Namespace 2: " << i1<<std::endl;
	}
}

/* We can specify Using Namespace (namespaceName) too.
but be careful, you might be writing some code that has a function called xyz() and there is another library
available which is also having same function xyz().
*/

int main(){

	numbers1::i1 = 100; numbers1::f1 = 100.1f; numbers1::Function1();
	numbers2::i1 = 200; numbers2::f1 = 200.2f; numbers2::Function1();

	std::cout << numbers1::f1 << std::endl;
	std::cout << numbers2::f1 << std::endl;


	system("pause");
	return 0;
}