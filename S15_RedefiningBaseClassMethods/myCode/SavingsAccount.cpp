/*
 * SavingsAccount.cpp
 *
 *  Created on: 01-Mar-2022
 *      Author: Aditi Prakash
 */

#include "SavingsAccount.h"

Savings_Account::Savings_Account()
	:Savings_Account{0.0, 0.0}
{}

Savings_Account::Savings_Account(double balance, double interest)
	:Account{balance}, int_rate{interest}
{}

void Savings_Account::deposit(double amount)
{
	amount = amount + (amount * int_rate/100);
	Account::deposit(amount);
}

std::ostream &operator<<(std::ostream &os, const Savings_Account &account)
{
	os << "Savings Account balance: " << account.balance << " Interest rate: " << account.int_rate << std::endl;
	return os;
}

Savings_Account::~Savings_Account()
{
	// TODO Auto-generated destructor stub
}

