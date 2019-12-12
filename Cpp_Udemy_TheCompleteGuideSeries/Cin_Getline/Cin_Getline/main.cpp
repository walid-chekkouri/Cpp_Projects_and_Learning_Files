#include<iostream>


int main() {

	char fullName[20];//c-style string
	float age = 0;

	std::cout << "Enter your full name: ";
	std::cin.getline(fullName, 20);//max of 20 elements
	std::cout << "Enter your age: " << std::endl;
	std::cin >> age;


	std::cout << "\n" << fullName << " is " << age << " years old." << std::endl;

	system("pause");
	return(0);
}