#pragma once
#include<vector>
#include"Account.h"
#include"Savings_Account.h"

//Utility helper functions for Account class

void display(const std::vector<Account>& accounts);
void deposit(std::vector<Account>& accounts, double amount);
void withdraw(std::vector<Account>& accounts, double amount);


//Utility helper functions for Savings_Account class

void display(const std::vector<Savings_Account>& accounts);
void deposit(std::vector<Savings_Account>& accounts, double amount);
void withdraw(std::vector<Savings_Account>& accounts, double amount);