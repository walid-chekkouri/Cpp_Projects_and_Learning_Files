#include<iostream>
#include<memory>
#include<vector>
using namespace std;


class Test {
private:
	int data;
public:
	Test() :data{ 0 } {cout << "\tTest Constructor(" << data << ")\n";}
	Test(int data) :data{ data } {cout << "\tTest Constructor(" << data << ")\n";}
	int getData()const { return data; }
	~Test() { cout << "\tTest Destructor(" << data << ")" << std::endl; }
};

void myDeleter(Test* ptr)//has to return void.
{
	std::cout << "\tUsing my custom function deleter\n";
	delete ptr;
}

int main()
{

	{//using a function
		std::shared_ptr<Test>ptr1{ new Test{100}, myDeleter };//we have to use new here not makeshared.
	}
	
	std::cout << "==================================\n";

	{
		//Using a Lambda expression
		std::shared_ptr<Test>ptr1(new Test{1000},
			[](Test* ptr)
			{
				std::cout << "\tUsing my custom lambda deleter" << std::endl;
				delete ptr;
			});



	}



	system("pause");
	return 0;
}