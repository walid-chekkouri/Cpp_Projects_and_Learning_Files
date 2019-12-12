#include<iostream>
#include<string>

std::string CaesarCipher(std::string theString, int key, bool encrypt);

int main() {

	std::string theString = "Make me secret";

	std::string encryptedStr = CaesarCipher(theString,5, true);

	std::string decryptedString = CaesarCipher(encryptedStr,5, false);

	std::cout << "Encrypted " << encryptedStr << "\n";

	std::cout << "Decrypted " << decryptedString << "\n";


	system("pause");
	return 0;

}

std::string CaesarCipher(std::string theString, int key, bool encrypt) {
	std::string returnedString = "";
	int charCode = 0;
	char letter;

	// The key will shift and unshift character codes
	if (encrypt) key = key * -1;

	// Cycle through each character
	for (char& c : theString) {

		// Check if it's a letter and if not don't chage it
		if (isalpha(c)) {

			// Convert from char to int and shift the char code
			charCode = (int)c;
			charCode += key;

			// If uppercase check if the new character code >
			// char code for Z, or < char code for A
			// If so shift the character code so that its value
			// wraps back into the letter character codes
			if (isupper(c)) {

				if (charCode > (int)'Z') {
					charCode -= 26;
				}
				else if (charCode < (int)'A') {
					charCode += 26;
				}

			}
			else {

				// Do the same for lowercase letters
				if (charCode > (int)'z') {
					charCode -= 26;
				}
				else if (charCode < (int)'a') {
					charCode += 26;
				}

			}

			// Convert from int to char and add the returning string
			letter = charCode;
			returnedString += letter;

		}
		else {
			letter = c;
			returnedString += c;
			std::cout << c << "\n";
		}

	}

	return returnedString;
}