#include<iostream>
#include<vector>
#include <time.h>


void RandomElem(std::vector<int> &vect)
{
	if (vect.size() > 0)
	{
		//std::cout << vect.size() << std::endl;
		srand(time(NULL)); //initialize the random seed
		int RandIndex = rand() % vect.size(); //generates a random number 
		std::cout << vect.at(RandIndex) << std::endl;
		vect.erase(vect.begin() + RandIndex);
		RandomElem(vect);

	}
}

int main()
{




	std::vector<int> vect{ 10, 20, 30, 40, 50 };

	RandomElem(vect);

	system("pause");
	return 0;
}