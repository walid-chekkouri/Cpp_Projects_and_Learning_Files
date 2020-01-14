#include <iostream>
#include <exception>
using namespace std;
//You can define your own exceptions by inheriting and overriding exception class functionality.
struct MyException : public exception
{
	const char * what() const throw ()
	{
		return "C++ Exception";
	}
};

int main()
{
	try
	{
		throw MyException();
	}

	catch (MyException& e)
	{
		std::cout << "MyException caught: " << std::endl;
		std::cout << e.what() << std::endl;
	}

	catch (std::exception& e)
	{
		//Other errors
	}

	system("pause");
	return 0;
}