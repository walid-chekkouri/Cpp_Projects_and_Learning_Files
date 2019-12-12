#include <iostream>
using namespace std;

int main(){
	
	int N;
	cout << "Array max Number: "<< endl;
	cin >> N;

	int * Tab = new int[N];

	for (int i = 0; i < N; i++)
		cin >> Tab[i];
	cout << "-------Your array-------" << endl;
	for (int i = 0; i < N; i++)
		cout << Tab[i] << endl;

	delete[] Tab;

	system("pause");


}