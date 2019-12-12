#include<iostream>
#include<string>

int main(){

	unsigned short int ageS = 16;
	int ageI = 16;

	std::cout << "Size of (unsigned short int): " << sizeof(ageS)<<std::endl;
	std::cout << "Size of (int): " << sizeof(ageI)<<std::endl;

	auto b1 = true;
	bool b2 = true;

	std::cout << "B1: " << sizeof(b1) << std::endl;

	std::cout << "Min bool " <<
		std::numeric_limits<bool>::min() << "\n";

	std::cout << "Max bool " <<
		std::numeric_limits<bool>::max() << "\n";

	float bigFloat1 = 1.1111111111;
	float bigFloat2 = 1.1111111111;
	float floatSum = bigFloat1 + bigFloat2;

	printf("FloatSum Precision: %.10f\n", floatSum);


	double bigDouble1 = 1.1111111111;
	double bigDouble2 = 1.1111111111;
	double doubleSum = bigDouble1 + bigDouble2;

	printf("DoubleSum Precision: %.10f\n", doubleSum);

	std::string myString;
	getline(std::cin, myString);
	
	int nb1 = std::stoi(myString);

	std::cout << "nb1: " << nb1 << std::endl;

	system("pause");
	return 0;
}