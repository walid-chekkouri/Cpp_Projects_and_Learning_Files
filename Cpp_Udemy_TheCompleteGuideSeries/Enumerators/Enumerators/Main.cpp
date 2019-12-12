#include<iostream>

/*An enumeration is a user-defined data type that consists of integral constants.
An enum variable takes only one value out of many possible values.
*/


enum Color {red=163, green, blue=255, alpha=false}; //green is automatically 163+1=164
enum Direction { left = 'l', right = 'r' };

enum seasons { spring = 34, summer = 4, autumn = 9, winter = 32 };

int main(){

	std::cout << Color::alpha << std::endl;

	if (Direction::left == 'l')
		std::cout << "Left indeed" << std::endl;

	std::cout << left << std::endl;

	seasons s;
	s = summer;
	std::cout << "Summer = " << s << std::endl;
	std::cout << "--------------------------" << std::endl;

	int myColor = red | green;
	std::cout << "red: "<<red << std::endl;
	std::cout << "green: " << green << std::endl;


	std::cout << "MyColor: " << myColor << std::endl; //167 means both red & green chosen


	system("pause");
	return 0;
}