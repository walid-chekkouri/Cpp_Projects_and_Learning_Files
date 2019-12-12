#include<iostream>

int main(){

	try{
		std::cout << "Throwing exception \n";
		throw std::runtime_error("Eroor Occured");
		std::cout << "Can you print me?\n";
	}

	catch (std::exception &exp){
	
		std::cout << "Handled Exception : " << exp.what() << "\n";
	
	}

	catch (...){

		std::cout << "default excption : \n";

	}


	system("pause");
	return 0;
}