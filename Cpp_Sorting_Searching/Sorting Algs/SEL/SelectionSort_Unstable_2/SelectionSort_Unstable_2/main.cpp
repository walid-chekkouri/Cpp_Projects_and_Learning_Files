#include<iostream>

using namespace std;

void swap(int* xp, int* yp)
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}


void selectionSort(int arr[], int n)
{
	int j, max_idx;

	// One by one move boundary of unsorted subarray 


	for (n; n > 0; n--)//while( n>0 ) but add at the end: n--.
	{
		// Find the maximum element in unsorted array  
		max_idx = 0;
		for (j = 0; j <= n - 1; j++)
		{
			if (arr[max_idx] < arr[j])
				max_idx = j;
		}
		cout << "Max: " << arr[max_idx] << endl;
		swap(arr[max_idx], arr[n - 1]);
		//n--;
	}
}




/* Function to print an array */
void printArray(int arr[], int size)
{
	int i;
	for (i = 0; i < size; i++)
		cout << arr[i] << " ";
	cout << endl;
}




int main()
{
	//	int arr[] = { 64, 25, 12, 22, 11 };

	//	int arr[] = { 2, 3, 7, 22, 17,5,4,6 ,1};

	//int arr[] = { 17, 3, 7, 500, 1,50,4,200 ,103 };
	int arr[] = {10,9,8,7,6,5,4,3,2,1 };

	int n = sizeof(arr) / sizeof(arr[0]);

	selectionSort(arr, n);
	cout << "Sorted array: \n";
	printArray(arr, n);


	system("pause");
	return 0;
}