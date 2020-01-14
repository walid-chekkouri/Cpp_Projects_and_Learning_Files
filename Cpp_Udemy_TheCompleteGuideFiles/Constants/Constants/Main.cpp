#include<iostream>

#define CONSTVAR 4.17
#define CONSTLine '\n'			 // it is considered bad programming practice to #define constants in C++
int main(){

	constexpr double myConst = 5.16; // Constants are better named in CAPS (MYCONST), constexpr means a constant known in compile time.
	const char myLine = '\n';

	std::cout << "My Constant: " << myConst << myLine;
	std::cout << "My Defined Constant: " << CONSTVAR <<CONSTLine;


#undef CONSTVAR					//Macros (#define) can be redefined but const cannot
#define CONSTVAR 300

#undef CONSTLine
#define CONSTLine " :Newly defined"

	std::cout << "My Defined Constant: " << CONSTVAR << CONSTLine<<std::endl;

	system("pause");
	return 0;
}