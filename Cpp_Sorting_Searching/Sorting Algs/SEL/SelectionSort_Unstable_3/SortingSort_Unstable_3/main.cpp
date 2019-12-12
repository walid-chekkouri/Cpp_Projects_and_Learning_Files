#include <iostream> 
#include <string> 
#include <algorithm>
using namespace std;

//Swap Function
void swap(int* xp, int* yp)
{

	int temp = *xp;
	*xp = *yp;
	*yp = temp;

}

//Selection Sort (unstable version)
void selectionSort(int a[], int N)//Total: O(N2)
{
	for (int L = 0; L <= N - 2; ++L)// O(N)
	{
		int X = min_element(a + L, a + N) - a; // O(N). // min_element(a + L, a + N) - a IS EQUIVILENT to: std::distance(a, ymin), with int* ymin = min_element(a + L, a + N).
		swap(a[X], a[L]); // O(1), X may be equal to L (no actual swap)
	}
}

//Print Array Elements
void printArray(int a[], int n)
{
	for (int i = 0; i < n; i++)
		cout << a[i] << endl;

}

// Driver code 
int main()
{
	int a[] = { 2,3,1,5,4 };
	//int a[] = { 10,9,8,7,6,5,4,3,2,1 };
	int n = sizeof(a) / sizeof(a[0]);

	selectionSort(a, n);
	printArray(a, n);



	//Note about subtracting pointers
	int* start = a;
	int* finish = a + (n - 1);
	cout << "Distance between first and last element of the array is: " << finish - start << endl;

	system("pause");
	return 0;
}


/*
For calculating the smallest of all the elements in a given list,
we have std::min, but what if we want to find the smallest not in the whole list,
but in a sub-section of the list. To serve this purpose, we have std::min_element in C++.
*/