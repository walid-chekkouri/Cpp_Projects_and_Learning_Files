#include<iostream>
#include<string>
#include<fstream>


int main()
{

	std::ifstream in_file;
	in_file.open("Poem.txt");

	if (!in_file)
	{
		std::cerr << "Problem opening file" << std::endl;
		return 1;
	}

	///Using getLine()
	/*std::string line{};

	while (std::getline(in_file, line))
	{
		std::cout << line << std::endl;
	}
*/
	///Reading 1 character at a time.
	char c{};
	while (in_file.get(c))
	{
		std::cout << c;
	}
	std::cout << std::endl;



	in_file.close();

	system("pause");
	return 0;
}