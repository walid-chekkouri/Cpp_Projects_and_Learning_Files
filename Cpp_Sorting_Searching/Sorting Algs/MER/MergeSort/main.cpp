#include<iostream>
using namespace std;

class Person
{
	friend ostream& operator << (ostream& out, const  Person& c);
private:
	int age;
	string name;

public:
	//constructor
	Person(int ageVal, string nameVal)
		:age{ 0 }, name{ "Unnamed" }
	{
		age = ageVal;
		name = nameVal;
	}
	Person()
	{
		age = 0;
		name = "Unnamed";
	}



	int getAge()const
	{
		return age;
	}
	string getName()const
	{
		return name;
	}

	// overloaded > operator
	bool operator >(const Person& p)
	{
		if (age > p.age)
			return true;

		return false;
	}
	// overloaded > operator
	bool operator <(const Person& p)
	{
		if (age < p.age)
			return true;

		return false;
	}
	// overloaded > operator
	bool operator <=(const Person& p)
	{
		if (age <= p.age)
			return true;

		return false;
	}

};

//Overload << operator
ostream& operator << (ostream& out, const Person& p)
{
	out << "| " << p.name << " " << p.age << endl;
	return out;
}


// Merges two subarrays of arr[]. 
// First subarray is arr[l..m] 
// Second subarray is arr[m+1..r] 
void merge(Person arr[], int l, int m, int r)
{
	int n = r - l + 1;
	Person* b = new Person[n];
	int left = l, right = m + 1, bIdx = 0;
	while (left <= m && right <= r)
	{
		if (arr[left] <= arr[right])
			b[bIdx++] = arr[left++];
		else
			b[bIdx++] = arr[right++];
	}

	//Remaining items are copied to b[].
	while (left <= m)
		b[bIdx++] = arr[left++];
	while (right <= r)
		b[bIdx++] = arr[right++];

	for (int k = 0; k < n; k++)
		arr[l + k] = b[k];

	delete[] b;//free allocated memory.

}

/* l is for left index and r is right index of the
   sub-array of arr to be sorted */
void mergeSort(Person arr[], int l, int r)
{
	if (l < r)
	{
		// Same as (l+r)/2, but avoids overflow for 
		// large l and h 
		int m = l + (r - l) / 2;


		// Sort first and second halves 
		cout << "Left " <<m << endl;
		mergeSort(arr, l, m);

		cout << "Right " << m<< endl;
		mergeSort(arr, m + 1, r);

		cout << "Parent " << m<< endl;
		merge(arr, l, m, r);
		
	}
}

/* UTILITY FUNCTIONS */
/* Function to print an array */
void printArray(Person A[], int size)
{
	int i;
	for (i = 0; i < size; i++)
		cout << A[i];
}

/* Driver program to test above functions */
int main()
{
	Person p1(4, "Pierre");
	Person p2(5, "John");
	Person p3(3, "Paul");
	Person p4(2, "Bob");
	Person p5(4, "Hunter");
	Person p6(4, "Mike");
	Person p7(1, "Lita");
	Person p8(3, "Steph");

	Person a[] = { p1,  p2,  p3,  p4,  p5,  p6, p7, p8 };
	int n = sizeof(a) / sizeof(a[0]);

	printf("Given array is \n");
	printArray(a, n);

	mergeSort(a, 0, n - 1);

	printf("\nSorted array is \n");
	printArray(a, n);

	system("pause");
	return 0;
}


/*Same as (l+r)/2, but avoids overflow for
		 large l and h
		the operation (low+high) exceeds what a integer can hold.
		Due to this it is not safe to add two numbers and one should consider the overflow cases if you are doing so.
		Instead, you can use  mid = low + (high - low) / 2;
		
		Other way to merge:

/*

		void merge(int arr[], int l, int m, int r)
{
	int i, j, k;
	int n1 = m - l + 1;
	int n2 =  r - m;

	/ * create temp arrays * /
int L[n1], R[n2];

/ * Copy data to temp arrays L[] and R[] * /
for (i = 0; i < n1; i++)
	L[i] = arr[l + i];
for (j = 0; j < n2; j++)
	R[j] = arr[m + 1 + j];

/ * Merge the temp arrays back into arr[l..r]* /
i = 0; // Initial index of first subarray 
j = 0; // Initial index of second subarray 
k = l; // Initial index of merged subarray 
while (i < n1&& j < n2)
{
	if (L[i] <= R[j])
	{
		arr[k] = L[i];
		i++;
	}
	else
	{
		arr[k] = R[j];
		j++;
	}
	k++;
}

/ * Copy the remaining elements of L[], if there
   are any * /
while (i < n1)
{
	arr[k] = L[i];
	i++;
	k++;
}

/ * Copy the remaining elements of R[], if there
   are any * /
while (j < n2)
{
	arr[k] = R[j];
	j++;
	k++;
}
}
*/

		
		