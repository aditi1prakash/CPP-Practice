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

private:
	static constexpr const char *def_name = "Unnamed Checking Account";
	static constexpr double def_balance = 0.0;
	static constexpr double def_withdrawal_fee = 1.50;

public:
	//Constructor
	Checking_Account(std::string name = def_name, double balance = def_balance);

	//Withdrawal
	virtual bool withdraw(double amount) override;

	//Deposit
	virtual bool deposit(double amount) override;

	//Overridden print class from I_Printable interface class
	virtual void print(std::ostream &os) const override;

	//Destructor
	virtual ~Checking_Account() = default;
};

#endif /* CHECKINGACCOUNT_H_ */
