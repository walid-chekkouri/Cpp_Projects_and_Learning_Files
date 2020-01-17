#pragma once
#include<iostream>
#include"StudentFriend.h"

class Student
{
private:
	std::string name{""};
	unsigned int age{0};
	int* d=nullptr;
	
public:
	friend void StudentFriend::displayStudent(Student& s);

	/*Student();
	Student(std::string name);*/
	Student(std::string name="None", unsigned int age=0, int d=0);//constructor
	Student(const Student& source);//copy constructor
	Student(Student&& source);//move constructor
	~Student();//destructor

	Student &operator=(const Student &rhs);//Copy Assignment, works with l-val.
	Student &operator=(Student&& rhs);//Move Assignment, works with r-val. ex: temp variable.



	std::string getName() const;
	unsigned int getAge() const;
	int getD()const;
	void setName(std::string name);
	void setAge(unsigned int age);
	void setD(int d);
	void showInfo();


};

