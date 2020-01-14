#include <memory> 
#include <vector> 
#include <string> 
#include <stdio.h> 
#include <iostream> 
using namespace std;

int main()
{
	int amtToStore;
	std::cout << "How many numbers do you want to store : ";
	std::cin >> amtToStore;

	// Create an int pointer and set aside enough space
	int* pNums;

	// Cast the pointer and define how much space to set aside
	pNums = (int*)malloc(amtToStore * sizeof(int));

	// Check if memory was allocated
	if (pNums != NULL) {
		int i = 0;

		// Store values
		while (i < amtToStore) {
			std::cout << "Enter a Number : ";
			std::cin >> pNums[i];
			i++;
		}
	}

	std::cout << "You entered these numbers\n";
	for (int i = 0; i < amtToStore; i++) {
		std::cout << pNums[i] << "\n";
	}

	// Delete the pointer
	delete pNums;

	system("pause");
	return 0;
}