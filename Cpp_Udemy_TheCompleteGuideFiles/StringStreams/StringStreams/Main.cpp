#include<iostream>
#include<string>
#include<sstream>

int main(){
	///Example of Input.
	
	int num{};
	double total{};
	std::string name{};
	
	std::string info{ "Bob 78 148.45" };
	std::istringstream iss{ info };

	iss >> name >> num >> total;
	std::cout <<"Num: " <<num << " Total: " << total<< " Name: " << name << std::endl;
	
	std::cout << "\n===============\n";

	///Example of Output
	std::ostringstream oss{};
	oss << name <<" "<< num << " " <<total << std::endl;
	std::cout << oss.str() << std::endl;

	std::cout << "\n===============\n";
	///Data Validation
	int value{};
	std::string entry{};
	bool done = false;
	do 
	{
		std::cout << "Please enter an integer: ";
		std::cin >> entry;
		std::istringstream validator{ entry };

		if (validator >> value)
			done = true;
		else
			std::cout << "Sorry, that's not an integer" << std::endl;

		//discards the input buffer
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	} while (!done);

	std::cout << "You entered the integer: " << value<<std::endl;

	system("pause");
	return 0;
}