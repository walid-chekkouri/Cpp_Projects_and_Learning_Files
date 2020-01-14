#include <iostream> 

using namespace std;

int main()
{
	int numbers[] = { 1, 2, 3, 4, 5 };
	for (int& n : numbers) {
		n *= 2;//multiply each element by 2.
		std::cout << n << std::endl;
	}




	system("pause");
	return 0;
}

