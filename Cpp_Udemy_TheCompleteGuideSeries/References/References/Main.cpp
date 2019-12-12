#include<iostream>

using std::cout;

int main(){

	int nb1 = 20;
	int &ref1 = nb1;
	/*NB:
	You cannot have NULL references. You must always be able to assume that a reference is connected to a legitimate piece of storage.

	Once a reference is initialized to an object, it cannot be changed to refer to another object. Pointers can be pointed to another object at any time.

	A reference must be initialized when it is created. Pointers can be initialized at any time.
	*/


	ref1 = 30; //Whenever the value of one of those variables is changed, the other variable's value changes too.


	cout << "My Reference value: " << ref1 << std::endl;
	cout << "Number1 value: " << ref1 << std::endl;



	system("pause");
	return 0;
}