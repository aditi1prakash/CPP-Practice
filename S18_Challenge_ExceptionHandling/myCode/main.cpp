#include <iostream>
#include <cstdlib>

#include <memory>
#include <string>
#include <vector>

#include "Account.h"
#include "SavingsAccount.h"
#include "CheckingAccount.h"
#include "TrustAccount.h"
#include "Accounts_Util.h"
#include "IllegalBalanceException.h"
#include "InsufficientFundsException.h"

using namespace std;

// Main program
int main ()
{

	std::vector<std::unique_ptr<Account>> up_acc;

	up_acc.push_back(std::move(std::make_unique<Savings_Account> ("Georgie", 5000)));
	up_acc.push_back(std::move(std::make_unique<Savings_Account> ("Matt", 5000)));
	up_acc.push_back(std::move(std::make_unique<Savings_Account> ("Tom", 5000)));

	deposit(up_acc, 2000);
	display(up_acc);

	withdraw (up_acc, 1000);
	display(up_acc);

	try
	{
		std::unique_ptr<Account> acc1 = std::make_unique<Savings_Account>("Shreya", 5000, 3);
		acc1->deposit(1000);
		std::cout << *acc1 << std::endl;

		acc1->withdraw(7000);
	}
	catch (const InsufficientFundsException &ex)
	{
		std::cout << ex.what() << std::endl;
	}

	try
	{
		std::unique_ptr<Account> acc2 = std::make_unique<Checking_Account>("Vidya", -1000);
	}
	catch (const IllegalBalanceException &ex)
	{
		std::cout << ex.what() << std::endl;
	}


	return 0;
}
