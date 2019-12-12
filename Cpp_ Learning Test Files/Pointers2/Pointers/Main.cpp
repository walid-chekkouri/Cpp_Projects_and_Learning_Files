#include <iostream>

using namespace std;

void changer(int *nb1, int *nb2){

	*nb1 = 20;
	*nb2 = 30;

}


int main(){

	int walid = 5;
	int walidou = 10;
	int *P1 = &walid;
	int *P2 = &walidou;



	changer(P1, P2);

	cout << "value of walid is: " << walid << endl;
	cout << "value of walidou is: " << walidou << endl;



	system("pause");


	return 0;
}