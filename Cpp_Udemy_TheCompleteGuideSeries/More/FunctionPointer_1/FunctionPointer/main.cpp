#include<iostream>
#include<string>
using namespace std;

int addition(int a, int b)
{
	return a + b;
}


int main()
{

	cout << "second: " << "hello"[1] << endl;

	char name[5];       //declaring string 'name'
	cin.getline(name, sizeof(name)); //taking string input
	cout << name << endl; //printing string


	int (*ptr)(int, int) = addition;
	int res;

	res = ptr(10, 20);

	cout << "Addition: " << res << endl;

	system("pause");
	return 0;
}