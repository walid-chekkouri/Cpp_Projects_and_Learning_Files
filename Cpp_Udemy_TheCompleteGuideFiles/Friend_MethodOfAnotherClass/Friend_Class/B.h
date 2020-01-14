#pragma once
#include<string>
#include<iostream>

class A;

class B {

private:

	int age;
	std::string nickName;

public:
	B(int ageVal = 0, std::string nickNameVal = "None");
	int getAge() { return age; }
	std::string getNickName() { return nickName; }

	void showA(A& a);

};