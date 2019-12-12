#include <iostream> 

using namespace std;

int main()
{
	int numbers[] = { 10, 20, 30, 40, 50 };
	size_t size = sizeof(numbers) / sizeof(*numbers);

	for (int* ptr = numbers; ptr < numbers + size; ++ptr)
	{
		std::cout << *ptr << std::endl;
	}

	system("pause");
	return 0;
}

