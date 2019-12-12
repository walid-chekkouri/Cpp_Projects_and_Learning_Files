#include <iostream>
#include <windows.h>
#include <string>
#include <cmath>
#include <ctime>
#include <cstdlib>

using namespace std;

int Sum(int n1, int n2){
	int res=0;
	res = n1 + n2;
	return res;
}




void StartProgram(string filename);
void Printer(string name);
int main(){
	/*int a, b;
		
	Printer("Ahmed");
	//StartProgram("mspaint");
	cout << "Enter number1: "<< endl;
	cin >> a;
	cout << "Enter number2: " << endl;
	cin >> b;

	cout<<"The sum of your numbers is: "<<Sum(a,b)<<endl;
	*/

	const double PI = 3.14159;
	string ny;
	int numb;
	int randnum;
	srand(time(NULL));
	
	cout << "Would you like to play a game?" << endl; cin >> ny;
	if (ny == "n"|| ny == "N" ){
		return 0;
		
	}
	
	while (ny == "y" || ny == "Y"){
		randnum = rand() % 6;
		cout << "The computer will guess a number from 0 to 5, try to find it" << endl; cin >> numb;
		
		if (numb == randnum){
			cout << "Great guess" << endl;
		}
		else if(numb==-1){
			break;
		
		}
		else{
			cout << "Nope, the computer guessed: " << randnum<<endl;
		}

	}
	cout << "GameOver" <<endl ;
		system("pause");
	return 0;
}

void StartProgram(string filename){
	//Command to run an external program from windows.
	ShellExecute(NULL, "open", filename.c_str(), NULL, NULL, SW_SHOWNORMAL);


}

void Printer(string name){
	cout << "Your name is: " << name << endl;


}
