#include<iostream>
using namespace std;

#define NO

int main(){
#ifdef YES
	int i;
#else
	int x=0;
#endif
	//cout << i << endl;
	cout << x << endl;

#ifndef YES
#define HELLO
#endif

#ifdef HELLO
		cout << "Hello" << endl;
#endif


		system("pause");
	return 0;
}