#include<iostream>
#include<string>

double calculateMpg(int miles, int gallons)
{
	if (gallons == 0)
		throw 0;

	if (miles < 0 || gallons < 0)
		throw std::string{ "Negative value error" };

	return static_cast<double>(miles) / gallons;

	
}


int main()
{
	int miles{};
	int gallons{};
	double miles_per_gallon{};

	std::cout << "Enter the miles: ";
	std::cin >> miles;
	std::cout << "Enter the gallons: ";
	std::cin >> gallons;


	try
	{
		miles_per_gallon = calculateMpg(miles, gallons);
		std::cout << "Result: " << miles_per_gallon << std::endl;
	}

	catch (int& ex)
	{
		std::cerr << "Sorry, can't divide by zero" << std::endl;
	}
	catch (std::string& ex)
	{
		
	}
	catch (...)//should be last one placed.
	{
		std::cerr<<"Unknown Error" << std::endl;
	}


	std::cout << "Program continued" << std::endl;

	system("pause");
	return 0;
}