#include<iostream>
using namespace std;

int volume(int l=1, int w=1 , int h=1);//Default Arguments
int volume(int l, int w, int h){
	return l*w*h;

}

int main(){
	
	cout << volume() << endl;
	cout << volume(5) << endl;// assumes it to be the 1st argument/parameter
	cout << volume(2, 5, 2) << endl;

	system("pause");
	return 0;
}