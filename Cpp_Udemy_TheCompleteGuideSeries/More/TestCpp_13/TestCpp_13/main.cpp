#include<iostream>
#define _USE_MATH_DEFINES
#include<math.h>

//Function Overloading Tests

double Area(double radius);
double Area(double height, double width);


int main() {

	std::cout << "Area Circle (c) or Rectangle (r): ";
	char areaType;
	std::cin >> areaType;
	
	switch (areaType)
	{
	case 'c':
		std::cout << "Enter Radius: ";
		double radius;
		std::cin >> radius;
		std::cout << "Area = " << Area(radius)<<"\n";
		break;

	case 'r':
		std::cout << "Enter height: ";
		double height;
		std::cin >> height;
		std::cout << "Enter width: ";
		double width;
		std::cin >> width;
		std::cout << "Area = " << Area(height, width) << "\n";
		break;

	default:
		std::cout << "Invalid option!! ";
		break;
	}

	system("pause");
	return 0;
}


double Area(double radius)
{
	//multiply the squared radius by pi
	return M_PI * std::pow(radius, 2);

}

double Area(double height, double width)
{
	//multiply the squared radius by pi
	return height * width;

}
