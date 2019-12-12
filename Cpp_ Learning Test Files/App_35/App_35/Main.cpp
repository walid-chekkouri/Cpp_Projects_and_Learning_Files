#include <iostream>
#include <fstream>
using namespace std;

int main(){

	ofstream myFileStream;
	myFileStream.open("myTextFile.txt");
	myFileStream << "Hello my name is Walid \nI am 20 years old !";
	myFileStream.close();// Important to free the memory at the end of the program
	
	system("pause");
	return 0;
}