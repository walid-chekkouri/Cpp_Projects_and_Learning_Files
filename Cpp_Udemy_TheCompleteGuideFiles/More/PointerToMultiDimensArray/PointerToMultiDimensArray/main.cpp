#include <iostream> 
#include <string> 

using namespace std;



// Driver code 
int main()
{
	const int x = 2;
	const int y = 3;
	const int z = 4;
	int array[x][y][z] =
	{
	  {
		  {0,1,2,3}, {4,5,6,7}, {8,9,10,11}
	  },
	  {
		  {12,13,14,15}, {16,17,18,19}, {20,21,22,23}
	  }
	};

	int* p;
	for (p = &array[0][0][0]; p <= &array[x - 1][y - 1][z - 1]; p++)
		cout << *p << endl;

	system("pause");
	return 0;
}


