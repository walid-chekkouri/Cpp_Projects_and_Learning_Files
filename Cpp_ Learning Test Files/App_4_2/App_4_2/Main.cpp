#include <iostream>
#include<string>
#include <ctime>
using namespace std;
//int x = 10;//Global x
int main(){
	/*
	int x = 5;//Local x
	cout << "The Global x value is: " <<:: x;//:: when using same named global variable.
	cout <<"\nThe Local x value is: " <<x<<endl;//Remark: to print \n as text we use \\n instead!
	*/
	int matrix[5][5];//The number of elements in this matrix is 5*5=25

	for (int i = 0; i < 5;i++){
	
		for (int j = 0; j < 5; j++){
			cout << "Enter row element : " << i << "and column element: " << j << endl;
			cin >> matrix[i][j];
		}
	
	}
	for (int i = 0; i < 5; i++){

		for (int j = 0; j < 5; j++){

			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}

	

	system("pause");
	return 0;
}
