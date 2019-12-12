#include <iostream>
using namespace std;

class Enemy{
protected:
	int attackPower;
public:
	void setAttackPower(int ap){
	
		attackPower = ap;
	}

};

class Warrior : public Enemy{
public:
	void attack()
	{
		cout << "I am a warrior, boom! - " << attackPower << endl;
	}


};
class Beast : public Enemy{
public:
	void attack()
	{
		cout << "I am a beast, whaaaa! - " << attackPower << endl;
	}


};

int main(){

	Warrior w1;
	Beast b1;

	Enemy *enemy1 = &w1;
	Enemy *enemy2 = &b1;

	enemy1->setAttackPower(30);
	enemy2->setAttackPower(50);

	w1.attack();
	b1.attack();

	system("pause");
	return 0;
}