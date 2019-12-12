#ifndef MYC_H
#define MYC_H

class MyC
{

public:
	int nb;
	MyC();
	MyC(int);
	MyC operator+(MyC);
};
#endif