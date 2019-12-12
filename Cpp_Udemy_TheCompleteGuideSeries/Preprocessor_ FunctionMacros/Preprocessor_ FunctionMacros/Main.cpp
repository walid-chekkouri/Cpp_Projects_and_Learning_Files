// function macro
#include <iostream>
using namespace std;

#define getmax(a,b) ((a)>(b)?(a):(b))

#define SUM(a,b,c) a + b + c

#define str(x) #x

#define glue(a,b) a ## b


int main()
{
	int x = 5, y;
	y = getmax(x, 2);
	cout << y << endl;
	cout << getmax(7, x) << endl;

	cout <<( (SUM(1, , 3)) * (SUM(1, , 3))) << endl; /* No error message.
				 1 is substituted for a, 3 is substituted for c. 
				 Use parentheses to ensure correct evaluation of replacement text
				 */
	cout << str(test)<<endl;/*
					  Function macro definitions accept two special operators (# and ##) in the replacement sequence:
						The operator #, followed by a parameter name,
						is replaced by a string literal that contains the argument passed (as if enclosed between double quotes)
					  */
	double newVar;
	glue(ci, n) >> newVar;

	glue(c, out) << newVar<<endl;
	

	system("pause");
	return 0;
}