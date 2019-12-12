#include <iostream>
#include <string>
#include <time.h>    

using namespace std;
int const rows = 4;
const int columns = 4;
int matrix[rows][columns];
int maxMines = 3;

void Clear(){
	for (int i = 0; i < rows;i++){
		for (int j = 0; j < columns; j++){
			matrix[i][j] = 1;
		}
	}
}

void Show(){
	for (int i = 0; i < rows; i++){
		for (int j = 0; j < columns; j++){
			cout<<matrix[i][j]<<" ";
		}
		cout << endl;
	}
	

}

void SetMines(){
	int m = 0;
	while (m < maxMines){
		int x = rand() % rows;
		int y = rand() % columns;
		if (matrix[x][y]!=0){
			m++;
			matrix[x][y] = 0;
		
		}
	}
}

bool Dead(int x, int y){
	if (matrix[x][y] == 0){
		matrix[x][y] = 2;
		return true;
	}
	return false;
	
}

int NumbMines(){
	int c = 0;
	for (int i = 0; i < rows; i++){
		for (int j = 0; j < columns; j++){
			if (matrix[i][j] == 0){
				c++;
			
			}
		}
	}
	return c;
}

int main(){
	srand(time(NULL));
	Clear();
	SetMines();
	char prompt;
	int x, y;
	while (true){
	
		cout << "Please insert location (x,y): ";
		cin >> x>> y;
		if (Dead(x, y))
			cout << "You got it"<<endl;
		else
			cout << "Sorry nothing here"<<endl;
		cout << "Number of Mines left: " << NumbMines() << endl;
		cout << "Do you want to surrender? (y/n)" << endl; cin >> prompt;
		if (prompt == 'y' || prompt == 'Y'){
			break;
		}


	}
	cout << "Game over" << endl;
	Show();
	system("pause");
	return 0;
}