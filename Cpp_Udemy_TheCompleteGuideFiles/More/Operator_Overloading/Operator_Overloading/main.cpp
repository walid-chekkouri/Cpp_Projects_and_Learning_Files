#include<iostream>
// Needed for ostringstream
#include <sstream>

class Box
{
public:
	double length, width, breadth;
	std::string boxString;
	Box() { length = 1, width = 1, breadth = 0; }
	Box(double length, double width, double breadth)
	{
		this->length = length;
		this->width = width;
		this->breadth = breadth;
	}
	Box& operator ++()
	{
		length++;
		width++;
		breadth++;
		return *this;//return the newly modified Box.
	}

	Box& operator --()
	{
		length--;
		width--;
		breadth--;
		return *this;//return the newly modified Box.
	}

	operator const char*()
	{
		std::ostringstream boxStream;
		boxStream << "Info: " << length << ", " << width << ", " << breadth;
		boxString = boxStream.str();
		return boxString.c_str();//return c array
	}

	Box operator + (const Box& box2)
	{
		Box boxSum;
		boxSum.length = length + box2.length;
		boxSum.width = width + box2.width;
		boxSum.breadth = breadth + box2.breadth;
		return boxSum;
	}

	double operator [] (int x)
	{
		if (x == 0)
		{
			return length;
		}
		else if (x == 1)
		{
			return width;
		}
		else if (x == 2)
		{
			return breadth;
		}
		else
		{
			return 0;
		}
	}

	bool operator ==(const Box& box2)
	{
		return ((length == box2.length) 
			&& (width == box2.width)
			&& (breadth == box2.breadth));
	}
	bool operator <(const Box& box2)
	{
		double thisSize = length + width + breadth;
		double box2Size = box2.length + box2.width + box2.breadth;

		return (thisSize < box2Size);
	}

	bool operator >(const Box& box2)
	{
		double thisSize = length + width + breadth;
		double box2Size = box2.length + box2.width + box2.breadth;

		return (thisSize > box2Size);
	}

	void operator = (const Box& boxToCopy)
	{
		length = boxToCopy.length;
		width = boxToCopy.width;
		breadth = boxToCopy.breadth;
	}



};


int main()
{

	Box box1(100,200,300);
	Box box2(10,20,30);

	if (box1 > box2)
		std::cout << "box 1 is larger than box2\n";
	++box2;
	std::cout << "Sum:"<<box1+box2<<"\n";
	std::cout << "Box1 Length: " << box1[0]<< "\n";

	std::cout << "Box2: " << box2<< "\n";

	system("pause");
	return 0;
}