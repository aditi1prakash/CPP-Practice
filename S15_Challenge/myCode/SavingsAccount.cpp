/*
 * SavingsAccount.cpp
 *
 *  Created on: 01-Mar-2022
 *      Author: Aditi Prakash
 */

#include "SavingsAccount.h"

Savings_Account::Savings_Account(std::string name, double balance, double interest)
	:Account{name, balance}, int_rate{interest}
{}

bool Savings_Account::deposit(double amount)
{
	amount = amount + (amount * int_rate/100);
	return Account::deposit(amount);
}

std::ostream &operator<<(std::ostream &os, const Savings_Account &account)
{
	os << "[Savings Account: " << account.name << ":"
			<< account.balance << ", Interest: "
			<< account.int_rate << "%]" << std::endl;
	return os;
}

Savings_Account::~Savings_Account()
{}

