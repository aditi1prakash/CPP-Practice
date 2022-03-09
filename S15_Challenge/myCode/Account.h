/*
 * Account.h
 *
 *  Created on: 01-Mar-2022
 *      Author: Aditi Prakash
 */

#ifndef ACCOUNT_H_
#define ACCOUNT_H_

#include <iostream>
#include <string>

class Account
{
	//Overloaded insertion operator
	friend std::ostream& operator<<(std::ostream &os, const Account &account);

private:
	//Constants that are available only to the class - default values
	//Default values need not be changed at multiple places, can be changed only at one place
	static constexpr const char *def_name = "Unnamed Account";
	static constexpr double def_balance = 0.0;

protected:
	std::string name;
	double balance;

public:
	//Constructor
	Account(std::string name = def_name, double balance = def_balance);
	//Alternative --
	//Account (std::string name = "Unnamed account", double balance = 0.0);

	//Overloaded constructor
	Account(double balance);

	//Display method
	bool deposit(double amount);

	//Withdraw method
	bool withdraw(double amount);

	//Getter method
	double get_balance() const;

	~Account();
};

#endif /* ACCOUNT_H_ */
