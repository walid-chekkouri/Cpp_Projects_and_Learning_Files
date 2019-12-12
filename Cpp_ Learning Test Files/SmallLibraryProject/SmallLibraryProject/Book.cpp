#include "Book.h"
#include<string>
using namespace std;

Book::Book(string N, string A, double P){
	name = N; author = A; price =P;
}
string Book::getName(){ return name; }
string Book::getAuthor(){ return author; }
double Book::getPrice(){ return price; }