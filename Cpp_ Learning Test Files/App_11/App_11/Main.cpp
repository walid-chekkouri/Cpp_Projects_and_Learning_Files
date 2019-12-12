#include <iostream>
using namespace std;
class MyClass{

	int nb;
public:
	MyClass(){
	
		nb = 5;
	}
	MyClass(int nb){

		this->nb = nb;
	}

	MyClass operator+(MyClass classa){
	
		cout << "Addition occured" << endl;

		return MyClass(this->nb + classa.nb);
	}
	MyClass operator-(MyClass classa){

		cout << "subtraction occured" << endl;

		return MyClass(this->nb - classa.nb);
	}

	friend ostream & operator<<(ostream & o, MyClass classa){
		o << classa.nb;
		return o;
	
	}

	friend istream & operator>>(istream & o, MyClass &classa){
		o >> classa.nb;
		return o;

	}

	inline int getNb(){ return nb; }

};


int main(){
	int number;
	MyClass(classA);
	MyClass classB = 20;//Since we used a constructor with an int argument

	MyClass classC = classA + classB;
	cout << classC.getNb() << endl;

	classC=classC.operator-(classA);
	cout << classC << " : a"<<endl;

	cin >> classC;
	cout << "New value is: " << classC << endl;

	system("pause");
	return 0;
}