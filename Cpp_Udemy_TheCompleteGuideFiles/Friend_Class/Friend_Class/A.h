#pragma once
#include<string>
#include"B.h"

class A {

private:

	int health, xp;
	std::string name;
	friend void B::showA(A& a)const;
public:
	A(int healthVal = 0, int xpVal = 0, std::string nameVal = "None");
	int getHealth()const { return health; }
	int getXp()const { return xp; }
	std::string getName()const { return name; }

	

};

