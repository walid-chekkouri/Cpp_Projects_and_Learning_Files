#include<iostream>

int binarySearchIterative(int arr[], int l, int r, int x);
int binarySearchRecursive(int arr[], int l, int r, int x);

//Time Complexity of the binary search: T(n)=T(n/2)+T(T/4)+...+T(1)
//In the case below we'll have 5*((1/2)^k)=1. with k=number of times we divided by 2, in this case k=2.
//=>n*(1/(2^k))=1.
//=>Multiplying both sides by 2^k we get, (2^k) * (n/(2^k))=2^k.=>n=2^k
//a Logarithm is: A quantity representing the power to which a fixed number (the base) must be raised to produce a given number.
//So=> LogBase2(n)~=k.

//Binary Search: O(Log n).

int main()
{
	int arr[] = { 2, 3, 4, 10, 40 }; //needs to be a sorted array
	int n = sizeof(arr) / sizeof(arr[0]);
	int x = 10;
	int result = binarySearchRecursive(arr, 0, n - 1, x);

	(result == -1) ? printf("Element is not present in array"): printf("Element is present at ""index %d \n",result);

	system("pause");
	return 0;
}

int binarySearchIterative(int arr[], int start, int end, int x)//Iterative implementation of Binary Search
{
	while (start <= end) {
		int middle = start + (end - start) / 2;
		
		// Check if x is present at mid 
		if (arr[middle] == x)
			return middle;

		// If x greater, ignore left half 
		if (arr[middle] < x)
			start = middle + 1;

		// If x is smaller, ignore right half 
		else
			end = middle - 1;
	}

	// if we reach here, then element was 
	// not present 
	return -1;
}

int binarySearchRecursive(int arr[], int start, int end, int x)//Recursive implementation of Binary Search
{
	if (end >= start) {
		int mid = start + (end - start) / 2;
		std::cout << "dived by 2 \n";//testing how many times we divided by 2.
		// If the element is present at the middle 
		// itself 
		if (arr[mid] == x)
			return mid;

		// If element is smaller than mid, then 
		// it can only be present in left subarray 
		if (arr[mid] > x)
			return binarySearchRecursive(arr, start, mid - 1, x);

		// Else the element can only be present 
		// in right subarray 
		return binarySearchRecursive(arr, mid + 1, end, x);
	}

	// We reach here when element is not 
	// present in array 
	return -1;
}