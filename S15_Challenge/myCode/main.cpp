#include <iostream>
#include <cstdlib>

using namespace std;
#include <vector>

#include "TrustAccount.h"
#include "Accounts_Util.h"
#include "CheckingAccount.h"


// Main program
int main ()
{
	//Accounts
	vector <Account> accounts;
	accounts.push_back(Account{"Harry"});
	accounts.push_back(Account{"Ronald", 2000});
	accounts.push_back(Account{"Bretta", 6000});
	accounts.push_back(Account{"George", 3600});

	display(accounts);
	deposit(accounts, 1000);
	withdraw(accounts, 2000);

	//Savings account
	vector <Savings_Account> savings_account;
	savings_account.push_back(Savings_Account{"Nestle"});
	savings_account.push_back(Savings_Account{"Bourbon", 5000});
	savings_account.push_back(Savings_Account{"Parle-G", 2500});
	savings_account.push_back(Savings_Account{"Marie", 4000});

	display(savings_account);
	deposit(savings_account, 2000);
	withdraw(savings_account, 1000);

	//Checking account
	vector <Checking_Account> checking_account;
	checking_account.push_back(Checking_Account{"STM32"});
	checking_account.push_back(Checking_Account{"Infineon", 70000});
	checking_account.push_back(Checking_Account{"Cypress", 50000});
	checking_account.push_back(Checking_Account{"Nvidia", 85000});

	display(checking_account);
	deposit(checking_account, 30000);
	withdraw(checking_account, 10000);

	//Trust account
	vector <Trust_Account> trust_account;
	trust_account.push_back(Trust_Account{"Psych", 50000});
	trust_account.push_back(Trust_Account{"Mentalist", 30000});
	trust_account.push_back(Trust_Account{"TBBT", 25000});
	trust_account.push_back(Trust_Account{"Friends", 10000});

	display(trust_account);
	deposit(trust_account, 1000);
	withdraw(trust_account, 1000);

	//Withdrawal > 3 or >20% of account balance
	for(int i = 0; i < 5; i++)
		withdraw(trust_account, 2000);


	return 0;
}
