#include<iostream>

using namespace std;

int factorialCalc(int x)// recursive function
{
	if (x == 1){ return 1; }// Our Base Case.
	else{ return x*factorialCalc(x - 1); }

}


int main(){
	
	cout<<factorialCalc(5)<<endl;

	system("pause");

	return 0;
}
