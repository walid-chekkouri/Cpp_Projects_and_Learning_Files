#pragma once
#include"Account.h"

//Savings Account is a type of Account
//adds an interest rate
//Withdraw - same as a regular account
//Deposit:
//Amount supplied to deposit will be incremented by (amount * intRate/100)
//and then the updated amount will be deposited


class Savings_Account:public Account
{
	friend std::ostream& operator<<(std::ostream& os, const Savings_Account& account);
private:
	static constexpr const char* defName = "Unnamed Savings Account";
	static constexpr double defBalance = 0.0;
	static constexpr double defIntRate = 0.0;
protected:
	double intRate;
public:
	Savings_Account(std::string name=defName, double balance=defBalance,double intRate=defIntRate);
	bool deposit(double amount);
	//Inherits the Account::withdraw method


};

