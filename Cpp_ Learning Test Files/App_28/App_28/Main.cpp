#include <iostream>
using namespace std;

class Enemy{// This is an abstract class (contains virtual function(s))
public:
	//virtual void attack() = 0;  Pure virtual function 
	virtual void attack(){
		cout << "The enemy class" << endl;
	}


};

class Warrior : public Enemy{
public:
	void attack(){
		cout << "Warrior Attacked" << endl;
	}
	

};
class Beast : public Enemy{
public:
	

};

int main(){
	Warrior w1;
	Beast b1;

	Enemy *enemy1 = &w1;
	Enemy *enemy2 = &b1;

	enemy1->attack();
	enemy2->attack();

	system("pause");
	return 0;
}