 #include<iostream> 
using namespace std;

class Base
{
public:
	virtual void print()
	{
		cout << "print base class" << endl;
	}

	 void show(){ cout << "show base class" << endl;}
};

class Derived1 :public Base
{
public:
	void print()
	{
		
		cout << "print derived1 class" << endl;
		
	}

	void show(){ cout << "show derived1 class" << endl;}
};

class Derived2 :public Derived1
{
public:
	void print()
	{
		
		cout << "print derived2 class" << endl;
		//Derived1::print(); the equivalent of Super in java (to call a base class's virtual function when it's overridden)
	}

	void show(){ cout << "show derived2 class" << endl; }
};

int main()
{
	Base *bptr;
	Derived2 d2;
	bptr = &d2;

	//virtual function, binded at runtime 
	bptr->print();

	// Non-virtual function, binded at compile time 
	bptr->show();

	Derived1 d1;
	bptr = &d1;

	bptr->print();//virtual function, binded at runtime 


	system("pause");
	return 0;
}
/*
If we have created a virtual function in the base class and it is being overridden in the derived class
then we don’t need virtual keyword in the derived class,
functions are automatically considered as virtual functions in the derived class.
*/