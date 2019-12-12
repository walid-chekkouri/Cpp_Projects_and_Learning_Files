#include<iostream>
#include "Mother.h"
#include "Daughter.h"

using namespace std;

Mother::Mother()
{
	cout << "I am a the mother constructor" << endl;
}

Mother::~Mother()
{
	cout << "I am a the mother deconstructor" << endl;
}
void Mother::showName(){

	cout << "I am a member of the family too" << endl;
}