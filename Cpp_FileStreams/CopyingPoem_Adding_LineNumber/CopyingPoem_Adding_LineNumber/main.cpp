#include<iostream>
#include<iomanip>
#include<string>
#include<vector>
#include<fstream>

/*
*Writting to a file and numbering lines example
Usage of Fstreams in Cpp
*/

int main()
{
	std::ifstream inFile{ "romeoAndJuliet.txt" };
	std::ofstream outFile{ "romeoAndJuliet_Numbered.txt" };
	if (!inFile)
	{
		std::cerr << "Error opening input file!" << std::endl;
		return 1;
	}

	if (!outFile)
	{
		std::cerr << "Error opening output file!" << std::endl;
		return 1;
	}

	std::string line{};
	int lineNumber{ 0 };
	while (getline(inFile, line))
	{
		if (line == "")//empty lines are not numbered
			outFile << std::endl;
		else
		{
			++lineNumber;
			outFile << std::setw(7) << std::left << lineNumber << line << std::endl;
		}
	}
	std::cout << "\n Copy Complete" << std::endl;
	inFile.close();
	outFile.close();

	system("pause");
	return 0;
}