#include<iostream>
#include <chrono>  // for high_resolution_clock
#include <string>

//Time Complexity Testing Ground:

using namespace std::chrono;

void bubbleSort(int arr[], int n);
void printArray(int arr[], int size);

struct Timer
{
	std::chrono::time_point<std::chrono::steady_clock> start, end;
	std::chrono::duration<float> duration;
	std::string message="";

	Timer(std::string message)
	{
		this->message = message;
		start = std::chrono::high_resolution_clock::now();
	}

	~Timer()
	{
		end = std::chrono::high_resolution_clock::now();
		duration = end - start;

		float ms = duration.count() * 1000.0f;
		std::cout << message << ms << "ms" << std::endl;
	}
};

int main(){
	//Linear Search: O(n).
	//Bubble Search: O(n^2).
	//Binary Search: O(Log n).

	int size = 6;
	int myArray1[] = { 9,7,4,93,56,1 };
	
	Timer *timerP1 = new Timer("Printing Took: ");
	printArray(myArray1, size);
	delete timerP1;


	Timer* timerP2 = new Timer("Bubble Sort Took: ");
	bubbleSort(myArray1, size);

	int myArray2[] = { 14,77,4,98,56,6 };
	bubbleSort(myArray2, size);

	delete timerP2;


	system("pause");
	return 0;
}

void bubbleSort(int arr[], int n) //O(n^2)
{
	int i, j;
	bool swapped;
	for (i = 0; i < n - 1; i++)
	{
		swapped = false;
		for (j = 0; j < n - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				std::swap(arr[j], arr[j + 1]);
				swapped = true;
			}
		}

		// IF no two elements were swapped by inner loop, then break 
		if (swapped == false)
			break;
	}
}

void printArray(int arr[], int size)//O(n)
{
	int i;
	for (i = 0; i < size; i++)
		printf("%d ", arr[i]);
	printf("\nEND\n");
}
