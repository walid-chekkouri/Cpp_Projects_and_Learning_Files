#include <iostream>
#include <string>

template <typename T, typename U>

class Person {
public:
	T height;
	U weight;
	static int numOfPeople;
	Person(T h, U w) {
		height = h, weight = w;
		numOfPeople++;
	}
	void GetData() {
		std::cout << "Height : " <<
			height <<
			" and Weight : " <<
			weight << "\n";
	}
};

// You have to initialize static class members
template<typename T, typename U>
int Person<T, U>::numOfPeople = 0;

int main()
{
	// When creating the object you must define the 
   // data types used
	Person<double, int> mikeTyson(5.83, 216);
	mikeTyson.GetData();

	// You access static values using the object
	// and not the class
	std::cout << "Number of people : " <<
		mikeTyson.numOfPeople << "\n";

	system("pause");
	return 0;
}