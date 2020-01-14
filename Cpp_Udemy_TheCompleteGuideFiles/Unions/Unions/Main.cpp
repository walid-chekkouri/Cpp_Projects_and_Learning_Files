#include<iostream>
/*
A union is a special class type that can hold only one of its non-static data members but not at the same time.
(One will overwrite the previous other)

The union is only as big as necessary to hold its largest data member.
The other data members are allocated in the same bytes as part of that largest member.
*/

union Number
{
	int nb;
	double numb;
	bool isBool;

};

int main(){
	Number number;
	number.nb = 7;
	std::cout << number.nb << std::endl;

	number.numb = 4.13;
	//std::cout << number.nb << std::endl; // !!The variable nb DOESN'T exist now (as aforementioned).
	std::cout << number.numb << std::endl;

	system("pause");
	return 0;
}