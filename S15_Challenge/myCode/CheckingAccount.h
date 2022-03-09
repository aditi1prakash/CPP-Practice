/*
 * CheckingAccount.h
 *
 *  Created on: 02-Mar-2022
 *      Author: Aditi Prakash
 */

#ifndef CHECKINGACCOUNT_H_
#define CHECKINGACCOUNT_H_

#include <string>
#include "Account.h"

class Checking_Account: public Account
{
	friend std::ostream& operator<<(std::ostream &os, const Checking_Account &account);

private:
	static constexpr const char *def_name = "Unnamed Savings Account";
	static constexpr double def_balance = 0.0;
	static constexpr double def_withdrawal_fee = 1.50;

public:
	//Constructor
	Checking_Account(std::string name = def_name, double balance = def_balance);

	//Withdrawal
	bool withdraw(double amount);

	//Inherits the deposit method

	//Destructor
	~Checking_Account();
};

#endif /* CHECKINGACCOUNT_H_ */
