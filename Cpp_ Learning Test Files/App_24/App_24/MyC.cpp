#include "MyC.h"
#include<iostream>
using namespace std;

MyC::MyC(int num)
	:nb(num)

{

}

void MyC::show()
{
	cout << "nb = " << nb<< endl;
	cout << "this-> = " <<this->nb << endl;
	cout << "(*this).nb = " <<(*this).nb << endl;
}