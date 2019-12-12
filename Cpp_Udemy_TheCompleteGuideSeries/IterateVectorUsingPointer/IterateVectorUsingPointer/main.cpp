#include <iostream> 
#include <vector> 

using namespace std;

int main()
{
	vector<string> stooges{ "Joe", "Mark","Maria" };
	vector<string>* vectorPtr{ nullptr };

	vectorPtr = &stooges;

	for (auto stooge : *vectorPtr)
		std::cout << stooge << " ";

	std::cout << std::endl;


	system("pause");
	return 0;
}

