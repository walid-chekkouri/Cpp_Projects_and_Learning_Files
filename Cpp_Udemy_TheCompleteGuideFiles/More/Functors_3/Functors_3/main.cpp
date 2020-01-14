#include <iostream>
#include <algorithm>
#include <vector>
#include <utility>
//Functors = Functions as objects.

using namespace std;

template <typename T>
struct MatchFirstFunctor
{
	MatchFirstFunctor(T const& t) :m_t(t) {}

	template <typename U>
	bool operator()(U const& pair) //this line used to be: bool operator()(pair<int, bool> const& pair)
	{
		return pair.first == m_t;
	}
	T m_t;
};

int main()
{

	vector<pair<int, bool>> v1 = { make_pair(1, true),make_pair(2, false) };
	vector<pair<bool, float>> v2 = { make_pair(true, 1.f),make_pair(false, 2.f) };

	//find(begin(v), end(v), make_pair(1, true)); //find a pair that is (1, true);

	auto found = find_if(begin(v1), end(v1), MatchFirstFunctor<int>(2));//find any pair that has a first of 2.this line used to be: auto found = find_if(begin(v1), end(v1), MatchFirstFunctor(2))
	std::cout << (*found).first << " | " << (*found).second << "\n";

	auto found2 = find_if(begin(v2), end(v2), MatchFirstFunctor<bool>(true));
	std::cout << (*found2).first << " | " << (*found2).second << "\n";

	system("pause");
	return 0;
}
