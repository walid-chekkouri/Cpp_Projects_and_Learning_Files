#include "MyClass.h"
#include <iostream>

using namespace std;
class MySecondClass
{
public:
	void printThat(){ cout << "Woooo" << endl; }
};
int main(){
	MyClass class1;
	MyClass *class1P = &class1;
	MySecondClass class2;
	MySecondClass *class2P = &class2;

	class1P->printSmth();
	class2P->printThat();

	delete class1P;// needs a pointer.

	system("pause");
	return 0;
	
}
