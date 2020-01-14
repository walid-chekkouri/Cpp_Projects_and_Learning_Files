#include<iostream>

int main()
{
	int miles{};
	int gallons{};
	double miles_per_gallon{};

	std::cout << "Enter the miles: ";
	std::cin >> miles;
	std::cout << "Enter the gallons: ";
	std::cin >> gallons;

	//miles_per_gallon = miles / gallons;//will truncate our result to an int.
	
	try
	{
		if (gallons == 0)
			throw 0;//we can throw whatever we want.
		miles_per_gallon = static_cast<double>(miles) / gallons;
		std::cout << "Result: " << miles_per_gallon << std::endl;
	}

	catch (int& ex)
	{
		std::cerr << "Sorry, can't divide by zero" << std::endl;
	}
		
	

	std::cout << "Program continued" << std::endl;

	system("pause");
	return 0;
}