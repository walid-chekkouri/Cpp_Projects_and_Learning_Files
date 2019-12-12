#include<iostream>

unsigned long long fibonacci(int index);

int main(){

	int index;
	std::cout << "Enter Fibonacci Index: ";
	std::cin >> index;
	printf("Fib(%d) = %d\n", index, fibonacci(index));



	system("pause");
 return 0;
}

//Fibonacci forumal: Fn+1= Fn + Fn-1. While F1=F2=1.
unsigned long long fibonacci(int index)
{
	if (index < 2)
		return index;
	else
		return fibonacci(index - 1) + fibonacci(index - 2);

}
	