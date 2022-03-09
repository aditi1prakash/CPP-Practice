/*
 * CheckingAccount.cpp
 *
 *  Created on: 02-Mar-2022
 *      Author: Aditi Prakash
 */

#include "CheckingAccount.h"

	//Constructor
Checking_Account::Checking_Account(std::string name, double balance)
	:Account{name, balance}
{}

//Withdrawal
bool Checking_Account::withdraw(double amount)
{
	if(amount > def_withdrawal_fee)
	{
		amount += def_withdrawal_fee;
	}
	return Account::withdraw(amount);
}

std::ostream& operator<<(std::ostream &os, const Checking_Account &account)
{
	os << "Checking account: " << account.name << ", Balance: " << account.balance << std::endl;
	return os;
}

Checking_Account::~Checking_Account()
{}

