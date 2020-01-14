#pragma once

class I_Shape //Interface Class
{
public:
	I_Shape() {};

	virtual void draw() = 0;
	virtual void rotate() = 0;
	virtual ~I_Shape() {};


};

