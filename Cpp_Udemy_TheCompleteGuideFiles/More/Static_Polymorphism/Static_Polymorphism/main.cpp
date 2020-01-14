#include<iostream>

class Animal
{
public:
	void MakeNoise()
	{
		std::cout << "Animal Making Noise! \n";
	}

};

class Cat: public Animal
{
public:
	void MakeNoise()
	{
		std::cout << "Meoaw! \n";
	}

};

class Dog : public Animal
{
public:
	void MakeNoise()
	{
		std::cout << "Woof! \n";
	}

};
int main()
{
	Cat cat;
	Dog dog;
	cat.MakeNoise();
	dog.MakeNoise();


	/*See Dynamic Polymorphism example
	Cat cat;
	Dog dog;
	Animal animals[] = { cat,dog };
	animals[0].MakeNoise();
	animals[1].MakeNoise();*/

	system("pause");
	return 0;
}