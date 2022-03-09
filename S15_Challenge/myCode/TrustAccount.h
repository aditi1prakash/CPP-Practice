/*
 * TrustAccount.h
 *
 *  Created on: 02-Mar-2022
 *      Author: aditi
 */

#ifndef TRUSTACCOUNT_H_
#define TRUSTACCOUNT_H_

#include "SavingsAccount.h"

class Trust_Account: public Savings_Account
{
	friend std::ostream& operator<<(std::ostream &os, const Trust_Account &account);

private:
	static constexpr const char *def_name = "Unnamed Savings Account";
	static constexpr double def_balance = 0.0;
	static constexpr double def_int_rate = 0.0;
	static constexpr double def_bonus = 50.0;
	static constexpr double def_bonus_min = 5000.0;
	static constexpr double def_withdrawal_limit = 0.2;			/*not more than 20% of the balance amount*/
	static constexpr int def_max_withdrawal  = 3;

protected:
	int num_of_withdrawals;

public:
	//Constructor
	Trust_Account(std::string name = def_name, double balance = def_balance, double int_rate = def_int_rate);

	//Deposits of more than 5000$ will received a bonus of 50$
	bool deposit(double amount);

	//Only 3 withdrawals allowed and each up to a maximum 20% of account balance
	bool withdraw(double amount);

	//Destructor
	~Trust_Account();
};

#endif /* TRUSTACCOUNT_H_ */
