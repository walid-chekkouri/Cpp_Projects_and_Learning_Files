#include <iostream>

//Functors = Functions as objects.

struct DoSomethingFunctor // a functor
{
	DoSomethingFunctor(int i, bool b, float f, double d, unsigned int u)
		: m_i(i)
		, m_b(b)
		, m_f(f)
		, m_d(d)
		, m_u(u)

	{}

	void operator()(char c) const //this is called a function call operator
	{
		//do something
		++m_count;
	}

	//member variables.
	int m_i;
	bool m_b;
	float m_f;
	double m_d;
	unsigned int m_u;
	mutable unsigned int m_count;
	/*Mutable:
	Sometimes there is requirement to modify one or more data members of class / struct through
		const function even though you don’t want the function to update other members of class / struct.
		This task can be easily performed by using mutable keyword*/
};

void DoSomething(int i, bool b, float f, double d, unsigned int u, char c)//simple function
{
	//does something
}

int main()
{

	DoSomething(8, true, 5.6, 3.2, 80, 'r');
	DoSomething(8, true, 5.6, 3.2, 80, 'b');//it's annoying to retype all the repeated args.!!
	//Instead

	DoSomethingFunctor o(8, true, 5.6, 3.2, 80);
	o('a');
	o('b');


	system("pause");
	return 0;
}
