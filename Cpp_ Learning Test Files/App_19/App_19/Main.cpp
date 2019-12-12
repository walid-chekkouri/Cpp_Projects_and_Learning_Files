#include<iostream>
using namespace std;

int main()
{
	int v[5] = {6,7,8,9,10};
	int *p = &v[0];
	

	for (int i = 0; i < 5 ; i++)
	{
		
		cout << "p is at: " << p << endl;
		cout << "p points to the value: " << *p << endl;
		p++;
		
	}
	
	
	

	system("pause");
	return 0;
}