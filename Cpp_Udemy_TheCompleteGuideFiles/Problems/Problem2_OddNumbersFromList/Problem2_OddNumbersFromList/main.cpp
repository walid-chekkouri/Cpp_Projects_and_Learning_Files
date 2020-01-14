#include<iostream>
#include <functional>
#include <vector>

bool IsItOdd(int num)
{
	return (num % 2 == 0) ? false : true;
}

std::vector<int> ChangeList(std::vector<int> list, std::function<bool(int)> func)
{
	std::vector<int> oddList;
	for (auto i : list)
	{
		if (func(i))
		{
			oddList.push_back(i);
		}
	}
	return oddList;
}


int main()
{
	std::vector<int> listOfNums{ 1,2,3,4,5 };

	std::vector<int> oddList = ChangeList(listOfNums, IsItOdd);

	std::cout << "List of Odds\n";
	for (auto i : oddList)
	{
		std::cout << i << "\n";
	}

	system("pause");
	return 0;
}