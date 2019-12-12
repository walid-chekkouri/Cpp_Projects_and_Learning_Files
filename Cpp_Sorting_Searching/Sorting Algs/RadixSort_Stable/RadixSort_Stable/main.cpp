#include<iostream> 
#include <vector> 
using namespace std;

//Time complexity of radix sort: O(d*(N+K)); //d is number of digits. in this exemple d=10.



int const N = 10;


// A utility function to get maximum value in arr[] 
int getMax(int arr[])
{
	int mx = arr[0];

	for (int i = 1; i < N; i++)
		if (arr[i] > mx)
			mx = arr[i];

	return mx;
}



void countSort(int(&a)[N],int K)
{
	vector<int> b(a, a + N);
	vector<int> count(10);//every element is initialized to 0. 10 because we have a range of 0-10 of integers.

	
		//Take a count array to store the count of each unique object.
	//this loop is modified to work with radix sort.
	for (int i = 0; i < N; i++)
	{
		++count[(a[i] / K) % 10];
	}
		/*Modify the count array such that each element at each index
		stores the sum of previous counts.*/
	for (int i = 1; i < 10; i++)
	{
		count[i] += count[i - 1];
		
	}

		//build output array
		//to maintain stability we start from the end of the array.
	//this loop is modified to work with radix sort.
	for (int i = N - 1; i >= 0; i--)
	{
		b[--count[(a[i] / K) % 10]] = a[i];
	}

	//copy sorted values to the original array
	for (int i = 0; i < N; i++)
	{
		a[i] = b[i];
	}

}



void radixSort(int (&a)[N])
{
	int max = getMax(a);
	
	for (int pos=1;(max/pos)>0;pos*=10)
	{
		countSort(a, pos);
		

	}

}


void showArray(int a[])
{

	for (int i=0; i<N; i++)
	{
		
		cout << a[i] << endl;
	}
}

int main()
{

	int a[] = {432,8,539,90,88,231,11,45,677,199};

	radixSort(a);

	cout << "Sorted array: " << endl;
	showArray(a);

	system("pause");
	return 0;
}