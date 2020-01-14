#include<iostream>


void PrintSomething(int x=90, int y=10);//default values


int main(){

	PrintSomething();//Unspecified values
	PrintSomething(5); //Unspecified 2nd value
	PrintSomething(40, 30); // specified values

	system("pause");
	return 0;
}
void PrintSomething(int x, int y) // Default values for the function
{
	std::cout << "X:" << x << "| Y: " << y << std::endl;
}
