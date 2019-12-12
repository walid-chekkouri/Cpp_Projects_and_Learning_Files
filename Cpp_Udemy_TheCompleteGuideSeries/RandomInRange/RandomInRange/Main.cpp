#include <iostream>
#include <time.h>

int main()
{
	srand(time(NULL)); //initialize the random seed


	const char arrayNum[4] = { '1', '3', '7', '9' };
	int RandIndex = rand() % 4; //generates a random number between 0 and 3
	std::cout << arrayNum[RandIndex] << std::endl;;

	system("pause");
	return 0;
}