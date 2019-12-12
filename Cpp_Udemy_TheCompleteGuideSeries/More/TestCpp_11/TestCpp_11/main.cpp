#include<iostream>
#include<vector>
#include<ctime>

std::vector<int> GenerateRandVec(int numOfNums, int min, int max);
void BubbleSort(std::vector<int>& myVector);
void ShowVectorElements(std::vector<int>& myVector);

//Main Function
int main() {
	std::vector<int> vecVals = GenerateRandVec(10, 1, 50);

	ShowVectorElements(vecVals);

	BubbleSort(vecVals);
	for (auto x : vecVals)
		std::cout << x << "\n";

	system("pause");
	return 0;
}


//Random Vector Elements Generator
std::vector<int> GenerateRandVec(int numOfNums, int min, int max)
{
	std::vector<int> vecValues;
	srand(time(NULL));
	int i = 0, randVal = 0;
	while (i < numOfNums)
	{
		randVal = min + std::rand() % ((max + 1) - min);
		vecValues.push_back(randVal);
		i++;
	}
	return vecValues;
}

void BubbleSort(std::vector<int>& myVector)
{
	bool isSorted = false;
	int lastUnsorted = myVector.size() - 1;

	while (!isSorted)// when no swap is made
	{
		isSorted = true;
		for (int i = 0; i < lastUnsorted; i++)
		{
			if (myVector.at(i) > myVector.at(i + 1))
			{
				std::cout << "Swaped: " << myVector.at(i) << " | " << myVector.at(i + 1) << "\n";//show swapped elements.

				std::swap(myVector.at(i), myVector.at(i + 1));
				isSorted = false;
				
				ShowVectorElements(myVector);// show vector after the swap.
			}
		}
		lastUnsorted--;
	}
	

	
}

void ShowVectorElements(std::vector<int>& myVector)
{
	for (auto i : myVector)
		std::cout << i << " ";

	std::cout << "\n";
}

/*
Bubble Sort is the simplest sorting algorithm that works by repeatedly swapping the adjacent elements
if they are in wrong order.
*/