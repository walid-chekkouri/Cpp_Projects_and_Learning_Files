#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include <thread>
#include <mutex>

/*
*working with threads 
*example testing execution time when using primes and when not using them.
*/

std::mutex vectLock;
std::vector<unsigned int> primeVect;


void findPrimesUsingThreads(unsigned int start, unsigned int end) {//finding primes & storing them in our vector
	//NB:there are neater ways to find primes.
	for (unsigned int x = start; x <= end; x += 2)
	{
		for (unsigned int y = 2; y < x; ++y)
		{
			if (x % y == 0)
			{
				break;
			}
			else if ((y + 1) == x)
			{
				vectLock.lock();
				primeVect.push_back(x);
				vectLock.unlock();
			}
		}
	}

}

void createThreads(unsigned int start, unsigned int end, unsigned int numThreads)
{
	std::vector<std::thread> threadVect;
	unsigned int threadSpread = end / numThreads;
	unsigned int newEnd = start + threadSpread-1;

	for (unsigned int x = 0; x < numThreads; ++x)
	{
		threadVect.emplace_back(findPrimesUsingThreads, start, newEnd);
		start += threadSpread;
		newEnd += threadSpread;
	}

	for (auto& t : threadVect)
	{
		t.join();
	}

}

void findPrimes(unsigned int start, unsigned int end, std::vector<unsigned int>& vect){//finding primes & storing them in our vector
	//NB:there are neater ways to find primes.
	for (unsigned int x = start; x <= end; x += 2)
	{
		for (unsigned int y = 2; y < x; ++y)
		{
			if (x % y == 0)
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
	/*Without using Threads
	std::vector<unsigned int> primeVect;
	int startTime = clock();

	findPrimes(1, 100000, primeVect);
	for (auto i : primeVect)
		std::cout << i << std::endl;

	int endTime = clock();

	std::cout << "Execution Time: " << (endTime - startTime) / double(CLOCKS_PER_SEC)<<std::endl;//Execution time in seconds
*/


	//Using Threads:
	int startTime = clock();

	createThreads(1, 100000, 3);

	int endTime = clock();

	for (auto i : primeVect)
		std::cout << i << std::endl;

	std::cout << "Execution Time: " << (endTime - startTime) / double(CLOCKS_PER_SEC) << std::endl;


	return 0;
}