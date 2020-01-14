#include<iostream>
#include<fstream>


int main()
{

	std::ifstream in_file;
	std::string line;
	int num;
	double total;

	in_file.open("Text.txt");
	if (!in_file)//we can use .isOpen() too
	{
		std::cerr << "Problem opening file" << std::endl;
		return 1;
	}

	while (in_file >> line >> num >> total)//can also use !in_file.eof()
	{
		
		std::cout << line << " | " << num << " | " << total << std::endl;
	}
	
	in_file.close();

	system("pause");
	return 0;
}