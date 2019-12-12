#include "People.h"
#include "Cday.h"
#include <iostream>
using namespace std;

People::People(string x, Cday bd)
	: name(x), birthday(bd)

{


}

void People::printInfo()
{
	cout << name << " born on ";
	birthday.printDate();
}