#include<iostream>
//Dynamic Polymorphism example
class Animal
{
public:
	virtual void MakeNoise()
	{
		std::cout << "Animal Making Noise! \n";
	}

};

class Cat : public Animal
{
public:
	void MakeNoise() override
	{
		std::cout << "Meoaw! \n";
	}

};

class Dog : public Animal
{
public:
	void MakeNoise()override
	{
		std::cout << "Woof! \n";
	}

};
int main()
{
	//It's necessary to use pointers in dynamic polymorphism
	Cat cat;
	Dog dog;

	Animal* animals[] = { &cat,&dog };
	animals[0]->MakeNoise();
	animals[1]->MakeNoise();

	system("pause");
	return 0;
}