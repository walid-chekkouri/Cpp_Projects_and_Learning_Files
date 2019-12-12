#include<iostream> 
using namespace std;

//A derived class exception should be caught before a base class exception.

class Base {};
class Derived : public Base {};

int main()
{
	Derived d;
	// some other stuff 
	try
	{
		// Some monitored code 
		throw d;
	}

	catch (Derived d)
	{  //This catch block is NEVER executed 
		cout << "Caught Derived Exception \n";
	}

	catch (Base b)
	{
		cout << "Caught Base Exception \n";
	}
	
	

	system("pause");
	return 0;
}