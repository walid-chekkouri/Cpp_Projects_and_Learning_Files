#include<iostream>
#include<string>
using namespace std;

struct ourNode
{
	char x, y, z;
};

int main()
{

	struct ourNode p = { '1','0','a' + 2 };//'a'+2='c'
	struct ourNode* q = &p;
	cout << "element at index 1: " << *((char*)q + 1) << " element at index 2: " << *((char*)q + 2) << endl;
	cout << "element at index 1: " <<q->y << " element at index 2: " <<q->z << endl;

	//An array, each element of which is a structure of type ourNode
	struct ourNode arrayS[10];

	//An array, each element of which is pointer to a structure of type ourNode
	struct ourNode* s[10];

	system("pause");
	return 0;
}