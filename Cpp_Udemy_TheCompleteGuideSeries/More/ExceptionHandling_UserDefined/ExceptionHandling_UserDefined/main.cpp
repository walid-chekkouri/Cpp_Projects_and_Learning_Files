#include<iostream>

using namespace std;

class DivideByZeroException{};
class NegativeValueException {};


double calculateMpg(int miles, int gallons)
{
	if (gallons == 0)
		throw DivideByZeroException();//called as an object.
	if (miles < 0 || gallons < 0)
		throw NegativeValueException();

	return static_cast<double>(miles) / gallons;
}

int main()
{
	int miles{};
	int gallons{};
	double milesPerGallons{};

	std::cout << "Enter the miles driven: ";
	std::cin >> miles;
	std::cout << "Enter the gallons used: ";
	std::cin >> gallons;

	try
	{
		milesPerGallons = calculateMpg(miles, gallons);
		std::cout << "Result: "<< milesPerGallons<<std::endl;
	}
	catch (const DivideByZeroException& ex)
	{
		std::cerr << "Sorry, you can't divide by Zero" << std::endl;
	}
	catch (const NegativeValueException& ex)
	{
		std::cerr << "Sorry, one of your parameters is negative" << std::endl;

	}

	std::cout << "Bye";

	system("pause");
	return 0;
}