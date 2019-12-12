#include<iostream>
#include<memory>

using namespace std;

class IllegalBalanceException:public exception {

public:
	IllegalBalanceException() noexcept = default;
	~IllegalBalanceException() = default;
	virtual const char* what() const noexcept
	{
		return "Illegal balance exception";
	}
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
			throw IllegalBalanceException();
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
		cout << "Moes account's nb1= " << moesAccount->getNb1() << endl;

	}

	catch (const IllegalBalanceException& ex)
	{
		cerr << ex.what()<<endl;
	}
	cout << "Program finished" << endl;

	system("pause");
	return 0;
}