#include"B.h"
#include"A.h"

B::B(int ageVal, std::string nickNameVal)
{
	age = ageVal;
	nickName = nickNameVal;
}

void B::showA(A& a)
{
	std::cout << "Health: " << a.health << std::endl;
	std::cout << "Xp: " << a.xp << std::endl;
}

