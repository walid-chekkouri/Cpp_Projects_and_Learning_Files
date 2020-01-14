#include<iostream>
#include<string>
using namespace std;

union abc// size of a union is the size of its largest element.
{
	int a;
	char b;
};

int main()
{

	abc abc1;	abc1.a = 68;
	cout << "Address of a: " << (void*)& (abc1.a) << " Addess of b: " << (void*)& abc1.b << endl;
	cout << abc1.a << " " << abc1.b << endl;


	system("pause");
	return 0;
}