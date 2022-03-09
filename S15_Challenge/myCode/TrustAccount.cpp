/*
 * TrustAccount.cpp
 *
 *  Created on: 02-Mar-2022
 *      Author: aditi
 */

#include "TrustAccount.h"

Trust_Account::Trust_Account(std::string name, double balance, double int_rate)
	:Savings_Account::Savings_Account{name, balance, int_rate}, num_of_withdrawals{0}
{}

bool Trust_Account::deposit(double amount)
{
	if (amount >= def_bonus_min)
	{
		amount += def_bonus;
	}
	return Savings_Account::deposit(amount);
}

std::ostream &operator<<(std::ostream &os, const Trust_Account &account)
{
	os << "[Trust Account: " << account.name << ":"
			<< account.balance << ", Interest: "
			<< account.int_rate << "%" << ", Withdrawals: " << account.num_of_withdrawals << "]" << std::endl;
	return os;
}

//Withdrawal method
bool Trust_Account::withdraw(double amount)
{
	if ((++num_of_withdrawals > def_max_withdrawal) || (amount > (def_withdrawal_limit*balance)))
		return false;

	return Account::withdraw(amount);

}

Trust_Account::~Trust_Account()
{
	// TODO Auto-generated destructor stub
}

