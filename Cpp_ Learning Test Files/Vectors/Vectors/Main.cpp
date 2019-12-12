#include <iostream>
#include <vector>
using namespace std;

int main(){ 

	vector <int> myVector;
	//.push_back(value)==>adds a new element to the END of our dynamic array (vector)
	// It also RESIZES it. !!!
	//.at(value) returns element at specified index number
	//.size() returns an unsigned int equal to the number of elements in the vector
	//.insert(.begin(), new value) Adds an element at the start of our vector. .end() at the end instead.
	//.erase(.begin(), new value) removes an element at specified index number.
	//.clear() removes all elements of a vector
	//.empty() returns a boolean, if the vector is empty or not.
	myVector.push_back(3);
	myVector.push_back(7);
	myVector.push_back(4);
	myVector.push_back(12);
	myVector.push_back(25);
	


	cout << "\t My Vector:" << endl;


	for (unsigned int i = 0; i < myVector.size(); i++){//unsigned int is always positive
		cout<<myVector.at(i)<<" | ";
		//cout << myVector[i] << endl;
	
	}
	cout << "\tIs Vector empty: " << myVector.empty()<<endl;

	myVector.insert(myVector.begin()+3,5);// add new value as the 4th element.

	cout << endl;

	cout << "\t My Vector:(new element added)" << endl;
	//With newly added element at the start

	for (unsigned int i = 0; i < myVector.size(); i++){
		cout << myVector.at(i) << " | ";

	}
	cout << "\tIs Vector empty: " << myVector.empty() << endl;
	cout << endl;

	myVector.erase(myVector.begin() + 4);// add new value as the 4th element.

	cout << endl;

	cout << myVector.front() << endl;// to retrieve the value of the first element "front"

	cout << "\t My Vector:(element removed)" << endl;
	//With newly added element at the start

	for (unsigned int i = 0; i < myVector.size(); i++){
		cout << myVector.at(i) << " | ";

	}
	cout << "\tIs Vector empty: " << myVector.empty() << endl;
	cout << endl;

	cout << "\t My Vector:(cleared Vector)" << endl;
	//With newly added element at the start

	myVector.clear();
	cout << "\tIs Vector empty: " << myVector.empty() << endl;
	cout << endl;

	system("pause");

	return 0;
}