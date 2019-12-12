#include <iostream> 
using namespace std;

int main()
{
	try
	{
		try
		{
			throw 20;
		}

		catch (int n)
		{
			cout << "Handle Partially \n";
			throw;   //Re-throwing an exception 
		}
	}

	catch (int n)
	{
		cout << "Handle remaining \n";
	}


	system("pause");
	return 0;
}