#include <iostream>
#include <cstdlib>
#include <ctime>
#include <math.h>
using namespace std;

float RandomFloat(float a, float b) {
	float random = ((float)rand()) / (float)RAND_MAX;
	float diff = b - a;
	float r = random * diff;
	return a + r;
}

double doubleRand() {
	return double(rand()) / (double(RAND_MAX) + 1.0);
}

int main(){
	srand(time(0));
	for (int i = 0; i < 10; i++){ cout << rand()%6 << endl; }// The Modulo is used to set the range here
	//if %6 then rand numbers are 0->5.

	cout << "-------------------------------" << endl;
	for (int i = 0; i < 10; i++){ cout << 1+(rand() % 6) << endl; }
	//rand numbers are 1->6.

	int min = 3, max = 5;
	cout << "------------Max & Min-------------" << endl;
	for (int i = 0; i < 10; i++){ cout << min + (rand() % ((max + 1)-min)) << endl; }
	//A way to use min and max in a range.


	float mind = 0.0, maxd = 5.75;
	cout << "------------Max & Min Double-------------" << endl;

	
	for (int i = 0; i < 10; i++){

		cout << "  "<<mind + (fmod(rand(), ((maxd)-mind))) << endl;

	}

	cout << "------------Max & Min float Method2-------------" << endl;
	for (int i = 0; i < 10; i++){
		cout << RandomFloat(mind, maxd) << endl;
	}

	cout << "------------Max & Min Double Method3 Final Result-------------" << endl;
	for (int i = 0; i < 20; i++) {
		cout << RandomFloat(mind, maxd)+ doubleRand() << "\n";
	}

	system("pause");
	return 0;
}