#include "Cday.h"
#include <iostream>
using namespace std;

Cday::Cday(int m, int d, int y)
{
	month = m; day = d; year = y;

}


void Cday::printDate()
{
	cout << month << "/" << day << "/" << year << endl;
}