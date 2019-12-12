#include<iostream>
using namespace std;

template <class any>// generic type of data

any addition(any a, any b){ return a + b; }


int main(){
	double d1 = 30.3, d2 = 10.4, sumd;
	int nb1 = 10, nb2 = 20, sum;
	sumd = addition(d2, d1);

	cout << sumd << endl;
	system("pause");

	return 0;
}