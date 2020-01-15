#include "Student.h"
/*
Student::Student()
	:Student{"None",1}//Delegating Constructor
{}

Student::Student(std::string name)
	: Student{name, 1}//Delegating Constructor
{}

Student::Student(std::string name, unsigned int age)
	:name{name}, age{age}//Initialization
{
	//this->name = name; this->age = age; //assignment
}*/

Student::Student(std::string name, unsigned int age, int d)
	:name{ name }, age{ age }//Initialization
{
	this->d = new int;//allocate storage
	*(this->d) = d;
}

Student::Student(const Student& source)//copy constructor, deep copy. source is an l-value
	//:Student{ source.name , source.age}
	//: name{ source.name }, age{ source.age }, d{source.d} // shallow copy
	:Student{source.name, source.age,*source.d}//delegating to constructor
{
	/*this->d = new int;
	*(this->d) = *source.d;*/

	std::cout << "Copy constructor, made a copy of " << source.name << std::endl;
}

Student::Student(Student&& source)//move constructor.source is a r-value. Steals the data.
	:d{source.d}
{
	std::cout << "Move Constructor, moving object " << source.name<<std::endl;
	source.d = nullptr;
}

Student::~Student()
{
	if(d!=nullptr)
		std::cout << "Destructor for : " << name << std::endl;
	else
		std::cout << "Destructor for nullptr" << std::endl;

	delete d; //free storage
}

Student &Student::operator=(const Student& rhs)//Copy Assignment. works with l-value references.
{
	std::cout << "Copy Assignment| Copying from: " <<rhs.name <<std::endl;

	if (this == &rhs)
		return *this;
	delete d;
	d = new int;
	*d = *rhs.d;

}

Student& Student::operator=(Student&& rhs)//Move Assignment. works with r-value references.
{
	std::cout << "Move Assignment| Moving from: " << rhs.name << std::endl;

	if (this == &rhs)
		return *this;
	delete d;
	d = rhs.d;
	rhs.d = nullptr;
	return *this;

}

std::string Student::getName() const
{
	return name;

}

unsigned int Student::getAge() const
{
	return age;
}

void Student::setName(std::string name)
{
	this->name = name;
}

void Student::setAge(unsigned int age)
{
	this->age = age;
}

int Student::getD()const
{
	return *d;
}

void Student::setD(int d)
{
	*(this->d) = d;
}

void Student::showInfo()
{
	std::cout << name << " |Age: " << age << " | D: "<<*d<<std::endl;
}