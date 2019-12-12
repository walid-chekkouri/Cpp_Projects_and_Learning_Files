#include <iostream>
#include <algorithm>
#include <vector>
//Functors = Functions as objects.

using namespace std;

//sort and find is by default made by age.
struct Dog
{
	Dog(int age, int weight) :m_age(age), m_weight(weight) {}

	bool operator<(Dog const& other) const //now with this operator we can safely sort.
	{
		return m_age < other.m_age;
	}

	bool operator==(int age) const// so we can find age
	{
		return m_age == age;
	}

private:
	int m_age;
	int m_weight;
public:
	int getAge()const { return m_age; }
	int getWeight()const { return m_weight; }
};


struct SortByWeightFunctor
{
	bool operator()(Dog const& dog1, Dog const& dog2) const
	{
		return dog1.getWeight() < dog2.getWeight();
	}
};

struct FindByWeightFunctor
{
	FindByWeightFunctor(int weight) :m_weight(weight) {}

	bool operator()(Dog const& dog) const
	{
		return m_weight == dog.getWeight();
	}
	int m_weight;
};

int main()
{

	vector<Dog> v = { Dog(3, 100),Dog(1,70), Dog(5,60),Dog(2,40), Dog(4,50) };


	//sorting by age:
	sort(begin(v), end(v));//normally it can't sort these Dogs objects.Unless we create an operator <.(when having only one member variable for Dog)
	//since we have more than one member variable we have to do the following

	for (auto const& value : v)
		std::cout << value.getAge() << "\n";


	//sorting by weight:
	sort(begin(v), end(v), SortByWeightFunctor());//the SortByWeightFunctor() parantheses are for the constructor not the operator!!

	for (auto const& value : v)
		std::cout << value.getWeight() << "\n";




	auto found = find_if(begin(v), end(v), FindByWeightFunctor(40));
	std::cout << "Found weight: " << (*found).getWeight() << "\n";

	found = find(begin(v), end(v), 3);//by default the search is made by age.
	std::cout << "Found age: " << (*found).getAge() << " it has a weight of: " << (*found).getWeight() << "\n";


	system("pause");
	return 0;
}
