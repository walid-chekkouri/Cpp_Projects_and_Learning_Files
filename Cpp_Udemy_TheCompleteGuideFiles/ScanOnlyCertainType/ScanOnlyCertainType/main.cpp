#include <iostream> 
#include <vector> 
using namespace std;



int main()
{
	std::vector <double>temps;

	for (double temp; cin >> temp; ) // read into temp all entered double values
		temps.push_back(temp); // put temp into vector 


	for (double i : temps)
		std::cout << i << std::endl;

	system("pause");
	return 0;
}

