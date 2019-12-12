#include <iostream> 
using namespace std;

int main()
{
	try{
		throw 4;
	}

	catch (const char *excp){
		cout << "Caught: " << excp<<endl;
	}

	//catch (int excp){
		//cout << "Caught int : " << excp << endl;
	//}

	catch (...){
		cout << "Default Exception\n";
	}





	system("pause");
	return 0;
}