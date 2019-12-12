#include <string>
#include <iostream>
using namespace std;

class Cat{
private:
	int n;
	int age;
	string name;
	void Meow();
public:
	int GetAge();
	string GetName();
	void Introduce();
	Cat(string na, int ag);
	Cat();
	int getN(){ return n; };//We can do it like this in one line.
};