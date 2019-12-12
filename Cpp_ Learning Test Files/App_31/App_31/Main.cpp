#include <iostream>
using namespace std;

template <class T>

class MyClass{
	T first, second;
public:
	MyClass(T nb1, T nb2){ first = nb1; second = nb2; }
	T bigger();
	


};

template <class T> //We need it again before the declaration of a function outside the class

T MyClass<T>::bigger(){
	return (first > second ? first : second);
}


int main(){
	MyClass <int> class1(80, 40);

	cout << class1.bigger() << endl;

	system("pause");
	return 0;
}