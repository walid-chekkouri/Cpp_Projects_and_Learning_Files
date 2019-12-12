#include"Cat.h"


Cat::Cat(){
	age = 0;
	name = "None";
	n = 0;

}
Cat::Cat(string na, int ag){
	name = na;
	age = ag;
	n = 5;
}
int Cat::GetAge(){

	return age;
}
string Cat::GetName(){

	return name;
}
void Cat::Meow(){

	cout << "Meow!!" << endl;

}
void Cat::Introduce(){

	Meow();
	cout << "My name is " << name << " and I am " << age << " years old" << endl;

}