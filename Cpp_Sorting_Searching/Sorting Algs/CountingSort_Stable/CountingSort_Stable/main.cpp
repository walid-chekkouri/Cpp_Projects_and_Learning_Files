#include<iostream>

using namespace std;

//In this example of counting sort works only with positive numbers
//0<= a[i] >=k. k is the range of elements.
//Time Complexity: O(n+k) where n is the number of elements in input array and k is the range of input.
//Auxiliary Space : O(n + k)
//it can not be applied for floats, or the values are different in any range, ex: {564,0,999,1111,10000,7}, for this we should use radix sort instead.
/*NB:
Its running time is linear in the number of items and the difference between the maximum and minimum key values,
so it is only suitable for direct use in situations where the variation in keys is not significantly greater than the number of items.
Non comparison sorting algorithm.
Inplace=False.
*/
const int K = 9;
const int N = 17;

void countSort(int (&a)[N])
{
	
	int b[N] = { 0 };

	int count[K + 1] = {0};//every element is initialized to 0.
		//Take a count array to store the count of each unique object.
	for (int i = 0; i < N; i++)
	{
		++count[a[i]];
	}
		/*Modify the count array such that each element at each index
		stores the sum of previous counts.*/
	for (int i = 1;i <= K; i++)
	{
		count[i] += count[i - 1];
	}

		//build output array
	//to maintain stability we start from the end of the array.
	for (int i = N - 1; i >= 0; i--)
	{
		b[--count[a[i]]] = a[i];
	}

		//copy sorted values to the original array
	for (int i = 0; i <N; i++)
	{
		a[i] = b[i];
	}

}


void printArray(int (&a)[N])
{

	for (int i = 0; i < N; i++)
	{
		cout << a[i] << " " << endl;
	}

}


int main()
{
	
	
	int a[N] = { 2,1,1,0,2,5,4,0,2,8,7,7,9,2,0,1,9 };

	countSort(a);//array is passed by reference here.


	cout << "Sorted Array: " << endl;
	printArray(a);


	system("pause");
	return 0;
}