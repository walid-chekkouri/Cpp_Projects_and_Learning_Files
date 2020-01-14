#include<iostream>

template <class myGenericType> //Creation of a generic type


/*This allows us to create a function template whose functionality can be adapted to more than one type
or class without repeating the entire code for each type.
*/
myGenericType MultiplicationFunction(myGenericType x, myGenericType y)
{
	return x * y;
}

template <class myGenericType>//Important to add this line before any new function.
myGenericType AdditionFunction(myGenericType x, myGenericType y)
{
	return x + y;
}

int main(){
	//One function to rule them all !

	std::cout << "Float multiplication: " << MultiplicationFunction(5.2f, 6.4f) << std::endl;
	std::cout << "Integer multiplication: " << MultiplicationFunction(5, 6) << std::endl;
	std::cout << "Double multiplication: " << MultiplicationFunction(5.245, 6.427) << std::endl;

	system("pause");
	return 0;
}