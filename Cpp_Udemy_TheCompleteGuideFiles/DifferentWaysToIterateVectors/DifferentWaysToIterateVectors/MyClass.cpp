#include "MyClass.h"

MyClass::MyClass(int myIntVal)
	:myInt{myIntVal}
{

}


std::ostream& operator<<(std::ostream& os, const MyClass& obj)
{
	os << "MyClass: " <<obj.myInt << std::endl;
	return os;
}

