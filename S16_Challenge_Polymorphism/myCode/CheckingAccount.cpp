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

//Deposit
bool Checking_Account::deposit(double amount)
{
	return Account::deposit(amount);

}

void Checking_Account::print(std::ostream &os) const
{
	os << "Checking account: " << name << ", Balance: " << balance << std::endl;
}
