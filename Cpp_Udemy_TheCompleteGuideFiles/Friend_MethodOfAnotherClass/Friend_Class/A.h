#pragma once
#include<string>
#include"B.h"


class A {

private:

	int health, xp;
	std::string name;

	friend void B::showA(A& a);

public:
	A(int healthVal = 0, int xpVal = 0, std::string nameVal = "None");
	int getHealth() { return health; }
	int getXp() { return xp; }
	std::string getName() { return name; }


};

