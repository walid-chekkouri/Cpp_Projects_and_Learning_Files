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
	//constructor
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

//Stable Selection Sort
void stableSelectionSort(Person a[], int n)
{
	// Iterate through array elements 
	for (int i = 0; i < n - 2; ++i)
	{

		// Find minimum element
		int X = min_element(a + i, a + n) - a;

		Person key = a[X];

		while (X > i)
		{

			a[X] = a[X - 1];
			X--;
		}
		// Move minimum element at current i. 
		a[i] = key;
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

	stableSelectionSort(a, n);
	printArray(a, n);


	system("pause");
	return 0;
}