#ifndef PEOPLE_H
#define PEOPLE_H

#include <string>
#include "Cday.h"
using namespace std;

class People
{
public:
	People(string x, Cday bd);
	void printInfo();
private:
	string name;
	Cday birthday;
};

#endif