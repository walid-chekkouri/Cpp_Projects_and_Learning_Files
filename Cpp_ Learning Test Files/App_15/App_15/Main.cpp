#include<iostream>

using namespace std;
//Function Overloading
void printNumber(int x)
{
	cout << "This is an Integer: " << x << endl;
}
void printNumber(float x)
{
	cout << "This is a Float: " << x << endl;
}

int main(){
	int a = 88;
	float b = 32.56;

	printNumber(a);
	printNumber(b);

	system("pause");

	return 0;
}
