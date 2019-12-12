// C++ program for implementation of Heap Sort 
#include <iostream> 

#define MAX 1000 // Max size of Heap 

using namespace std;

// To heapify a subtree rooted with node i which is 
// an index in arr[]. n is size of heap 
void heapify(int arr[], int n, int i)
{
	int largest = i; // Initialize largest as root 
	int l = 2 * i + 1; // left = 2*i + 1 
	int r = 2 * i + 2; // right = 2*i + 2 

	// If left child is larger than root 
	if (l < n && arr[l] > arr[largest])
		largest = l;

	// If right child is larger than largest so far 
	if (r < n && arr[r] > arr[largest])
		largest = r;

	// If largest is not root 
	if (largest != i)
	{
		swap(arr[i], arr[largest]);

		// Recursively heapify the affected sub-tree 
		heapify(arr, n, largest);
	}
}


// Function to heapify ith node in a Heap 
// of size n following a Bottom-up approach 
void heapifyBottomUp(int arr[], int n, int i)
{
	// Find parent 
	int parent = (i - 1) / 2;

	if (arr[parent] > 0) {
		// For Max-Heap 
		// If current node is greater than its parent 
		// Swap both of them and call heapify again 
		// for the parent 
		if (arr[i] > arr[parent]) {
			swap(arr[i], arr[parent]);

			// Recursively heapify the parent node 
			heapifyBottomUp(arr, n, parent);
		}
	}
}

// main function to do heap sort 
void heapSort(int arr[], int n)
{
	// Build heap (rearrange array) 
	for (int i = n / 2 - 1; i >= 0; i--)
		heapify(arr, n, i);

	// One by one extract an element from heap 
	for (int i = n - 1; i >= 0; i--)
	{
		// Move current root to end 
		swap(arr[0], arr[i]);

		// call max heapify on the reduced heap 
		heapify(arr, i, 0);
	}
}

// Function to insert a new node to the Heap 
void insertNode(int arr[], int& n, int Key)
{
	// Increase the size of Heap by 1 
	n = n + 1;

	// Insert the element at end of Heap 
	arr[n - 1] = Key;

	// Heapify the new node following a 
	// Bottom-up approach 
	heapifyBottomUp(arr, n, n - 1);
}

// Function to delete the root from Heap 
void deleteRoot(int arr[], int& n)
{
	// Get the last element 
	int lastElement = arr[n - 1];

	// Replace root with first element 
	arr[0] = lastElement;

	// Decrease size of heap by 1 
	n = n - 1;

	// heapify the root node 
	heapify(arr, n, 0);
}

// A utility function to print array of size n 
void printArray(int arr[], int n)
{
	for (int i = 0; i < n; ++i)
		cout << arr[i] << " ";

	cout << "\n";
}


// Driver program 
int main()
{
	int arr[MAX] = { 10, 5, 3, 2, 4 };
	int n =5;

	//heapSort(arr, n);
	//cout << "Sorted array is \n";
	printArray(arr, n);

	int key = 15;
	insertNode(arr, n, key);
	printArray(arr, n);
	deleteRoot(arr, n);
	printArray(arr, n);

	system("pause");
}

