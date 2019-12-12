#include <iostream>
using namespace std;


int main(){

	int *P;//The Pointer has the freedom to point to different variables

	int var = 7;
	int foo = 21;
	P = &var;
	P = &foo;

	cout << *P << endl;

	int & varRef = var;//whereas the reference is assigned 1 time and becomes a ref to that location in memory
	int & fooRef = foo;

	cout << "La ref de var est : " << varRef << endl;
	cout << "La ref de foo est : " << fooRef << endl;

	system("pause");


	return 0;
}