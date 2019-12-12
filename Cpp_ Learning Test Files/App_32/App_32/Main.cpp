#include <iostream>
using namespace std;

template <class T>

class MyClass{
public:
	MyClass(T elem1){ cout << elem1 << " is not a character!" << endl; }

};

template<>//Template Specialization

class MyClass<char>{
public:
	MyClass(char elem1){ cout << elem1 << " is indeed a character" << endl; }

};

int main(){
	

	MyClass <int> obj1(8);
	MyClass <double> obj2(8.9);

	MyClass <char> obj3('w');

	system("pause");
	return 0;
}