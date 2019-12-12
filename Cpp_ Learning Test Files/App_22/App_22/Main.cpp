#include <iostream>
#include "Cday.h"
#include "People.h"
using namespace std;

int main()
{
	Cday birthdate(5, 27, 1998);
	People adam("Adam", birthdate);
	
	adam.printInfo();

	system("pause");
	return 0;
}