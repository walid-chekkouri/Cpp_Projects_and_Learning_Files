#include<iostream>
#include<string>
/*
we can check whether a number is even or odd by using modulus operator.
If an integer mod 2 is 0 then, it is even and if an integer mod 2 is 1 then, it is an odd number.
*/

/*
Even or Odd number can be tested by bitwise operator too. Bitwise & ( AND ) operator can be used to check for even or odd.
If ANDing an integer by 1 results 1 then the integer is ODD else ( result 0 ) the integer is EVEN
*/

int main(){

MyLabel:
	int myNumber;
	std::string result;
	std::cout <<"Enter a number"<<std::endl;
	std::cin >> myNumber;

	result = (myNumber & 1) ? std::to_string(myNumber) + " is an odd Number" : std::to_string(myNumber) + " is an even Number";
	
	std::cout<< result<< std::endl;

	goto MyLabel;

	return 0;
}