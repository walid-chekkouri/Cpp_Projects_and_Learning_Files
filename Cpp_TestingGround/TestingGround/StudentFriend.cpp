#include "StudentFriend.h"
#include"Student.h"

void StudentFriend::displayStudent(Student& s)
{
	std::cout <<"Friend Function==|Name: "<< s.name <<" |Age: "<< s.age <<"|D: "<< *s.d;
}