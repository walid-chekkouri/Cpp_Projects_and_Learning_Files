#include<iostream>
#include<vector>


int main()
{
	std::vector<int>myVector;

	myVector.push_back(45);
	myVector.push_back(23);
	myVector.push_back(1);
	myVector.push_back(989);

	std::cout << myVector[0] << std::endl;
	//std::cout << myVector[4] << std::endl; // will loop back to 45.
	myVector.pop_back(); //function is used to pop or remove elements from a vector from the back. The value is removed from the vector from the end
	

	system("pause");
	return 0;
}