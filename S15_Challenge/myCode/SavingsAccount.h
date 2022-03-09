/*
 * SavingsAccount.h
 *
 * Savings account is a type of Account
 * that adds an interest rate
 *
 * Withdraw: Same as regular account
 *
 * Deposit:
 * 		Amount supplied to deposit will be incremented by (amount * int_rate/100)
 * 		and then the updated amount will be deposited
 *
 *  Created on: 01-Mar-2022
 *      Author: Aditi Prakash
 */

#ifndef SAVINGSACCOUNT_H_
#define SAVINGSACCOUNT_H_

#include <iostream>
#include "Account.h"

class Savings_Account : public Account
{
	friend std::ostream& operator<<(std::ostream &os, const Savings_Account &account);

private:
	static constexpr const char *def_name = "Unnamed Savings Account";
	static constexpr double def_balance = 0.0;
	static constexpr double def_int_rate = 0.0;

protected:
	double int_rate;

public:
	//Constructor
	Savings_Account(std::string name = def_name, double balance = def_balance, double int_rate = def_int_rate);

	//Deposit method
	bool deposit (double amount);

	//Inherits the account withdraw method

	//Destructor
	~Savings_Account();
};

#endif /* SAVINGSACCOUNT_H_ */
