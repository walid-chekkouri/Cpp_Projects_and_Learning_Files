#include <iostream>
#include "MyClass.h"
#include <vector>
using namespace std;

class classP{
public:
	int x = 20;
	classP(){}

	void showIt(){
		cout << " Showed: " << x << endl;

	}

};

class class2: public classP{
public:
	int x = 20;
	class2(){}

	void showIt(){
		cout <<" Showed: " << x<<endl;
	
	}

};



int main(){

	MyClass obj1;
	MyClass obj2(30,70);

	obj1.printSmth();
	obj2.printSmth();

	class2 css2;
	cout <<endl <<" CSS: "<<css2.x << endl;

	vector<int> monNom;
	monNom.push_back(5);
	monNom.push_back(8);
	monNom.push_back(3);
	monNom.pop_back();

	for (int i = 0; i < monNom.size(); i++){
		cout << monNom[i] << endl;
	
	}

	cout << "---------------------" << endl;

	int firstvalue=6, secondvalue=19;
	int * mypointer;

	mypointer = &firstvalue;

	cout << "Pointer: "<< *mypointer << endl;
	system("pause");
	return 0;
}