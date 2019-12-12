#include<iostream>
#include<vector>
#include"MyString.h"

using namespace std;

int main()
{
	MyString larry{ "Larry" };
	MyString moe{ "Moe" };
	MyString curly;

	std::cout << "Enter the third stooge's first name: ";
	std::cin >> curly;
	std::cout << "\nThe three stooges are " << larry << ", " << moe << ", and " << curly << std::endl;

	std::cout << "\nEnter the three stooges names seperated by a space: ";
	cin >> larry >> moe >> curly;

	std::cout << "\nThe three stooges are " << larry << ", " << moe << ", and " << curly << std::endl;




	system("pause");
	return 0;
}