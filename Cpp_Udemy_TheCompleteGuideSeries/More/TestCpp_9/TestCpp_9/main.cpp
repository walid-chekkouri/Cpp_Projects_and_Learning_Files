#include<iostream>
#include<string>
#include<vector>

//A prime number is a whole number greater than 1 whose only factors are 1 and itself.

std::vector<int> Range(int start, int max, int step);
bool IsPrime(int num);
std::vector<int>GetPrimes(int maxNum);

int main() {

	int num = 0;
	std::cout << "Number to Check: ";
	std::cin >> num;

	std::cout.setf(std::ios::boolalpha);// now prints true\false instead of 1\0
	std::cout << "Is " << num << " Prime? "  << IsPrime(num) << "\n";

	std::cout << "How many primes to generares ";
	int maxPrime;
	std::cin >> maxPrime;
	std::vector<int> primeList = GetPrimes(maxPrime);
	for (auto x : primeList)
		std::cout << x << "\n";



	system("pause");
	return 0;
}

std::vector<int> Range(int start, int max, int step)
{
	int i = start;
	std::vector<int> range;
	while (i <= max)
	{
		range.push_back(i);
		i += step;
	}

	return range;
}

bool IsPrime(int num)
{
	for (auto n : Range(2, num - 1, 1))
	{
		if ((num % n) == 0)
			return false;
	}
	return true;

}

std::vector<int>GetPrimes(int maxNum)
{
	std::vector<int>vecorPrimes;
	for (auto x : Range(2, maxNum, 1))
	{
		if (IsPrime(x))
			vecorPrimes.push_back(x);
	}
	return vecorPrimes;
}