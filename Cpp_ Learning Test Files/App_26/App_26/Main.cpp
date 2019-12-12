#include<iostream>
#include "Mother.h"
#include "Daughter.h"
using namespace std;
int main(){

	//Mother m1; 
	//m1.showName();

	Daughter d1; 
	d1.showName();
	d1.showSmth();
	Daughter *pD = &d1;
	delete pD;

	system("pause");
	return 0;
}