#define _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS_GLOBALS

// ---------- CALCULATE PRIMES WITHOUT THREADS -----------

#include <iostream>
#include <string>
#include <chrono>
#include <ctime>
#include <thread>
#include <vector>

void FindPrimes(unsigned int start, unsigned int end,
	std::vector<unsigned int>& vect)
{

	// Cycle through numbers while ignoring evens
	for (unsigned int x = start; x <= end; x += 2)
	{
		for (unsigned int y = 2; y < x; y++)
		{
			if ((x % y) == 0)
			{
				break;
			}
			else if ((y + 1) == x)
			{
				vect.push_back(x);
			}
		}
	}
}

int main()
{
	std::vector<unsigned int> primeVect;

	// Get time before code starts executing
	int startTime = clock();

	FindPrimes(1, 100000, primeVect);
	for (auto i : primeVect)
		std::cout << i << "\n";

	// Get time after execution
	int endTime = clock();

	// Print out the number of seconds by taking the difference
	// and dividing by the clock ticks per second
	std::cout << "Execution Time : " << (endTime - startTime) / double(CLOCKS_PER_SEC) << std::endl;


	system("pause");
	return 0;
}