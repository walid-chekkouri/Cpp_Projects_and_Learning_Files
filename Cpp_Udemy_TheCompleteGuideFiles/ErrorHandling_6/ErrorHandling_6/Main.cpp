#include <iostream>
using namespace std;

int main()
{
	try
	{
		throw 10;
	}
	
	catch (int param)
	{
		cout << "int exceptionn";
	}
//It is compiler error to put catch all block before any other catch. The catch(...) must be the last catch block.
	catch (...)
	{
		cout << "default exceptionn";
	}


	system("pause");
	return 0;
}