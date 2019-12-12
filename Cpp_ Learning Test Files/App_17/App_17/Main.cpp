#include <iostream>
#include <string>
#include <array>
#include <iterator>
using namespace std;
void printArray(int myArray[], int size);//Make sure now it knows my bottom function.
int main(){

	int array1[5] = { 30, 40, 50, 60, 70 };
	int array2[3] = { 10, 20, 30};

	printArray(array1, 5);
	printArray(array2, 3);

	system("pause");
	return 0;
}
void printArray(int myArray[], int size){
	for (int x = 0; x < size; x++)
	{
		cout << myArray[x] << endl;
	}

}