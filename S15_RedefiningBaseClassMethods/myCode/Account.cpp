/*
 * Account.cpp
 *
 *  Created on: 01-Mar-2022
 *      Author: Aditi Prakash
 */

#include "Account.h"

Account::Account()
	:Account{0.0}
{}

Account::Account(double balance)
	:balance{balance}
{}

void Account::deposit(double amount)
{
	balance = balance + amount;
}

void Account::withdraw(double amount)
{
	if(balance - amount > 0)
	{
		balance = balance - amount;
	}
	else
	{
		std::cout << "Insufficient funds" << std::endl;
	}
}

std::ostream &operator<<(std::ostream &os, const Account &account)
{
	os << "Account balance: " << account.balance << std::endl;
	return os;
}

Account::~Account()
{}

