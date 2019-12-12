#include<iostream>


int main(){

	int x = 10;
	int y = 20;
	int i = x = y; //Y has been assigned to X, then X has been assigned to I.

	std::cout << "X: " << x << std::endl;
	std::cout << "Y: " << x << std::endl;
	std::cout << "I: " << x << std::endl;
	
	//Personal Note to me: Remmeber the Camera Effect, right first, then start from the left.


	system("pause");
	return 0;
}