#include<iostream>
using namespace std;

typedef int (*operationPtr)(int, int);//using struct to organize.

int add(int a, int b) { return a + b; }
int mult(int a, int b) { return a * b; }

//int doOperation(int (*op)(int,int), int x,int y)
int doOperation(operationPtr op, int x, int y)
{
	return op(x, y);
}



int main()
{
	int additionResult = doOperation(add, 5, 10);
	int multiplicationResult = doOperation(mult, 4, 6);

	cout << "Addition: " << additionResult << endl;
	cout << "Multiplication: " << multiplicationResult << endl;

	system("pause");
	return 0;
}