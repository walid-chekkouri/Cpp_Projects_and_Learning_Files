#include <iostream>
#include <array>
using namespace std;

int main()
{

	array <double, 5> notes;
	int mysize = notes.size();
	//Showing the size of our array//cout << "La taille de votre tableau est: " << mysize<< endl;
	
	for (int i = 0; i < notes.size() ; i++){//if type int is not working use type size_t instead
		cout << "Entrer l'element numero: " << i + 1 << endl;
		cin >> notes[i];

	}
	cout << endl;

	for (int i = 0; i < notes.size(); i++){
		//Or we can use the classi//cout << notes[i] << endl;
		cout << notes.at(i) << endl;

	}
	cout <<"le 1er element de tableau est: "<< notes.at(0)<<endl;
	system("pause");
	return 0;
}

