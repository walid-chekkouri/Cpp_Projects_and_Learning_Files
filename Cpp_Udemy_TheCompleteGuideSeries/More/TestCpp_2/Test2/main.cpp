#include<iostream>


int main(){


	int myArray[3] = {5,8,3};

	std::cout << "1st value" << myArray[0] << std::endl;
	myArray[0] = 7;

	std::cout << "Array size: " << sizeof(myArray) / sizeof(*myArray) << "\n";


	system("pause");
	return 0;
}