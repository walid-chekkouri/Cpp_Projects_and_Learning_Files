#include<iostream>


int main(){

	int *p = new int(77);


	std::cout << *p << std::endl;

	delete p;

	

	system("pause");
	return 0;
}