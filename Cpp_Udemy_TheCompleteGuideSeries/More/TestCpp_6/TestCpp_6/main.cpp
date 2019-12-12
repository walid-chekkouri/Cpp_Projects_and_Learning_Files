#include<iostream>
#include<vector>


std::vector<int> FindSubstringMatches(std::string theString, std::string substring);
std::string ReplaceAllSubstrings(std::string theString, std::string substring, std::string newString);

int main()
{
	std::string phrase = "to know or not to know is why I know what I know";
	std::vector<int> matches = FindSubstringMatches(phrase, "know");
	for (int i=0;i<matches.size(); i++)
	{
		std::cout << matches[i] << "\n";
	}

	std::cout << ReplaceAllSubstrings("to know or not to know is why I know what I know", "know", "be") << "\n";


	//phrase.replace(3 , 4, "be");
	//phrase.replace(16, 4, "be");
	//phrase.replace(28, 4, "be");

	std::cout << phrase << "\n";


	system("pause");
	return 0;
}

std::vector<int> FindSubstringMatches(std::string theString, std::string substring)
{
	std::vector<int> matchingIndexes;
	int index = theString.find(substring, 0); //returns the index where the substring is found

	while (index != std::string::npos)
	{
		matchingIndexes.push_back(index);
		index = theString.find(substring, index + 1);// search again after the last found index
	}

	return matchingIndexes;
}

std::string ReplaceAllSubstrings(std::string theString, std::string substring, std::string newString)
{
	std::vector<int> matches = FindSubstringMatches(theString, substring);

	if (matches.size()!=0)// only if matches are found
	{
		int lengthDifference = newString.size() - substring.size();
		int timesLooped = 0;
		for (auto index : matches)
		{
			std::cout << "index "<<index << std::endl;
			theString.replace(index + (timesLooped * lengthDifference), substring.size(), newString);
			timesLooped++;
		}
	} else return "No matches found! \n";

	return theString;
}