/*
 * Accounts_Util.h
 *
 *  Created on: 01-Mar-2022
 *      Author: Aditi Prakash
 */

#ifndef ACCOUNTS_UTIL_H_
#define ACCOUNTS_UTIL_H_

#include <vector>

#include "Account.h"
#include "TrustAccount.h"
#include "CheckingAccount.h"

//Helper functions and not part of any class - overloaded functions, compiler decides
//based on the vector type

/*Utility helper functions for Account class*/

void display(const std::vector<Account> &accounts);
//Deposit or withdraw 'amount' from all accounts
void deposit(std::vector<Account> &accounts, double amount);
void withdraw(std::vector<Account> &accounts, double amount);

/*Utility helper functions for Savings Account class*/

void display(const std::vector<Savings_Account> &accounts);
//Deposit or withdraw 'amount' from all accounts
void deposit(std::vector<Savings_Account> &accounts, double amount);
void withdraw(std::vector<Savings_Account> &accounts, double amount);

/*Utility helper functions for Checking Account class*/

void display(const std::vector<Checking_Account> &accounts);
//Deposit or withdraw 'amount' from all accounts
void deposit(std::vector<Checking_Account> &accounts, double amount);
void withdraw(std::vector<Checking_Account> &accounts, double amount);

/*Utility helper functions for Trust Account class*/

void display(const std::vector<Trust_Account> &accounts);
//Deposit or withdraw 'amount' from all accounts
void deposit(std::vector<Trust_Account> &accounts, double amount);
void withdraw(std::vector<Trust_Account> &accounts, double amount);

#endif /* ACCOUNTS_UTIL_H_ */
