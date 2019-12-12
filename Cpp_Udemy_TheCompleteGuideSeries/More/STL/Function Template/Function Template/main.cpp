#include<iostream>
#include<string>
#include<vector>

using namespace std;

template <typename T>
T min(T& a, T& b)
{
	return (a < b) ? a : b;
}

template<class T1, class T2>
void func(T1& a, T2& b)
{
	std::cout << a << " " << b << std::endl;
}


struct Person
{
	std::string name;
	int age;
	bool operator < (const Person& rhs)const
	{
		return this->age < rhs.age;
	}
};

std::ostream& operator<<(std::ostream& os, const Person& p)
{
	os << p.name;
	return os;
}



int main()
{
	int myInt1 = 5;
	int myInt2 = 10;

	func(myInt1, myInt2);


	Person p1{ "Bob", 20 };
	Person p2{ "John", 30 };

	Person p3{ min(p1, p2) };
	std::cout << p3.name << " is younger\n";

	func(p1, p2);


	system("pause");
	return 0;
}