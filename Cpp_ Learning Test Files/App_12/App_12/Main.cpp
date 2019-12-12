#include<iostream>
#include <vector>
using namespace std;

template<class T>

class cSum{

	T myVar;
public:
	cSum(T first, T second){
	
		myVar = first + second;
	}

	T Result(){ return myVar; }
};

int main(){

	cSum<int> sum1(1,4);
	cout << sum1.Result() << endl;

	cSum<float> sum2(1.5, 2.5);
	cout << sum2.Result() << endl;

	vector<int> vector1;
	vector1.push_back(1);
	vector1.push_back(2);
	vector1.push_back(6);

	for (int i = 0; i < vector1.size();i++){
	
		cout << vector1.at(i) << endl;
	
	}

	vector1.clear();
	for (int i = 0; i < vector1.size(); i++){

		cout << vector1.at(i) << endl;

	}

	int temp;
	do{

		cout << "Insert element (-1) to cancel"<< endl;
		cin >> temp;
		vector1.push_back(temp);


	} while (temp != -1);
	vector1.pop_back();
	for (int i = 0; i < vector1.size(); i++){

		
		cout << vector1.at(i) << endl;
		


	}

	system("pause");
}