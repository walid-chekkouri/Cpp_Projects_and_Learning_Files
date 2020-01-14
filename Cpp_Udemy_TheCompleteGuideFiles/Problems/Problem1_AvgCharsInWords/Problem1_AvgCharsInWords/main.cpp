// ---------- FILE I/O & PROBLEM ----------

#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include <numeric>
#include <cmath>
#include <sstream>

// iostream allows use to read from the standard 
// input (keyboard) and write to the standard output
// (console)
// fstream is needed for working with files
#include <fstream>

// ----- PROBLEM FUNCTION PROTOTYPE -----

std::vector<std::string> StringToVector(std::string,
	char separator);

// ----- END OF PROBLEM FUNCTION PROTOTYPE -----

int main()
{
	std::ofstream writeToFile;
	std::ifstream readFromFile;
	std::string txtToWrite = "";
	std::string txtFromFile = "";

	// We open the file by providing a name and then either
	// ios::app : Append to the end of the file
	// ios::trunc : If the exists delete content
	// ios::in : Open file for reading
	// ios::out : Open file for writing
	// ios::ate : Open writing and move to the end of the file
	writeToFile.open("test.txt", std::ios_base::out |
		std::ios_base::trunc);

	if (writeToFile.is_open()) {
		// You can write with the stream insertion operator
		writeToFile << "Beginning of File\n";

		// You can write data in a string
		std::cout << "Enter data to write : ";
		getline(std::cin, txtToWrite);
		writeToFile << txtToWrite;

		// Close the file 
		writeToFile.close();
	}

	// Open the file for reading
	readFromFile.open("test.txt", std::ios_base::in);

	if (readFromFile.is_open()) {

		// Read text from file
		while (readFromFile.good()) {
			getline(readFromFile, txtFromFile);

			// Print text from file
			std::cout << txtFromFile << "\n";

			// ----- PROBLEM -----
			// After each line print both the number of 
			// words in each line and the average word length

			std::vector<std::string> vect =
				StringToVector(txtFromFile, ' ');

			int wordsInLine = vect.size();

			std::cout << "Words in Line : " <<
				wordsInLine << "\n";

			int charCount = 0;

			for (auto word : vect) {
				for (auto letter : word) {
					charCount++;
				}
			}

			int avgNumChars = charCount / wordsInLine;

			std::cout << "Avg Word Length : " <<
				avgNumChars << "\n";

			// ----- END OF PROBLEM -----
		}
		readFromFile.close();
	}


	system("pause");
	return 0;
}

// ----- PROBLEM FUNCTION -----

std::vector<std::string> StringToVector(std::string theString,
	char separator) {

	// Create a vector
	std::vector<std::string> vecsWords;

	// A stringstream object receives strings separated
	// by a space and then spits them out 1 by 1
	std::stringstream ss(theString);

	// Will temporarily hold each word in the string
	std::string sIndivStr;

	// While there are more words to extract keep
	// executing
	// getline takes strings from a stream of words stored
	// in the stream and each time it finds a blanks space
	// it stores the word proceeding the space in sIndivStr
	while (getline(ss, sIndivStr, separator)) {

		// Put the string into a vector
		vecsWords.push_back(sIndivStr);
	}

	return vecsWords;
}
