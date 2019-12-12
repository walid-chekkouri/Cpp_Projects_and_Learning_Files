#include <iostream>
#include<fstream>
using namespace std;

int main(){
	
	ofstream writer("File3.txt");
	if (writer.is_open()){
		writer << "2" << endl;
		writer << "4" << endl;
		writer << "This is a text" << endl;
		writer << "We created it in VS" << endl;
		writer << "\t\t Thanks." << endl;
		writer.close();

		cout << "File created" << endl;
	}
	else{
		cout << "Error" << endl;
	
	}
	
	ifstream reader("File3.txt");
	int a, b;
	if (reader.is_open()){
	
		reader >> a >> b;
		cout << "Sum of a and b is: "<<a+b<<endl;
	}
	else{
	
		cout << "File not found" << endl;
		return 0;
	}
	
	system("pause");
	return 0;
}