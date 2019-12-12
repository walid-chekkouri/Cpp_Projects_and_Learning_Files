#include <iostream>
#include <string>
using namespace std;

int main(){

	string name;
	getline(cin, name);// doesn't break text after spaces unlike cin.The end is a new line instead.
	cout << name << endl;

	string s1("My name is Walid ");
	string s2, s3; //blank string

	s2 = s1;//method 1 of copying a string to another
	s3.assign(s1);//method 2 of copying a string to another

	cout << "S1: " << s1 << " S2: " << s2 << " S3: " << s3 << endl;
	
	//a string is an array of characters
	string st1("walid walidou");
	
	for (size_t i = 0; i < st1.length(); i++)
	{
		cout << st1.at(i) << endl;
	}


	string stA = "Hello my name is Walid";
	cout << stA.substr(1,3) << endl;//cout << stA.substr(1, stA.npos) << endl;// .npos: means all characters until the end of the string.
	cout << stA << endl;

	string one("apple");
	string second = "banana";

	cout << "One: " << one << " Second: " << second << endl;
	one.swap(second);// swap between strings.
	cout << "One: " << one << " Second: " << second << endl;

	cout << "--------------" << endl;

	string myString = "walid is dil walid";

	cout << myString.find_last_of("walid") << endl;// finds any character of w/a/l/i/d from the end of str
	
	cout << myString.rfind("walid") << endl;// starts from the right to find the first occurrence.
	
	
	cout << "--------------" << endl;
	string str="Hello World";
	cout << str << endl;
	str.erase(5);
	cout << str << endl;
	cout << "--------------" << endl;
	str.replace(0,4,"Mamamiya! ");
	cout << str << endl;

	system("pause");
	return 0;
}