#include<iostream>
#include<vector>
#include<string>
#include<numeric>

void assignAge(int *);

int main(){

	std::vector<int>myVec(10);
	std::iota(std::begin(myVec), std::end(myVec), 0);

	/*for (unsigned short int i = 0; i < myVec.size(); ++i)
		std::cout << myVec[i] << "\n"; */

	for (auto y : myVec) std::cout << y << "\n"; //same effect as a loop

	//pointing at an array doesn't need the & sign
	int intArray[] = { 9, 7, 3, 5 };
	int* pIntArray = intArray;

	std::cout << "Value: " << *pIntArray << " Adress " << pIntArray << "\n";
	pIntArray++;

	int age = 43;
	assignAge(&age);
	std::cout << "Pointer Age " << age << "\n";

	//Looping through array using pointers
	const int *end = &intArray[4];
	for (int * curr = intArray; curr != end; ++curr)
	{
		std::cout << *curr << std::endl;
	}


	system("pause");
	return 0;
}

void assignAge(int *pAge)
{
	*pAge = 22;

}