/*
 * Account.cpp
 *
 *  Created on: 01-Mar-2022
 *      Author: Aditi Prakash
 */

#include "Account.h"
#include "IllegalBalanceException.h"
#include "InsufficientFundsException.h"

Account::Account(std::string name, double balance)
	:name{name}
{
	if (balance < 0)
		throw IllegalBalanceException();

	this->balance = balance;
}

bool Account::deposit(double amount)
{
	if (amount < 0)
		return false;
	else
	{
		balance = balance + amount;
		return true;
	}
}

bool Account::withdraw(double amount)
{
	/* Throw an exception when funds are insufficient */
	if(balance - amount < 0)
		throw InsufficientFundsException();

	balance = balance - amount;
	return true;
}

double Account::get_balance() const
{
	return balance;
}

void Account::print(std::ostream &os) const
{
	os << "[Account: " << name << ": " << balance << "]" << std::endl;
}

Account::~Account()
{}

