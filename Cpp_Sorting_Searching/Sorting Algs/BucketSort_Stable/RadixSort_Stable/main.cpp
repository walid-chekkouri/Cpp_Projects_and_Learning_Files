#include <iostream> 
#include <algorithm> 
#include <vector> 
using namespace std;

const int N = 8;

// Function to sort arr[] of size n using bucket sort 
void bucketSort(float arr[])
{
	// 1) Create n empty buckets 
	vector<float> b[N];

	// 2) Put array elements in different buckets 
	for (int i = 0; i < N; i++)
	{
		int bi = N * arr[i]; // Index in bucket 
		b[bi].push_back(arr[i]);
	}

	// 3) Sort individual buckets 
	for (int i = 0; i < N; i++)
		sort(b[i].begin(), b[i].end());

	// 4) Concatenate all buckets into arr[] 
	int index = 0;
	for (int i = 0; i < N; i++)
		for (int j = 0; j < b[i].size(); j++)
			arr[index++] = b[i][j];
}


void showArray(float arr[])
{
	
	for (int i = 0; i < N; i++)
		cout << arr[i] << " ";
}

/* Driver program to test above funtion */
int main()
{
	float arr[] = { 0.897, 0.565, 0.656, 0.1234, 0.665, 0.3434, 0.333331, 0.33333 };
	
	bucketSort(arr);
	cout << "Sorted array is \n";
	showArray(arr);
	
	
	

	system("pause");
	return 0;
}