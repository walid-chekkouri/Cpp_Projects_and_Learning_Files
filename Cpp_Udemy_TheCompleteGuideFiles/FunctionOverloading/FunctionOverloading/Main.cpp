#include<iostream>

float Function(float f1, float f2)
{
	std::cout << "Float Operation" << std::endl;
	return f1*f2;
}

int Function(int i1, float i2)
{
	std::cout << "Integer Operation" << std::endl;
	return i1*i2;
}

int main(){

	std::cout <<Function((int)5.2f, (int)6.4f) << std::endl;
	std::cout << Function(5.2f, 6.4f) << std::endl;

	system("pause");
	return 0;
}