#pragma once
#include <iostream>
#include "I_Shape.h"
class Circle:public I_Shape
{
public:
	Circle() {};

	virtual void draw() override { std::cout << "Circle Draw\n"; }
	virtual void rotate() override { std::cout << "Circle rotate\n"; }
	virtual ~Circle() {};
};

