#include<iostream>
#include <vector>
#include <string>


int main() {


	std::vector<std::vector<int>> vector2d
	{
		{1,2,3},
		{10,20,30},
		{100,200,300}
	};


		for (auto it1 : vector2d)
		{
			for (auto it2 : it1)
			{
				std::cout << it2 << std::endl;
			}
			std::cout << "\n";
		}


	system("pause");
	return(0);
}