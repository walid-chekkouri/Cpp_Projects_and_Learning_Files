#include<iostream>
#include<string>
#include"A.h"
#include"B.h"

int main()
{
	A a1(40,7);

	B b1(24, "b1");

	b1.showA(a1);
	

	system("pause");
	return 0;
}
