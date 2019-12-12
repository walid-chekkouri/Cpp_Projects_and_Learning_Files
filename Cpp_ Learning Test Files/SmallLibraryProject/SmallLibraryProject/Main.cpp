#include<iostream>
#include<vector>
#include<string>
#include <Windows.h>
#include"Book.h"
#include <fstream>
using namespace std;

//Functions Prototyping
void addElem(vector<Book> &library);
int libSize(vector<Book> library);
void showDetails(vector<Book> library);
void createBook(string nameB, string authorB, double priceB, vector<Book> &library);
void loadLibrary(vector<Book> &library);
void saveLibrary(Book);

// My Main Function
int main(){

	
	vector<Book> library;// Library is simply a vector containing books

	loadLibrary(library);// Load Books Details

	char inputKey = 's';//initial value must be different than 'q'

	cout << "-----------------WELCOME----------------" << endl;
	while (inputKey != 'q')
{
		cout << "---------------OPTIONS----------------" << endl;
		cout << "Click \"1\" to add a book to your library" << endl;
		cout << "Click \"2\" to show how the number of books your possess" << endl;
		cout << "Click \"3\" to show details about your books" << endl;
		cout << "Click \"q\" to quit" << endl;
		inputKey = cin.get();

		//Options Switch Case
		switch (inputKey)
			{
		case '1':
			addElem(library);
			break;

		case '2':
			cout << "---------------------------------" << endl;
			cout << "You now own " << libSize(library) << " books !" << endl;
			cout << "---------------------------------" << endl;
			break;

		case '3':
			showDetails(library);
			break;

		case 'q':
			cout << "GOODBYE!" << endl;
			Sleep(2000);// few seconds to show goodbye before exiting
			break;
			}
}

	return 0;
}

//Book Details Insertion & adding to library
void addElem(vector<Book> &library)
{
	double price; string name; string author;

	cout << "Enter book name:" << endl;
	cin.ignore();  // discard the trailing '\n'
	getline(cin, name);

	cout << "Enter book price:" << endl;
	cin >> price;

	cout << "Enter author name:" << endl;
	cin.ignore();  // discard the trailing '\n'
	getline(cin, author);

	Book myBook(name, author, price);
	library.push_back(myBook);

	saveLibrary(myBook);



}

//The library size
int libSize(vector<Book> library){

	return library.size();

}

//Show the Book Details
void showDetails(vector<Book> library){
	int i = 0;
	for (i = 0; i < library.size(); i++){

		cout << "-Id: " << i + 1 << "\t -Book Name: " << library.at(i).getName() << "\t -Book Author: " << library.at(i).getAuthor() << "\t -Book Price: " << library.at(i).getPrice() << "$" << endl;
	}


}

//Create a book at the start of the program
void createBook(string nameB, string authorB, double priceB, vector<Book> &library){

	Book newBook(nameB, authorB, priceB);
	library.push_back(newBook);


}

//Loading My Library Data
void loadLibrary(vector<Book> &library){

	//----Loading File Data_START

	string line; //Line string containg all book information (raw)
	int nbArg = 0;// the number of arguments (bookname '0', author '1' or price '2'?)

	string tempName, tempAuthor, tempPriceS;// Temporary variables to store the extracted details
	double tempPrice;


	ifstream myfileL("List.txt");
	if (myfileL.is_open())
	{
		while (getline(myfileL, line))
		{
			tempPriceS = tempAuthor = tempName = "";
			for (int j = 0; j < line.size(); j++)
			{

				if (line.at(j) == ','){// next argument
					nbArg++;
				}
				else
				{
					switch (nbArg)
					{
					case 0:
						tempName += (line.at(j));
						break;
					case 1:
						tempAuthor += (line.at(j));
						break;
					case 2:
						tempPriceS += (line.at(j));

						break;

					}
				}
			}
	tempPrice = stod(tempPriceS);//string to double conversion

	createBook(tempName, tempAuthor, tempPrice, library);// create a book with these info & add it to the library

			nbArg = 0;//End of Line
		}
		myfileL.close();
	}

	else cout << "Unable to open file";

	//----Loading File Data_END

}


//Saving My Library Data
void saveLibrary(Book myBook){

	//----Saving File Data_START

	ofstream myfileS;
	myfileS.open("List.txt", ofstream::app);// ofstream::app append the new output with the existing (does not overwrite the initial content)
	if (myfileS.is_open())
	{
		myfileS <<"\n"<<myBook.getName()<<","<<myBook.getAuthor()<<","<<myBook.getPrice()<<",";// every attribute is separated by a comma for future references
	}
	
	myfileS.close();

	//----Saving File Data_End
}