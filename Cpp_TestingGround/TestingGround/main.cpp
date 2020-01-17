#include<iostream>
#include<String>
#include<vector>
#include "Student.h"

using namespace std;

void printArray(Student(&students)[4]);
void displayStudentInfo(Student s);

int main()
{
	Student s1 ("walid",21,10);
	Student s2("Joe", 23,20);

	Student s3("Merry",25);
	Student s4("Mark");

	Student students[4] = {s1,s2,s3,s4};

	printArray(students);

	displayStudentInfo(s1);
	s1.setD(700);
	displayStudentInfo(s1);
	std::cout << "========Testing Move constructor============" << std::endl;
	std::vector<Student> studentslist;
	studentslist.push_back(Student("Eli Drake",35,90));
	
	StudentFriend sf1;
	sf1.displayStudent(s2);


	Student s6{ s2 };//assignment
	Student s7 = s4; //initialization.done with constructor.
	s6 = s3;//assignment.Assigmenets occur when an object is already initialized(created).

//	displayStudentInfo(s6);

	system("pause");
	return 0;
}


void printArray(Student (&students)[4])
{
	//We can't use a pointer with a ranged based loop.
	//Remember when we passed the array into the function we actually end up with a pointer, not an array.

	for (Student& s : students)
			s.showInfo();
}

void displayStudentInfo(Student s)//passed by value to test Copy Constructor
{
	std::cout << "========Displaying Student============" << std::endl;
	s.showInfo();
	//TODO: overload << operator.
}

