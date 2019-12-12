#include<iostream>
#include<fstream>
#include<string>

int main(){

	std::ifstream file;
	std::string fileOutput;

	file.open("myDoc.txt");

	if (file.is_open())
	{
		while (!file.eof())
		{
			file >> fileOutput;
			std::cout << fileOutput << std::endl;
		}
	}
	else
	{
		std::cout << "File failed to open" << std::endl;
	}

	system("pause");
	return 0;
}