#include<iostream>
#include<vector>
#include"Circle.h"
#include"Line.h"
#include"Square.h"
#include"I_Shape.h"

int main()
{
	std::vector<I_Shape*> shapes;

	I_Shape* p1 = new Circle();
	I_Shape* p2 = new Line();
	I_Shape* p3 = new Square();

	shapes.push_back(p1);
	shapes.push_back(p2);
	shapes.push_back(p3);


	for (auto const& shape : shapes)
	{
		shape->rotate();
		shape->draw();
	}


	//delete the pointers
	delete p1, p2, p3;

	

	system("pause");
	return 0;
}
