#include<iostream>

class Box{

	double width;
public:
	void setWidth(double);
	friend void showWidth(Box&);
};


void Box::setWidth(double width)
{
	this->width = width;
}
/* printWidth() is not a member function of any class.
Because printWidth() is a friend of Box, it can
directly access any member of this class
*/
void showWidth(Box& box)
{
	std::cout <<"Box Width: "<<box.width << std::endl;

}

int main(){

	Box box1;

	box1.setWidth(4.0f);

	showWidth(box1);

	system("pause");
	return 0;
}