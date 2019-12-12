#include<iostream>
using namespace std;

template <class First, class Second>// generic type of data

First smaller(First a, Second b){ 

	return (a < b ? a : b);//ternary operator

}


int main(){
	double nb2 = 3.6; int nb1 = 10;
	
	cout << smaller(nb2,nb1) << endl;

	//Comma Operator
	int a = 0, b = 0;
	a = (b = 3, b + 2);
	/* (, ) is used to separate two or more expressions that are included
	where only one expression is expected.When the set of expressions
	has to be evaluated for a value, only the right - most expression is considered */
	
	cout << a  << " " << b  << " "<<endl;
	/*would first assign the value 3 to b, and then assign b+2 to variable a. So, at the end, variable a would contain the value 5 while variable b would contain value 3.*/

	system("pause");
	return 0;
}