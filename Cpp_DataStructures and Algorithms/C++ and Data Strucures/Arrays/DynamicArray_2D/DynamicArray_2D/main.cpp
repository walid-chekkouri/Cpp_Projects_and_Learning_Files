#include <iostream> 
using namespace std;

//Dynamic 2d array Implementation

int main()
{
	int rowCount = 3;
	int colCount = 4;

	//dynamic allocation
	int** a = new int* [rowCount];
	for (int i = 0; i < rowCount; ++i)
		a[i] = new int[colCount];

	//fill
	for (int i = 0; i < rowCount; i++)
		for (int j = 0; j < colCount; j++)
			a[i][j] = i;


	//print
	for (int i = 0; i < rowCount; i++)
		for (int j = 0; j < colCount; j++)
			std::cout << a[i][j] << "\n";

	//free
	for (int i = 0; i < rowCount; i++)
		delete[] a[i];
	delete[] a;





	system("pause");
}

