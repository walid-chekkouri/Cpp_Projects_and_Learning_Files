#include <iostream>
#include"Cat.h"
using namespace std;




int main(){

	Cat cat1("Loula", 2);
	Cat cat2("Dori", 1);
	Cat cat3;

	cat1.Introduce();
	cat2.Introduce();
	cat3.Introduce();

	cout<<cat2.getN() << endl;
	system("pause");
	return 0;
}