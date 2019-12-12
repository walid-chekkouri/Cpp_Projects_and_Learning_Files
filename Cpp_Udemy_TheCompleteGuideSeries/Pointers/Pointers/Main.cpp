#include<iostream>

class MyClass
{
	int var1 = 6;
public:
	int getVar1() { return var1; }
	MyClass() {}
};


int main(){
	/*Simple example:
	int nb1 = 20;
	int *p1;
	p1 = &nb1;
	std::cout << "P: " << *p1<<std::endl;
	*/

	int *i = new int(10);
	int nb = 55;
	i = &nb;

	//Once the value of nb changes, the value of *i changes too, and vice versa.
	std::cout << "i: "<<*i << std::endl;
	*i = 30;
	std::cout << "nb: " << nb <<" i: " << *i<< std::endl;
	nb = 190;
	std::cout << "i: " << *i << " nb: " << nb << std::endl;

	MyClass myClass1;
	MyClass* myClassP = &myClass1;

	std::cout << myClassP->getVar1() << std::endl;//equivalent to std::cout << (*myClassP).getVar1() << std::endl;but this syntax is NOT used.

	

	system("pause");
	return 0;
}