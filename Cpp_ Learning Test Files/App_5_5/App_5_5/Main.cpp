#include<iostream>
using namespace std;
int main(){
	int age;
	cout << "Enter your age please: " << endl;
	cin >> age;
	switch ((age-1)/10){
	
	case 0:
			cout << "You're still a kid!!" << endl;// 1 - 10
			break;
	case 1:
		cout << "Awesome, now you're growing" << endl;// 11 - 20
		break;
	default:
		cout << "MAN!" << endl;// 21 - n
		break;
	
	}

	system("pause");

	return 0;
}