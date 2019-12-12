#include<iostream>

int main(){
	int myChar;
	std::cout << (4 & 7) << std::endl;

	std::cout << (myChar=~1) << std::endl;

	std::cout << (6<<2) << std::endl;

	std::cout << (1 >> 1) << std::endl;

	/*
	& (bitwise AND) Takes two numbers as operands and does AND on every bit of two numbers. The result of AND is 1 only if both bits are 1.

| (bitwise OR) Takes two numbers as operands and does OR on every bit of two numbers. The result of OR is 1 any of the two bits is 1.

^ (bitwise XOR) Takes two numbers as operands and does XOR on every bit of two numbers. The result of XOR is 1 if the two bits are different.

<< (left shift) Takes two numbers, left shifts the bits of the first operand, the second operand decides the number of places to shift.

>> (right shift) Takes two numbers, right shifts the bits of the first operand, the second operand decides the number of places to shift.

~ (bitwise NOT) Takes one number and inverts all bits of it
	*/



	/*
&: 1&1 =1. the rest to 0. ex:
								1001
								1100 &
								----
							  = 1000

|:at least 1 to be true. ex:
							  1001
							  1100 |
							  ----
							= 1101

^:one of them is 1 only (exclusively) to be true. ex:
							1001
							1100 ^
							----
						  = 0101

~:Inverting bits. ex:
						 a= 1001
						~a= 0110

<<:shift bits a number of places on the left. ex:
						
						6=00110
				   (6<<2)=11000
	*/
	system("pause");
	return 0;
}