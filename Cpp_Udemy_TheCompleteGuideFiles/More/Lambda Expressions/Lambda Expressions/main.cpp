#include<iostream>
#include<vector>
#include <ctime>
#include <algorithm>
#include <functional>

// Lambda Expressions make it easy to perform list
	// operations in one line of code. You designate
	// them with []
//Complexity: O(N·log(N)) where N = std::distance(first, last)

std::vector<int> GenerateRandVec(int numOfNums,int min, int max);


int main()
{
	//*************************SORT*************************
	std::vector<int> vecVals = GenerateRandVec(10, 1, 50);
	
	for (auto val : vecVals)
		std::cout << val << "\n";//Display initial vector elements


	std::sort(vecVals.begin(), vecVals.end(), [](int x, int y){return x < y; });//Sort in an Ascending Ordre

	std::cout <<"\n Sorted List: \n";

	for (auto val : vecVals)//Display elements after sorting
		std::cout << val << " End\n";

	std::cout << "N is :"<<std::distance(vecVals.begin(), vecVals.end())<<"\n";


	//*************************COPY_IF*************************
	std::vector<int> initialVecVals = GenerateRandVec(10, 1, 50);
	std::vector<int> evenVecVals;

	std::cout << "\n COPY_IF \n";

	for (auto val : initialVecVals)//Display elements after sorting
		std::cout << val<<"\n";

	std::copy_if(initialVecVals.begin(),
		initialVecVals.end(),
		std::back_inserter(evenVecVals),
		[](int x) {return (x % 2) == 0; });

	std::cout << "\n Even numbers List: \n";
	for (auto val : evenVecVals)//Display elements after sorting
		std::cout << val << " End\n";


	//*************************FOR_EACH (Calculating SUM)*************************

	int sum = 0;

	std::for_each(evenVecVals.begin(),
		evenVecVals.end(),
		[&](int x) {sum += x; });

	std::cout << "\n Sum of even numbers is: " << sum << "\n";

	/*NB: multiplying the elements by 2 and storing them in a new vector
	std::vector<int> doubleVecs;
	std::for_each(evenVecVals.begin(),
	evenVecVals.end(),
		[&](int x) {doubleVecs.push_back(x*2);});
		*/

//*************************MULTIPLE VECTORS MANIPULATION*************************
	std::vector<int> vec1 = { 1,2,3,4,5 };
	std::vector<int> vec2 = { 1,2,3,4,5 };
	std::vector<int> vec3(5);

	std::cout << "\n Vectors addition \n";
	transform(vec1.begin(), vec1.end(),
		vec2.begin(), vec3.begin(),
		[](int x, int y) {return x + y;});
	

		for (auto val : vec3)
			std::cout << val << " End\n";

//*************************Lambda Recursive Function*************************
		std::function<int(int)>Fib =
			[&Fib](int n) {return n < 2 ? n : Fib(n - 1) + Fib(n - 2);};

		std::cout << "Fib 4 = " << Fib(4)<<" \n";

	system("pause");
	return 0;
}

std::vector<int> GenerateRandVec(int numOfNums,
	int min, int max) {
	std::vector<int> vecValues;
	srand(time(NULL));
	int i = 0, randVal = 0;
	while (i < numOfNums) {
		randVal = min + std::rand() % ((max + 1) - min);
		vecValues.push_back(randVal);
		i++;
	}

	return vecValues;
}