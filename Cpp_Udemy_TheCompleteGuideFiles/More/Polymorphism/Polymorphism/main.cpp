#define _USE_MATH_DEFINES
#include<iostream>
#include <math.h>

// Polymorphism is a feature in which similar 
// objects can be treated the same, but also
// utilize their differences automatically
// for any methods marked as virtual

class Shape {
protected:
	double height;
	double width;
public:
	// Assume that if only 1 value is passed
	// that height and width are equal
	Shape(double length) {
		height = length;
		width = length;
	}
	Shape(double height, double width) {
		this->height = height;
		this->width = width;
	}
	virtual double Area() {
		std::cout << "Shape Default Object: " << "\n";
		return height * width;
	}
};

class Circle : public Shape {
public:
	Circle(double width) :
		Shape(width) {

	}

	// Override Area()
	double Area() {
		std::cout << "Circle Object: " << "\n";
		return M_PI * std::pow((width / 2), 2);
	}
};

// This function receives Shapes but uses the 
// correct Area() automatically
void ShowArea(Shape& shape) {
	std::cout << "Area : " << shape.Area() << "\n";
}

int main()
{
	Shape square(10, 5);
	Circle circle(10);
	ShowArea(square);
	ShowArea(circle);


	system("pause");
	return 0;
}

/*
NB: See Example of Abstraction
*/
