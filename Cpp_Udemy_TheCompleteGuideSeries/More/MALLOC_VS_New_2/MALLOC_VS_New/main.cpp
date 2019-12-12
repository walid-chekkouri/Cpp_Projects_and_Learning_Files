#include <memory> 
#include <vector> 
#include <string> 
#include <stdio.h> 
#include <iostream> 
using namespace std;

int main()
{
	
	// Smart Pointer Solution
	int amtToStore;
	std::cout << "How many numbers do you want to store : ";
	std::cin >> amtToStore;

	// This memory will be automatically reallocated
	std::unique_ptr<int[]> pNums(new int[amtToStore]);

	// unique_ptr can only have one owner
	// so this throws an error
	// std::unique_ptr<int[]> pNums2 = pNums;
	// !! take a loot at shared_ptr also

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
	// We don't need to call delete ptr: when the object  
	// ptr goes out of scope, destructor for it is automatically 
	// called and destructor does delete ptr.
	system("pause");
	return 0;
}

/*
-The malloc() function in C++ allocates a block of uninitialized memory
and returns a void pointer to the first byte of the allocated memory block if the allocation succeeds.

DIFFERENCE between malloc & new:
new calls constructors, while malloc() does not.
In fact primitive data types (char, int, float.. etc) can also be initialized with new. ex: int *n = new int(10); // initialization with new() cout << *n;

operator vs function: new is an operator, while malloc() is a function.
return type: new returns exact data type, while malloc() returns void *.
Failure Condition: On failure, malloc() returns NULL where as new Throws.
Memory: In case of new, memory is allocated from free store where as in malloc() memory allocation is done from heap.
Overriding: We are allowed to override new operator where as we can not override the malloc() function legally.
Size: Required size of memory is calculated by compiler for new, where as we have to manually calculate size for malloc().

*/