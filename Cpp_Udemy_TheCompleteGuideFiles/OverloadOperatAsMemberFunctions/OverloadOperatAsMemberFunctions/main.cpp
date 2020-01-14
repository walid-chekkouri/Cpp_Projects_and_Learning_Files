#include<iostream>
#include<vector>
#include"MyString.h"

using namespace std;

int main()
{
	std::cout << boolalpha << std::endl;

	MyString larry{ "Larry" };
	MyString moe{ "Moe" };

	MyString stooge = larry;
	larry.display();
	moe.display();

	std::cout << (larry == moe) << std::endl;
	std::cout << (larry == stooge) << std::endl;

	larry.display();
	MyString larry2 = -larry;
	larry2.display();

	MyString stooges = larry + "Moe";


	MyString twoStooges = moe + " " + "Larry";
	twoStooges.display();


	MyString threeStooges = moe + " " + larry + " " + "Curly";
	//MyString threeStooges ="Curly"+ " "+  moe + " " + larry ;//this is wrong, to correct it use non member function (see overloading operators as global functions.)

	threeStooges.display();

	system("pause");
	return 0;
}