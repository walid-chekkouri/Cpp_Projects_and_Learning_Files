#include<iostream>

class Cat{

public:
	Cat(); 
	int nb1;
	char c1;
	Cat(const Cat &copyCat):nb1(copyCat.nb1 * 10), c1(copyCat.c1){}; //Copy Constructor
	//Cat(const Cat &copyCat) { nb1 = copyCat.nb1 *10; c1 = copyCat.c1; } //An other way to create a Copy Constructor

};

Cat::Cat()
	:nb1(5), c1('N') //Default values
{
	
}

int main(){

	Cat cOriginal;
	cOriginal.nb1 = 30;

	Cat copyCat(cOriginal);

	std::cout << copyCat.nb1 << std::endl;
	std::cout << copyCat.c1 << std::endl;

	system("pause");
	return 0;
}