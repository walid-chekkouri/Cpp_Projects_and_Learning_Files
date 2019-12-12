#include<iostream>

int main(){
	int x = 9;
	int a = 1; int b = 0;

	int result = (x == 9) ? a : b;// if (x==9) then result=a=1, else result=b=0;


	std::cout << result<<std::endl;
	

	system("pause");

	return 0;
}