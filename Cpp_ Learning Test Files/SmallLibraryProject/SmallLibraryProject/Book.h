#include<string>
using namespace std;
#ifndef BOOK_H
#define BOOK_H

class Book{
	string name;
	string author;
	double price;

public:
		Book(string n, string a, double p);

		string getName();
		string getAuthor();
		double getPrice();


};
#endif