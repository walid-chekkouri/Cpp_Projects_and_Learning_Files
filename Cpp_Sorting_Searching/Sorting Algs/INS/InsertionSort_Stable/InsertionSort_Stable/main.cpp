#include <iostream> 
#include <string> 
#include <algorithm>
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

};

//Overload << operator
ostream& operator << (ostream& out, const Person& p)
{
	out << "| " << p.name << " " << p.age << endl;
	return out;
}

//Stable Insertion Sort
void StableInsertionSort(Person a[], int n)
{
	int i, j;
	Person key;
	for (i = 1; i < n; i++)
	{
		key = a[i];
		j = i - 1;
		/* Move elements of arr[0..i-1], that are
		greater than key, to one position ahead
		of their current position */
		while (j >= 0 && a[j] > key)
		{
			a[j + 1] = a[j];
			j = j - 1;
		}
		a[j + 1] = key;
	}

}

void printArray(Person a[], int n)
{
	for (int i = 0; i < n; i++)
		cout << a[i];

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

	StableInsertionSort(a, n);
	printArray(a, n);


	system("pause");
	return 0;
}