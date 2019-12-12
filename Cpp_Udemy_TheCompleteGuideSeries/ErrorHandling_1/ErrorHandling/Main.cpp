#include<iostream>
#include<string>

using namespace std;

double division(double nb1, double nb2)
{
	if (nb2 == 0) throw "Division by 0 !";


	return nb1 / nb2;
}

int main(){

	double nb1 = 5, nb2 = 0, result;
	try
	{
		result=division(nb1, nb2);
		cout << result << endl;

	}
	catch (const char* msg)
	{
		cerr << msg << endl;
	}



	system("pause");
	return 0;
}

/*
Standard output stream (cout):  cout is the instance of the ostream class.
cout is used to produce output on the standard output device which is usually the display screen.
The data needed to be displayed on the screen is inserted in the standard output stream (cout) using the insertion operator (<<).

Un-buffered standard error stream (cerr): cerr is the standard error stream which is used to output the errors.
This is also an instance of the ostream class. As cerr is un-buffered so it is used when we need to display the error message immediately.
It does not have any buffer to store the error message and display later.

Buffered standard error stream (clog): This is also an instance of ostream class and used to display errors but unlike cerr the error is first inserted into a buffer and is stored in the buffer until it is not fully filled.
*/

/*Simple Example:

	int i = 5;
	try
	{
		if (i > 10)
		{
		cout << i << endl;
		}
		else
		{
		throw 1;
		}

	}
		catch (int x)
		{
		cerr << msg << endl;
		}

*/