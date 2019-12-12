#include<iostream>
#include <cmath>

long long factorial(int n)
{
	if (n == 0)
		return 1;
	return n * factorial(std::abs(n) - 1);//works for both negative & positive values
}

int main() {
	int nb1 = 0;
	while (true)//keep looping
	{
		std::cout << "Enter a positive number: " << std::endl;
		std::cin >> nb1;
		std::cout << factorial(nb1) << std::endl;
	}
	

	system("pause");
	return(0);
}