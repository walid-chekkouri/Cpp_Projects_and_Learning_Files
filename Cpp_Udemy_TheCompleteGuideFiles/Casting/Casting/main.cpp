#include<iostream>



int main()
{

	int totalAmount = 100;
	int totalNumber = 8;
	double average = 0.0;


	//the following is the C casting notation (recommanded to not use it) average =(double) totalAmount / totalNumber;


	average = static_cast<double>(totalAmount) / totalNumber;
	//static_cast performs no runtime checks. This should be used if you know that you refer to an object of a specific type,
	//and thus a check would be unnecessary




	std::cout << average << std::endl;

	system("pause");
	return 0;
}




/*
dynamic_cast
This one is only used to convert object pointers and object references into other pointer or reference types in the inheritance hierarchy.
It is the only cast that makes sure that the object pointed to can be converted, by performing a run-time check that the pointer refers to a complete object of the destination type

dynamic_cast is useful when you don't know what the dynamic type of the object is.
It returns a null pointer if the object referred to doesn't contain the type casted to as a base class (when you cast to a reference,
a bad_cast exception is thrown in that case).

if (JumpStm *j = dynamic_cast<JumpStm*>(&stm)) {
  ...
} else if (ExprStm *e = dynamic_cast<ExprStm*>(&stm)) {
  ...
}
You cannot use dynamic_cast if you downcast (cast to a derived class) and the argument type is not polymorphic.
For example, the following code is not valid, because Base doesn't contain any virtual function:

struct Base { };
struct Derived : Base { };
int main() {
  Derived d; Base *b = &d;
  dynamic_cast<Derived*>(b); // Invalid
}
*/
