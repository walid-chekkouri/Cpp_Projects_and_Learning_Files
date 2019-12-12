#ifndef CDAY_H
#define CDAY_H

class Cday
{
public:
	Cday(int m, int d, int y);
	void printDate();
private:
	int month, day, year;
};

#endif