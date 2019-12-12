#include <iostream>
using namespace std;

int main(){

	try{
		int nb1;
		cout << "Enter 1 number: " << endl;
		cin >> nb1;

		int nb2;
		cout << "Enter 1 number: " << endl;
		cin >> nb2;

		if (nb2 == 0) throw 0;

		cout << "Result: " << nb1 / nb2 << endl;

	}catch (...){// ... means any error type (all encompassing)
	
		cout << "You can't divide by 0 !" << endl;
	}

	system("pause");
	return 0;
}