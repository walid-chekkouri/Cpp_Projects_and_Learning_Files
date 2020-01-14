#include<iostream>
#include<string>
#include<vector>
#include<sstream>

void SolveForX(std::string equation);
std::vector<std::string> StringToVector(std::string theString, char seperator);

int main(){

	std::cout << "Enter an equation to solve ";//ex: x + 4 = 9
	std::string equation = "";
	getline(std::cin, equation);
	SolveForX(equation);


	system("pause");
	return 0;
}

void SolveForX(std::string equation)
{
	std::vector<std::string> vecEquation = StringToVector(equation, ' ');

	int num1 = std::stoi(vecEquation[2]);
	int num2 = std::stoi(vecEquation[4]);
	int xVal = num2 - num1;
	std::cout << "X = " << xVal << "\n";

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
