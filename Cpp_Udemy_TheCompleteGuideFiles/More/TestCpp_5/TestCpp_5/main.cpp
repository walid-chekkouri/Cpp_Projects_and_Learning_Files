#include<iostream>
#include<vector>
#include<sstream>

std::vector<std::string> StringToVector(std::string theString,
	char seperator);


int main() {

	std::vector<std::string> myVec = StringToVector("this is a random string", ' ');
	for (int i = 0; i < myVec.size(); i++)
	{
		std::cout << myVec[i] <<"\n";
	}


	system("pause");
	return 0;
}

std::vector<std::string> StringToVector(std::string theString, char seperator)
{
	std::vector<std::string> vecsWords;

	std::stringstream ss(theString);
	std::string sIndivStr;
	while (getline(ss, sIndivStr, seperator))
	{
		vecsWords.push_back(sIndivStr);
	}
	return vecsWords;

}