#include<iostream>
#include<memory>

using namespace std;

class IllegalBalance {


};

class Account
{
private:
	int nb1;

public:
	Account(int nb1Val)
		:nb1{ nb1Val }
	{
		if (nb1 < 0)
		{
			throw IllegalBalance();
		}

		cout << "Account created with nb1= " << nb1 << endl;
	}

	int getNb1()
	{
		return nb1;
	}

	~Account() {};
};


int main()
{
	

	try
	{
		unique_ptr<Account> moesAccount = make_unique<Account>(-20);
		cout << "Moes account's nb1= " << moesAccount->getNb1()<< endl;
		
	}

	catch (const IllegalBalance& ex)
	{
		cerr << "Couldn't create account - negative balance\n";
	}
	cout << "Program finished" << endl;

	system("pause");
	return 0;
}