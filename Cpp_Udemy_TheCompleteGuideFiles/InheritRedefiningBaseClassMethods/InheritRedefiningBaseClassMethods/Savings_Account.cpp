#include "Savings_Account.h"

Savings_Account::Savings_Account(std::string name,double balance, double intRate)
	:Account(name, balance), intRate{intRate}
{

}

//Deposit:
//Amount supplied to deposit will be incremented by (amount * intRate/100)
//and then the updated amount will be deposited


bool Savings_Account::deposit(double amount)//redefine base class deposit method
{
	amount += amount * (intRate / 100);
	return Account::deposit(amount);//invoke call base class method
}

std::ostream& operator<<(std::ostream& os, const Savings_Account& account)
{
	os << "[Savings account: " << account.name <<": " <<account.balance <<", " <<account.intRate<<"%]";
	return os;
}