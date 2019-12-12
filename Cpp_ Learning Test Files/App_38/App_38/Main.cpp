#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int getwhatTheyWant();// prototype
void displayItems(int x);


// The Main Function
int main(){

	int whatTheyWant;
	do {
		whatTheyWant = getwhatTheyWant();
		displayItems(whatTheyWant);
	} while (whatTheyWant != 4);

	return 0;
}

// The Get WhatTheyWant Function
int getwhatTheyWant(){
	int choice;


	cout << "1 - just a plain items" << endl;
	cout << "2 - helpful items" << endl;
	cout << "3 - harmful items" << endl;
	cout << "4 - quit program" << endl;
	cin >> choice;

	return choice;

}

//The DisplayItems

void displayItems(int x){
	ifstream fileObj("textFile.txt");
	string name; double power;

	if (x == 1){
		while (fileObj >> name >> power){
			if (power==0){
			
				cout << name << " " << power << endl;
			}
		}
	
	
	}
	if (x == 2){
		while (fileObj >> name >> power){
			if (power > 0){

				cout << name << " " << power << endl;
			}
		}


	}
	if (x == 3){
		while (fileObj >> name >> power){
			if (power < 0){

				cout << name << " " << power << endl;
			}
		}


	}

}