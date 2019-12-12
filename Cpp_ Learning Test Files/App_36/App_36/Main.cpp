#include <iostream>
#include <fstream>
using namespace std;

int main(){

	ofstream myFileStream("myFile.txt");// without the need to use myFileStream.open("myFile.txt");
	

	if (myFileStream.is_open())// if the object is associated with out file
		{
			cout << "The file is indeed open !" << endl;
		}else{ cout << "The file is NOT open !!" << endl; }


	myFileStream << "I love you \nYou love me !";
	myFileStream.close();// Important to free the memory at the end of the program



	system("pause");
	return 0;
}