#include<iostream>
#include<string>
int main(){

	////  Printing string characters 
	std::string myString{"Hello Everyone"};

	for (char c : myString)
	{
		std::cout << c << std::endl;
	}

	//// the initializer may be a braced-init-list 
	for (int n : {12, 1, 4, 3, 4, 9})
		std::cout << n << ' ';

	/* Iterating over array */		std::cout << std::endl;
	int a[] = { 0, 1, 2, 3, 4, 5 };
	for (int n : a)
		std::cout << n << ' ';



	system("pause");
	return 0;
}