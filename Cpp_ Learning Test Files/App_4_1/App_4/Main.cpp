#include <iostream>
#include <string>
using namespace std;

class walid{

	// by default the access modifier for the members will be Private.
	//rotected: Protected access modifier is similar to that of private access modifiers,
	//the difference is that the class member declared as Protected are inaccessible outside the class but they can be accessed by any subclass(derived class) of that class.
public:
	//This is a constructor, works directly after declaration of an object using this class
	walid(string newstring){
		setName(newstring);
		cout <<"This is the value of string when an object is created: " <<name << endl;

	}

	void setName(string newName){
		name = newName;
	}
	string getName(){
	
		return name;
	}


private:
	string name = "Walid";
	void printer(){
		cout << "This is a message from class Walid" << endl;
	
	}
};



int main(){
	/*walid walidC("ZZ");
	walidC.setName("The new value set in Main is: Hamza");//This is the new string value after creation
	cout<<walidC.getName()<<endl;

	*/
	int nArray[5] = { 0 };

	for (int i = 0; i < 4; i++){
		cout << "Enter a value for number: " << i + 1 << endl;
		cin >> nArray[i];

	}

	for (int i = 0; i < (sizeof(nArray) / sizeof(*nArray)); i++){//simple division to find the length of the array

		cout << "element number is: " << nArray[i] << endl;

	}
	
	
		cout << nArray[5] << endl;

	

	system("pause");


	return 0;
}