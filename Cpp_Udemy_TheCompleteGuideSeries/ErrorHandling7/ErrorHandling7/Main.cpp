#include <iostream>
using namespace std;

/*
The destructors are called in reverse order of constructors.
Also, after the try block, the destructors are called only for completely constructed objects.
*/

class Test
{
	static int count;
	int id;
public:
	Test()
	{
		count++;
		id = count;
		cout << "Constructing object number " << id << endl;
		if (id == 4)
			throw 4;
		
	}
	~Test() { cout << "Destructing object number " << id << endl; }
};

int Test::count = 0;

int main() {

	try
	{
		Test array[5];
	}
	catch (int i)
	{
		cout << "Caught " << i << endl;
	}

	system("pause");
	return 0;
}

/*
In C++, a function can specify the list of exceptions that it can throw using comma separated list like following.
void fun(int a, char b) throw (Exception1, Exception2, ..)
*/