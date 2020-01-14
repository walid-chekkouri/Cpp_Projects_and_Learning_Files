#include<iostream>

class Foo
{
public:
	explicit Foo(int x) : m_x(x)
	{
	}
	void showVar() { std::cout << "Value: " << m_x << "\n"; }

private:
	int m_x;
};

int main()
{
	
	//Foo obj1 = 10;//Since we used explicit, we can't now use this way of initializing our object.
	//obj1.showVar();

	Foo obj2 = (Foo)10;//we have to typecast it now.
	obj2.showVar();

	system("pause");
	return 0;
}