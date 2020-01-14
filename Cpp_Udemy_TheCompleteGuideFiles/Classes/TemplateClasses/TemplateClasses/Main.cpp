#include<iostream>
#include<string>

template <class myT>

class TemplateClass
{
public:
	myT i, x;
	TemplateClass(myT, myT);
};

template <class myT>
TemplateClass<myT>::TemplateClass(myT first, myT second)
{
	i = first; x = second;
}

int main(){

	TemplateClass<float> templateFloat(3.6f, 8.9f);
	TemplateClass<std::string> templateString("first", "second");

	std::cout << templateFloat.i << std::endl;

	std::cout << templateString.i << std::endl;

	system("pause");
	return 0;
}