#include<iostream>
using namespace std;

class point{

private:
	int x, y;
public:
	
	int getX(){
		return x;
	}

	int getY(){
		return y;
	}
	void setXY(int a,int b){
		x = a;
		y = b;

	}
	void print(){
		cout << "Point1: " << getX() << "," << getY() << endl;
	
	}

};

int main(){
	point p1, p2;
	/*
	p1.setXY(3,5);
	p2.setXY(6,8);

	p1.print();
	p2.print();
	*/
//the return value of ++i is i+1 whereas the return value of i++ is i.
	int i = 1;
	int j = 1;
	cout << i++ << endl;
	cout << i << endl;
	cout << "---j---------------" << endl;
	cout << ++j << endl;
	cout << j << endl;
	


	system("pause");
	return 0;
}