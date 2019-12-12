#include <iostream>
#include<fstream>


int main(){
	std::ofstream file("textfile.txt");

	if (file.is_open())
	{
		file << "We have added a file\n";
		file.close();
	}
	else
	{
		std::cout << "Unable to open file." << std::endl;
	}


	system("pause");
	return 0;
}