#include<iostream> 
using namespace std;

/*
3D Array example (with: 4*3*2=24 elements):

int test[2][3][4] = {
{ {3, 4, 2, 3}, {0, -3, 9, 11}, {23, 12, 23, 2} },
{ {13, 4, 56, 3}, {5, 9, 3, 5}, {3, 1, 4, 9} }
};

*/


int main()
{
	// an array with 3 rows and 2 columns. 
	int x[3][2] = { { 0, 1 }, { 2, 3 }, { 4, 5 } }; //3*2=6 elements

	//outputting each array element's value 
	for (unsigned int i = 0; i < 3; i++)
	{
		for (unsigned int j = 0; j < 2; j++)
		{
			cout << "Element at x[" << i
				<< "][" << j << "]: ";
			cout << x[i][j] << endl;
		}
	}



	system("pause");
	return 0;
}