#include<iostream>
//c-style string
int main() {



	char myName[] = { "Walid" };

	//int Arrsize = sizeof(myName) / sizeof(myName[0]);
	for (int i = 0;
		myName[i] != '\0'//end of the array
		; i++)
	{
		std::cout << myName[i] << std::endl;
	}

	std::cout << std::endl;

	char myName2[20];//the 6th element will be in this case the '\0'. because the word Andre has 5 elements only.
	//myName2 = "Andre";// this is wrong, it gives an error.
	strcpy_s(myName2, "Andre");//copy the elements to our variable

	//for (int i = 0; i < strlen(myName2); i++) { std::cout << myName2[i] << std::endl; }

	for (int i = 0;
		myName2[i] != '\0'//end of the array
		; i++)
	{
		std::cout << myName2[i] << std::endl;
	}

	//strcat_s: to concatenate. 


	system("pause");
	return(0);
}