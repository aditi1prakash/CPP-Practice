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

#include "IPrintable.h"

class Account : public I_Printable
{

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

	//Display method - pure virtual
	virtual bool deposit(double amount) = 0;

	//Withdraw method - pure virtual
	virtual bool withdraw(double amount) = 0;

	//Overridden print function from I_Printable interface class
	virtual void print(std::ostream &os) const override;

	//Getter method
	double get_balance() const;

	virtual ~Account();
};

#endif /* ACCOUNT_H_ */
