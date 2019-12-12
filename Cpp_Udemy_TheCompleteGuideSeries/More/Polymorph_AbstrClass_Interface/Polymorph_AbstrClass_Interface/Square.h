#pragma once
#include <iostream>
#include "I_Shape.h"
class Square :public I_Shape
{
public:
	Square() {};

	virtual void draw() override { std::cout << "Square Draw\n"; }
	virtual void rotate() override { std::cout << "Square rotate\n"; }
	virtual ~Square() {};

};

