#include<iostream>
#include<math.h>

using namespace std;
int main(){
	float amount;
	float test = 5;
	float principal = 10000;// Start with 10 000.
	float rate = .01f; // Rate: 1%.

	for (int day = 1; day <= 30; day++){

		amount = principal*pow(1 + rate, day);
		cout << "Day: " << day << " Amount: " << amount << endl;
	}
	system("pause");





		return 0;
	}