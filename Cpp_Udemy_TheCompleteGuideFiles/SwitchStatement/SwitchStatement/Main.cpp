#include<iostream>

int main(){

	int wrestlerNumber=5;

	switch (wrestlerNumber)
	{
	case 1:
		std::cout << "Mark Callaway" << std::endl;
		break;

	case 2:
		std::cout << "Brock Lesnar" << std::endl;
		break;
	case 3:
		std::cout << "John Cena" << std::endl;
		break;

	case 4:
	case 5:
	case 6:
		std::cout << "All Fired!" << std::endl; //All {4,5,6} have the same functionality
		break;

	default:
		std::cout << "Not a valid wrestler" << std::endl;
		break;
	}

	system("pause");
	return 0;
}