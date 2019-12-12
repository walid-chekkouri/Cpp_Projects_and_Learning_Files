#include<iostream>
#include"MyC.h"

using namespace std;

MyC::MyC()
{}

MyC::MyC(int num)
{
	nb = num;
}

MyC MyC::operator+(MyC myclass1){

	MyC brandnewC;
	brandnewC.nb = nb + myclass1.nb;
	return brandnewC;
}