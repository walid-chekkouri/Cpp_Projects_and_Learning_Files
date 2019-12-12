#include <iostream>
using namespace std;
class Point{
private:
	int x, y;
public:
	int getX(){
	
	
		return x;
	}
	int getY(){


		return y;
	}

	void setXY(int a, int b){
		x = a;
		y = b;
	
	}

};

int main(){

	Point p1, p2;
	p1.setXY(10,40); 
	cout << "Your point: " << p1.getX() << " , " << p1.getY() << endl;
	system("pause");

	return 0;
}