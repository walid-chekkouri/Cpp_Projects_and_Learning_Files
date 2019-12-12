#include<iostream>
using namespace std;
void passByValue(int x);
void passByReference(int *x);

int main()
{
	int amine = 13;
	int ahmed = 13;

	passByValue(amine);
	passByReference(&ahmed);

	cout << "Amine is: " << amine<<endl;
	cout << "Ahmed is: " << ahmed << endl;// Its value has changed now.

	system("pause");
}

void passByValue(int x){
	x = 99;
}

void passByReference(int *x){

	*x = 66;

}