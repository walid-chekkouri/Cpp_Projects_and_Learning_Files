#include <iostream> 
using namespace std;

//Dynamic 1d array Implementation

int main()
{

	int* p, * q;
	int n = 5;
	int m = 10;
	p = new int[n];
	q = new int[m];

	p[0] = 4;
	p[1] = 9;
	p[2] = 2;
	p[3] = 8;
	p[4] = 7;

	cout << "@p: " << p << endl;
	for (int i = 0; i < n; i++)
		cout << p[i] << endl;

	//assign the values of p to q
	for (int i = 0; i < n; i++)
		q[i] = p[i];

	delete[]p;
	p = q;//p points now to q
	q = NULL;//q no more points to our array.



	cout << "@p: " << p << endl;
	for (int i = 0; i < n; i++)
		cout << p[i] << endl;

	system("pause");
}

