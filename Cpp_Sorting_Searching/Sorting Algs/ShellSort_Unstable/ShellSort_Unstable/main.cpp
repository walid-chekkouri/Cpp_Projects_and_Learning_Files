#include <iostream> 

using namespace std;

/*
TIME complexity:
Time complexity of above implementation of shellsort is O(n2).The complexity depends on the gap taken (in this exemple we took gap =N/2)
In the above implementation gap is reduce by half in every iteration.
There are many other ways to reduce gap which lead to better time complexity.
*/


const int N = 9;

void swap(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}

void shellSort(int(&a)[9])
{
	// Start with a big gap, then reduce the gap  
	for (int gap=(N/2); gap>=1; gap /= 2)
	{
		for (int j=gap;j<N;j++)
		{
			for (int i=j-gap;i>=0;i-=gap)
			{
				if (a[i + gap] > a[i])
				{
					break;
				}
				else
				{
					swap(a[i + gap], a[i]);
				}
			}

		}
	}
}



void showArray(int a[])
{
	for (int i=0;i<N;i++)
	{
		cout << a[i]<< endl;
	}
}

int main()
{

	int a[]{23,7,9,19,31,29,15,5,2};
	

	cout << "Sorted Array: " << endl;
	shellSort(a);
	showArray(a);


	system("pause");
	return 0;
}