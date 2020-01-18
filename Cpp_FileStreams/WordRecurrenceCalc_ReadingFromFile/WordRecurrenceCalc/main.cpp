#include<iostream>
#include<iomanip>
#include<string>
#include<fstream>

/*
*Word recurrence finder
*Usage of Fstreams in Cpp
*GOAL: Ask the user to enter a word
Process the RomeoAndJuliet file and determine how many total words there are
and how many times the word the user entered appears as a substring of a word in the play.

For example.
If the user enters: love
Then the words love, lovely, and beloved will all be considered matches.
You decide whether you want to be case sensitive or not. This solution is case sensitive
*/

bool findSubstring(const std::string& wordToFind, const std::string& target)
{
	std::size_t found = target.find(wordToFind);//returns index position
	if (found == std::string::npos)//not in the word
		return false;
	else
		return true;

}


int main()
{

	std::ifstream inFile{};
	std::string wordToFind{};
	std::string wordRead{};
	int wordCount{ 0 };
	int matchCount{ 0 };

	inFile.open("romeoAndJuliet.txt");
	if (!inFile)
	{
		std::cerr << "Problem opening file" << std::endl;
		return 1;
	}

	std::cout << "Enter the substring to search for:";
	std::cin >> wordToFind;
	while (inFile >> wordRead)
	{
		++wordCount;
		if (findSubstring(wordToFind, wordRead))
		{
			++matchCount;
			std::cout << wordRead << " ";
		}
	}

	std::cout <<std::endl<< wordCount << " words were searched..." << std::endl;
	std::cout << "The substring " << wordToFind << " was found " << matchCount << " times" << std::endl;


	system("pause");
	return 0;
}