#include <iostream>
#include <fstream>
#include <string> 
using namespace std;

int main(){

	ofstream myFileO("myTextFile.txt");
	cout << "Enter your ID, name and cash: " << endl;
	cout << "Press Ctrl+Z to quit "<<endl;

	int id;
	string name;
	double cash;

	while (cin >> id >> name >> cash){

		myFileO << id << " " << name << " " << cash << endl;

	}

	ifstream myFileI("myTextFile.txt");

	cout << "-------------------------" << endl;

	string textFile;

	while (!myFileI.eof()) {


		myFileI >> textFile;
		cout << textFile;


	}

	while (myFileI>>id>>name>>cash){
	
		cout <<id << ", " << name<<", "<<cash<< endl;
	}

	myFileI.close();
	myFileO.close();

	system("pause");
	return 0;
}