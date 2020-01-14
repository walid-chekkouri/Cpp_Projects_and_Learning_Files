#include<iostream>
#include<string>
#include<vector>

using namespace std;

template<typename T>
class Item
{
private:
	std::string name;
	T value;
public:
	Item(std::string name, T value) :name{ name }, value{ value }
	{}
	std::string getName() const { return name; }
	T getValue()const { return value; }

};

template<typename T1, typename T2>
struct MyPair
{
	T1 first;
	T2 second;

};


int main()
{

	Item<int> item1{ "Bob", 100 };
	std::cout << item1.getName() << " " << item1.getValue() << std::endl;

	Item<std::string> item2{ "Bob","Professor" };
	std::cout << item2.getName() << " " << item2.getValue() << std::endl;

	Item<Item<std::string>> item3{ "Bob", {"c++", "example"} };
	std::cout << item3.getName() << " "
		<< item3.getValue().getName() << " "
		<< item3.getValue().getValue() << std::endl;
	std::cout << "===========================================\n";

	std::vector<Item<double>> vec{};
	vec.push_back(Item<double>("Larry", 100.0));
	vec.push_back(Item<double>("Josh", 200.0));
	vec.push_back(Item<double>("Mike", 400.0));

	for (const auto& item : vec)
	{
		std::cout << item.getName() << " " << item.getValue() << std::endl;
	}
	std::cout << "===========================================\n";
	MyPair<std::string, int> p1{ "Frank", 100 };
	MyPair<int, double> p2{ 156, 104.76 };

	std::cout << p1.first << ", " << p1.second << std::endl;
	std::cout << p2.first << ", " << p2.second << std::endl;


	system("pause");
	return 0;
}