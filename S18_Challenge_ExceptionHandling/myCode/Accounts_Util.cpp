/*
 * Accounts_Util.cpp
 *
 *  Created on: 01-Mar-2022
 *      Author: Aditi Prakash
 */
#include "Accounts_Util.h"
#include "InsufficientFundsException.h"

//Displays account objects in a vector of Account objects
void display(const std::vector<std::unique_ptr<Account>> &accounts)
{
	std::cout << "\n-------------Accounts--------------------------" << std::endl;
	for(const auto &acc: accounts)
	{
		std::cout << *acc << std::endl;
	}
}

//Deposit supplied amount to each account object in the vector
void deposit(std::vector<std::unique_ptr<Account>> &accounts, double amount)
{
	std::cout << "\n--------Depositing to Accounts-----------------" << std::endl;

	for(auto &acc:accounts)
	{
		if(acc->deposit(amount))
		{
			std::cout << "Deposited " << amount << " to " << *acc << std::endl;
		}
		else
		{
			std::cout << "Failed deposit of " << amount << " to " << *acc << std::endl;
		}
	}
}

//Withdraw amount from each account object in the vector
void withdraw(std::vector<std::unique_ptr<Account>> &accounts, double amount)
{
	std::cout << "-------------Withdrawing from Accounts----------------" << std::endl;

	for(auto &acc: accounts)
	{
		try{
			acc->withdraw(amount);
			std::cout << "Withdrew " << amount << " from " << *acc << std::endl;
		}
		catch (const InsufficientFundsException &ex)
		{
			std::cout << ex.what() << std::endl;
		}
	}
}



