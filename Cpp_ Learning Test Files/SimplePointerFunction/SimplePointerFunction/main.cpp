#include <iostream>
using namespace std;

void increment(int *value){

	(*value)++;// Important to use() to dereference first then increment

}

int main(){
	int a = 5;
	cout << a << endl;
	increment(&a);
	cout << a << endl;
	system("pause");
	return 0;
}