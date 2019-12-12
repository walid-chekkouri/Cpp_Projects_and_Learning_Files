#include <iostream>
using namespace std;
class myClass1{

	int myVar = 5;
public:
	myClass1() {} 

	myClass1(int x){ myVar = x; }

	int getmyVar(){ return myVar; }
	void setmyVar(int y){ myVar = y; }


};

class myClass2{

	int myScore = 10;
	myClass1 class1;
public:
	myClass2() {} 

	myClass2(int x){ myScore = x; }

	int getmyScore(){ return myScore; }
	void setmyScore(int y){ myScore = y; }
	myClass1 getmyClass1(){ return class1; } 


};

int main(){
	int test=  45;
	myClass2 class2;
	class2.getmyClass1().setmyVar(45);
	cout <<test<< endl;

	system("pause");

	return 0;
}