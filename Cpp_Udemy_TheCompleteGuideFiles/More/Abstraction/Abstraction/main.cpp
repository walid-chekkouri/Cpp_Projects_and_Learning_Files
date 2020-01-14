#include<iostream>
//Abstraction means displaying only essential information and hiding the details.

class Shape {
public:
	virtual double Area() = 0;
};

class Circle : public Shape {
protected:
	double width;
public:
	Circle(double w)
	{
		width = w;
	}

	// Override Area()
	double Area() override{//we use the override keyword to force the compiler to check i the base class's virtual function is the same as the subclass
		return 3.14159 * std::pow((width / 2), 2);
	}
};

class Rectangle : public Shape {
protected:
	double width, height;
public:
	Rectangle(double w, double h)
	{
		width = w;
		height = h;
	}

	// Override Area()
	double Area() override final {
		//we use the override keyword to force the compiler to check i the base class's virtual function is the same as the subclass
		//final keyword means that subclasses that inherit from rectangle can no longer override this specific function
		return width*height;
	}
};

/* //Error because of we have used the keyword final above
class Square : public Rectangle {
public:
	Square(double w, double h):
		Rectangle(w,h)
	{

	}

	// Override Area()
	double Area() override {//we use the override keyword to force the compiler to check i the base class's virtual function is the same as the subclass
		return 2* height;
	}
};*/



// This function receives Shapes but uses the 
// correct Area() automatically
void ShowArea(Shape& shape) {
	std::cout << "Area : " << shape.Area() << "\n";
}

int main()
{
	Rectangle rectangle(10, 5);
	Circle circle(10);
	ShowArea(rectangle);
	ShowArea(circle);

	return 0;
}
