#include<iostream>
#include<string>


//Type alias is a name that refers to a previously defined type


//typedef float f;  //(an other alternative)
using f = float;

int main(){
	
	f nb1 = 4.56f; //New named type
	float nb2 = 2.07f;

	std::cout << nb1 << " | " << nb2 << std::endl;

	system("pause");
	return 0;
}