#include<iostream>
int a = 5;
double d = 45.67;
extern const int K = 100;



void f()
{
	std::cout << "F function\n";
}

int increment()
{
	static int count;//this variable is visible only isnide this scope.
	count += 1;
	return count;
}

