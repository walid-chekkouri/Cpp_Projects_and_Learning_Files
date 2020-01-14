#include<iostream>
using namespace std;

class Base
{
	int x;
public:
	Base() {cout << "Base Default Constructor\n";}
	// parameterized constructor
	Base(int i)
	{
		x = i;
		cout << "Base Parameterized Constructor\n";
	}
};

class Derived : public Base
{
	int y;
	int nb1, nb2;
public:

	// parameterized constructor
	Derived(int j,int nb1,int nb2) :Base(j)//by default the default base contructor is called but We can explicitly mention to call the Base class's parameterized constructor
	{
		y = j;
		this->nb1 = nb1;
		this->nb2 = nb2;
		cout << "Derived Parameterized Constructor\n";
	}
	void showVariables()
	{
		cout << "Nb1: "<<nb1<<" Nb2: "<<nb2<<"\n";
	}
};

int main()
{
	Derived d(10,20,30);

	d.showVariables();

	system("pause");
	return 0;
}