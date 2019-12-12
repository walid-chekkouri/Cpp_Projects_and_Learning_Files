#include <iostream>
using namespace std;

class Myclass
{
public:
	Myclass(){ myvar = 0; }
private:
	int myvar;

	friend void myFriend(Myclass &myobj, int myint); //friend function prototype
// it's better to call it by reference

};

void myFriend(Myclass &myobj, int myint)
{
	
	myobj.myvar = 14;
	cout << myobj.myvar << endl << myint << endl;
}
int main()
{
	int nb = 39;
	Myclass class1;
	myFriend(class1, nb);


	system("pause");
	return 0;
}