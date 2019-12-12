#include <iostream> 
#include <string> 

using namespace std;

extern int a;
extern double d;

extern void f();//keyword extern is redundant here.

extern const int K;//extern is required because const variables have internal linkage by default.
extern int increment();
// Driver code 
int main()
{


	cout << a << endl;
	cout << d << endl;

	f();

	cout << K << endl;
	for (unsigned int i = 0; i < 3; ++i)
	{
		cout << "Incrementing count: "<< increment() << endl;
	}
	

	
	

	system("pause");
	return 0;
}