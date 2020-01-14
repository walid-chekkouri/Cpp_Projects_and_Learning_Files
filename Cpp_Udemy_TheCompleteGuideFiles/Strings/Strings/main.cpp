#include<iostream>
#include<string>

int main() {

	std::string s1; //Empty
	std::string s2{ "Frank" }; //Frank
	std::string s3{ s2 }; //Frank
	std::string s4{ "Frank", 3 }; //Fra
	std::string s5{ s3, 0,2 }; //Fr// start at index 0 with length of 2.
	std::string s6(3, 'X'); //XXX// constructor syntax

	//std::string myString = "Hello " + "There";ERROR//we can't conatinate with c-style literals.It only works with strings.

	std::string myFirstString = "Hello ";
	std::string mySecondString = "There";

	std::string myFinalString = myFirstString + mySecondString;

	for (char c : myFinalString)std::cout << c << std::endl;
	//OR simply std::cout<<myFinalString<<std::endl;


	for (int c : myFinalString)std::cout << c << std::endl;//print the int values thar represent the char elements.


	std::string s7{ "this is a test" };
	std::cout << s7.substr(0, 4);//This
	std::cout << s7.substr(5, 2);//is
	std::cout << s7.substr(10, 4);//test

	//see .find(),.erase(), .length()

	std::cout << std::endl;

	//get entire line use: getline(cin, s1);
	getline(std::cin, s2, 'x');//s2= all characters entered until the character 'x';
	std::cout << s2 << std::endl;

	system("pause");
	return(0);
}