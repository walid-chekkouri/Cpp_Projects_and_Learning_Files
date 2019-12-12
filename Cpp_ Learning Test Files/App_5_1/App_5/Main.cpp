#include<iostream>
#include<string>
using namespace std;


int main(){
	/*USING POINTERS
	int *p;
	int nb = 6;
	p = &nb;
	cout << "Value of nb is: "<<*p << endl;
	cout <<"@ of the variable nb is: " <<p << endl;
	//p is equal to the adress of nb,*p is equal to the value of the variable pointed by our pointer p(Which is nb=6), so *p equals nb.
	*p += 10;
	
	Never use *p, INSTEAD use (*p)++;
	
	cout << "New value of nb (using pointer) is: "<<*p << endl;
	cout << "New value of nb (directly) is: " << nb << endl;
	

	//USING STRINGS
	char *chr1= "Hello everyone";
	char chr2[5] = "Wali";
	int numb[5] = { 3, 4, 6 };
	cout << chr1 << endl;
	cout << chr2 << endl;
	cout << "\t--------------Strings---------------"<< endl;
	string s = "Mamamiya!";
	cout << s << endl;
	for (int i = 0; i<s.length(); i++){
		cout << "The "<< i+1 <<" character is: " << s.at(i) << endl;
	}
	cout << "\t--------------Character Arrays---------------" << endl;
	int j = 0;
	cout << chr2 << endl;
	while (chr2[j]!='\0'){
		cout << "The " << j +1<< " character is: " << chr2[j] << endl;
		j++;
	}

	cout << "-----Appending--------------" << endl;
	s.append(" Papapiya!");
	cout << s<<endl;
	cout << "-----Inserting--------------" << endl;
	s.insert(9, " 123 ");
	cout << s << endl;
	cout << "-----Replace--------------" << endl;
	s.replace(0,9,"Sisteriya!");
	cout << s << endl;
	cout << "-----Find & Replace--------------"<<endl;
		string st = "Welcome Home";
		cout << st << endl;
		cout << "Chose a word to replace" << endl;
		string repl1; cin >> repl1;
		int n1=st.find(repl1);
		int n2 = repl1.length();
		cout << "Replace it with what word?: " << endl;
		string repl2; cin >> repl2;
		st.replace(n1, n2, repl2);
		cout << st << endl;
		*/
	string str3 = "HelloWorld";
		cout << "-----Substract--------------" << endl;
		cout <<str3 << endl;
		//str3.substr(3,2); This line alone doesn't substract from the string and changes it, only substract to show it.
		cout << str3.substr(3,2) << endl;
		
		system("pause");
	
	return 0;
}