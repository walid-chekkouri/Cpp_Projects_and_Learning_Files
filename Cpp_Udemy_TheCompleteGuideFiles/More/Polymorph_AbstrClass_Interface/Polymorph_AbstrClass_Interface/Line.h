#pragma once
#include <iostream>
#include "I_Shape.h"
class Line :public I_Shape
{
public:
	Line() {};

	virtual void draw() override { std::cout << "Line Draw\n"; }
	virtual void rotate() override { std::cout << "Line Rotate \n"; }
	virtual ~Line() {};
};

