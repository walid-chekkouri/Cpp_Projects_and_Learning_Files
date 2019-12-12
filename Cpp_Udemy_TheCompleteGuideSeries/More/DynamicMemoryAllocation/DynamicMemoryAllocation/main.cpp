#include <iostream> 

using namespace std;

//Dynamic Memory Allocation example:
int main()
{
	int* array_ptr{ nullptr };
	size_t size{};

	std::cout << "Enter the size of the array: " << std::endl;
	std::cin >> size;

	array_ptr = new int[size]; //allocate area on the heap.


	//...

	delete[] array_ptr; //free allocated storage.

	int* int_ptr{ nullptr };
	int_ptr = new int;//allocate area on the heap

	delete int_ptr;//free allocated storage.


	system("pause");
	return 0;
}

