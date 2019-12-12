#include<iostream>
#include<fstream>
#include<string>


int main()
{
	std::ifstream in_file{ "poem.txt" };
	std::ofstream out_file{ "poem_out.txt" };
	if (!in_file)
	{
		std::cerr << "Error opening input file" << std::endl;
		return 1;
	}
	if (!out_file)
	{
		std::cerr << "Error opening output file" << std::endl;
		return 1;
	}

	std::string line{};
	///Get line method
	while (std::getline(in_file, line))
		out_file << line << std::endl;

	///Get/Put method
	/*char c;
	while (in_file.get(c))
		out_file.put(c);*/







	std::cout << "File copied" << std::endl;
	in_file.close();
	out_file.close();

	system("pause");
	return 0;
}