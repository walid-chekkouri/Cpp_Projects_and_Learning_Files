#include <iostream>
#include"MyC.h"
using namespace std;

int main(){
	MyC myclass1(30);
	MyC myclass2(75);
	MyC myclassS;

	myclassS = myclass1 + myclass2;
	

	cout << myclassS.nb << endl;
	system("pause");
	return 0;
}
