#include<iostream>
#include "Mother.h"
#include "Daughter.h"
using namespace std;

Daughter::Daughter()
{
	cout << "I am a the daughter constructor" << endl;
}


Daughter::~Daughter()
{
	cout << "I am a the daughter deconstructor" << endl;
}

void Daughter::showSmth()
{
	publicV = 10;
	protectedV = 20;

	cout << publicV << " " << protectedV << endl;
}