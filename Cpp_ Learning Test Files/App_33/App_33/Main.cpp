#include <iostream>
using namespace std;

int main(){

	try{
		int momAge = 30, sonAge = 36;
		if (momAge < sonAge){
			throw 404;
		}
	
	}
	catch (int x){
		cout << "ERROR: Son can't be older than the Mom" << endl;
	
	}

	system("pause");

	return 0;
}