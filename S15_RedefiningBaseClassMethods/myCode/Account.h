/*
 * Account.h
 *
 *  Created on: 01-Mar-2022
 *      Author: Aditi Prakash
 */

#ifndef ACCOUNT_H_
#define ACCOUNT_H_

#include <iostream>

class Account
{
	friend std::ostream& operator<<(std::ostream &os, const Account &account);
protected:
	double balance;

public:
	//Constructor
	Account();

	//Overloaded constructor
	Account(double balance);

	//Display method
	void deposit(double amount);

	//Withdraw method
	void withdraw(double amount);

	~Account();
};

#endif /* ACCOUNT_H_ */
