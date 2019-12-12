#include<iostream>
#include<vector>
#include"MyString.h"

using namespace std;

int main()
{
	MyString larry{ "Larry" };
	larry.display();


	larry = -larry;
	larry.display();

	std::cout << boolalpha << std::endl;
	MyString moe{ "Moe" };
	MyString stooge = larry;

	std::cout << (larry == moe) << std::endl;
	std::cout << (larry == stooge) << std::endl;

	MyString stooges = "Larry" + moe;
	stooges.display();

	MyString twoStooges = moe + " " + "Larry";
	twoStooges.display();
	MyString threeStooges = moe + " " + larry + " " + "Curly";
	threeStooges.display();

	system("pause");
	return 0;
}