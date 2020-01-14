#include<iostream>

extern int myVar;//this variable now takes the value of its appropriate variable stored in main.cpp. NB: can not be initialized, only declared.
static int count = 300;//static used here to differentiate between this variable & the one stored in main.cpp

void myExternFunction()
{
	std::cout << myVar << std::endl;
	std::cout << count << std::endl;
}