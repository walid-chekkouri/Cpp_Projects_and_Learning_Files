#include <iostream> 

using namespace std;

int main()
{

	int myInt = 30;
	double myDouble = 50.987;
	long long myLongLong = 48923324;
	char myChar = 'a';


	int* pInt = &myInt;
	double* pDouble = &myDouble;
	long long* pLongLong = &myLongLong;
	char* pChar = &myChar;

	//All pointers have the same size, since their value is the memory adress.
	std::cout << "Size of the Int pointer: " << sizeof(pInt) << std::endl;
	std::cout << "Size of the Double pointer: " << sizeof(pDouble) << std::endl;
	std::cout << "Size of the Long Long pointer: " << sizeof(pLongLong) << std::endl;
	std::cout << "Size of the char pointer: " << sizeof(pChar) << std::endl;

	//However the variables pointed at have different sizes.
	std::cout << "Size of the Int: " << sizeof(*pInt) << std::endl;
	std::cout << "Size of the Double: " << sizeof(*pDouble) << std::endl;
	std::cout << "Size of the Long Long: " << sizeof(*pLongLong) << std::endl;
	std::cout << "Size of the char: " << sizeof(*pChar) << std::endl;


	system("pause");
	return 0;
}

