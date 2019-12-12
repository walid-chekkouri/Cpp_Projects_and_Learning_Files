#include<iostream>

int main(){

	int number = 5;

TheStatement:
	std::cout << number << std::endl;
	number--;

	if (number > 0)
		goto TheStatement;

	system("pause");
	return 0;
}