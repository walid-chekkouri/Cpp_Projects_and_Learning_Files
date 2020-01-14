#include <algorithm>
#include <iostream>
// Using tansform() in STL to add two arrays 



using namespace std;

int increment(int x) { return (x + 3); }

int main()
{
	int arr[] = { 1, 2, 3, 4, 5 };
	int n = sizeof(arr) / sizeof(arr[0]);

	// Apply increment to all elements of 
	// arr[] and store the modified elements 
	// back in arr[] 
	transform(arr, arr + n, arr, increment);

	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";

	/*
	we can also chose this way to increment by 1
	Single line code to add arr1[] and arr2[] and
	store result in res[]

	transform(arr1, arr1 + n, arr2, res, plus<int>());
	*/

	system("pause");

	return 0;
}
