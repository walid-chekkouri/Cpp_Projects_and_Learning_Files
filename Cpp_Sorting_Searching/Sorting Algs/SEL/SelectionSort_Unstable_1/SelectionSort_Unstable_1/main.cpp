#include<iostream>
#include<string>

//The good thing about selection sort is it never makes more than O(n) swaps and can be useful when memory write is a costly operation.


///Swap Function
void swap(int* xp, int* yp)
{

	int temp = *xp;
	*xp = *yp;
	*yp = temp;

}

///Selection Sort Algorithm
void selectionSort(int arr[], const int n)
{
	int i, j, min_idx;

	// One by one move boundary of unsorted sub-array  
	for (i = 0; i < n - 1; i++)
	{
		// Find the minimum element in unsorted array  
		min_idx = i;
		for (j = i + 1; j < n; j++)
			if (arr[j] < arr[min_idx])
				min_idx = j;

		// Swap the found minimum element with the first element 
		swap(&arr[min_idx], &arr[i]);

	}
}

/* Function to print an array */
void printArray(const int arr[], const int size)
{
	int i;
	for (i = 0; i < size; i++)
		std::cout << arr[i] << " ";

}

int main()
{

	int array[] = { 2,8,5,3,9,4,1 };
	const int n = sizeof(array) / sizeof(array[0]);
	selectionSort(array, n);
	printArray(array, n);




	system("pause");
	return 0;
}