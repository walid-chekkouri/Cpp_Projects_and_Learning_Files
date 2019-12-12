#include<iostream>
#include <functional>
#include <vector>
double MultBy2(double num)
{
	return num * 2;
}

double MultBy3(double num)
{
	return num * 3;
}

double DoMath(std::function<double(double)> func, double num)
{
	return func(num);
}


int main()
{ 
	auto times2 = MultBy2;
	std::cout << "5 * 2 = " << times2(5) << "\n";
	std::cout << "6 * 2 = " << DoMath(times2, 6) << "\n";

	std::vector<std::function<double(double)>> functions(2);
	functions[0] = MultBy2;
	functions[1] = MultBy3;

	std::cout << "2 * 10 = " << functions[0](10) << "\n";
	std::cout << "3 * 10 = " << functions[1](10) << "\n";

	system("pause");
	return 0;
}