#include<iostream>
#include<iomanip>
#include<string>
#include<fstream>

/*
*Example of an Automated Grader
*Usage of Fstreams in c++
*/


void printHeader()
{
	std::cout << std::setw(15) << std::left << "Student"
		<< std::setw(5) << "Score" << std::endl;
	std::cout << std::setw(20) << std::setfill('-') << "" << std::endl;
	std::cout << std::setfill(' ');
}

void printFooter(double& average)
{
	std::cout << std::setw(20) << std::setfill('-') << "" << std::endl;
	std::cout << std::setfill(' ');
	std::cout << std::setw(15) << std::left << "Average Score"
		<<std::setw(5) << std::right<<average;

}

void printStudent(const std::string& student, int& score)
{
	std::cout << std::setprecision(1) << std::fixed;
	std::cout << std::setw(15) << std::left << student
		<< std::setw(5) << std::right << score << std::endl;
}

int processResponse(const std::string& response, const std::string& correctAnswer)
{
	unsigned int score{ 0 };
	for (size_t i = 0; i < correctAnswer.size(); ++i)
	{
		if (response.at(i) == correctAnswer.at(i))
			score++;
	}
	return score;
}

int main()
{
	std::ifstream inFile;
	std::string correctAnswer{};
	std::string name{};
	std::string response{};
	unsigned int scoreTotalSum{ 0 };
	unsigned int totalStudent{ 0};
	double averageScore{ 0.0 };

	inFile.open("responses.txt");
	if (!inFile)
	{
		std::cerr << "Problem opening file" << std::endl;
		return 1;
	}

	inFile >> correctAnswer;

	printHeader();//Student		Score

	while (inFile >> name >> response)
	{
		++totalStudent;
		int score = processResponse(response, correctAnswer);
		scoreTotalSum += score;
		printStudent(name, score);
	}

	if (totalStudent != 0)
		averageScore = static_cast<double>(scoreTotalSum) / totalStudent;

	printFooter(averageScore);

	inFile.close();
	std::cout << std::endl;


	system("pause");
	return 0;
}