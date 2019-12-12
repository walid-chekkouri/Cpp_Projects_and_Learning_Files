#include<iostream>
#include <cctype>


int main() {



	char c1 = 'a';
	while (c1 != '0') {
		std::cout << "\n Enter a character (0 to stop the loop): ";
		std::cin >> c1;

		bool bAlpha = isalpha(c1);
		bool bDigit = isdigit(c1);
		bool bUpper = isupper(c1);


		std::cout << std::boolalpha;
		std::cout << " Letter?: " << bAlpha << "\n digit?: " << bDigit << "\n uppercase?: " << bUpper << std::endl;

	}




	system("pause");
	return(0);
}