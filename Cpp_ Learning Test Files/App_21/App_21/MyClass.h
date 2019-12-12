#ifndef MYCLASS_H
#define MYCLASS_H

class MyClass
{
public:
	MyClass(int a, int b);

	~MyClass();
	void printSmth();
	void printSmth2()const;//constant function
	void print();
private:
	int regVar;
	const int constVar;
};

#endif