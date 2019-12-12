#include<iostream>

using namespace std;

int tuna = 20;// global variable.

int main(){

	double tuna = 40.50;
	cout << ::tuna << endl;// ::Unary Scope Resolution Operator to use global variables.


	system("pause");
	return 0;
}
