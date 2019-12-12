#include <iostream> 
#include <string> 
using namespace std;

//Person
class Person
{
	friend ostream& operator << (ostream& out, const  Person& c);
private:
	int age;
	string name;

public:
	Person()
	{
		age = 0;
		name = "Unamed";
	}
	//overloaded constructor
	Person(int ageVal, string nameVal)
		:age{ 0 }, name{ "Unnamed" }
	{
		age = ageVal;
		name = nameVal;
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

	void operator =(const Person& p)
	{
		age = p.age;
		name = p.name;
	}

};

//Overload << operator
ostream& operator << (ostream& out, const Person& p)
{
	out << "| " << p.name << " " << p.age << endl;
	return out;
}

//Swap Function
void swap(Person* xp, Person* yp)
{
	Person temp = *xp;
	*xp = *yp;
	*yp = temp;
}

// An optimized version of Bubble Sort 
void stableBubbleSort(Person arr[], int n)
{
	int i, j;
	bool swapped;
	for (i = 0; i < n - 1; i++)
	{
		swapped = false;
		for (j = 0; j < n - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				swap(&arr[j], &arr[j + 1]);
				swapped = true;
			}
		}

		// IF no two elements were swapped by inner loop, then break 
		if (!swapped)
			break;
	}
}

/* Function to print an array */
void printArray(Person arr[], int size)
{
	int i;
	for (i = 0; i < size; i++)
		cout << arr[i];
}

// Driver code 
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

	stableBubbleSort(a, n);

	printArray(a, n);



	system("pause");
	return 0;
}