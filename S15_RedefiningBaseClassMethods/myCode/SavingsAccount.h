/*
 * SavingsAccount.h
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

protected:
	double int_rate;

public:
	//Default constructor
	Savings_Account();

	//Overloaded constructor
	Savings_Account(double balance, double interest);

	//Deposit method
	void deposit (double amount);

	//Destructor
	~Savings_Account();
};

#endif /* SAVINGSACCOUNT_H_ */
