#include<iostream>
#include"Account_Util.h"

using namespace std;

int main()
{
	
	cout.precision(2);
	cout << fixed;


	//Accounts
	vector<Account>accounts;
	accounts.push_back(Account{});
	accounts.push_back(Account{"larry"});
	accounts.push_back(Account{ "Moe",2000 });
	accounts.push_back(Account{ "Curly",5000 });

	display(accounts);

	deposit(accounts, 1000);
	withdraw(accounts, 2000);

	//Savings

	vector<Savings_Account> savAccounts;
	savAccounts.push_back(Savings_Account{});
	savAccounts.push_back(Savings_Account{"Superman"});
	savAccounts.push_back(Savings_Account{ "Batman" , 2000});
	savAccounts.push_back(Savings_Account{ "Wonderwoman",5000,5.0 });

	display(savAccounts);
	deposit(savAccounts, 1000);
	withdraw(savAccounts, 2000);

	/*Account* pt1 = new Savings_Account("Hi", 4000);

	pt1->withdraw(1000); will use Account::withdraw (this uses static binding)!! (See polymorphism for better result(dynamic binding))
*/



	system("pause");
	return 0;
}