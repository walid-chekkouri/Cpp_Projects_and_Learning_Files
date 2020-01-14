#include <iostream> 

class A;
class B
{
private:
	int bVariable;
public:
	B() :bVariable(9){}
	void showA(A &myFriendA); 
	
	friend class A;  // Friend Class 
};

class A
{
private:
	int aVariable;
public:
	A() :aVariable(7){}

	void showB(B &myFriendB);

	friend class B;  // Friend Class 
};

// !!! Make Sure that the Implementations are out of the class scope.
void A::showB(B &myFriendB){
	std::cout << "B.bVariable: " << myFriendB.bVariable << std::endl;
}

void B::showA(A &myFriendA)
{
	std::cout << "A.aVariable: " << myFriendA.aVariable << std::endl;
}

int main() {

	A a;
	B b;
	b.showA(a);
	a.showB(b);

	system("pause");
	return 0;
}

/* [A simple and complete C++ program to demonstrate global friend]
#include <iostream>

class A
{
int a;
public:
A() {a = 0;}
friend void showA(A&); // global friend function
};

void showA(A& x) {
// Since showA() is a friend, it can access
// private members of A
std::cout << "A::a=" << x.a;
}

int main()
{
A a;
showA(a);
return 0;
}

*/