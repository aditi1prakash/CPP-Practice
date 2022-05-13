// Section 16 
// Challenge 
#include <iostream>
#include <vector>
#include "Account.h"
#include "SavingsAccount.h"
#include "CheckingAccount.h"
#include "TrustAccount.h"
#include "Accounts_Util.h"

using namespace std; 

int main() {
    cout.precision(2);
    cout << fixed;

    //Test cases
    Account *acc1 = new Checking_Account();
    Account *acc2 = new Trust_Account();
    Account *acc3 = new Savings_Account();

    vector <Account *> accounts {acc1, acc2, acc3};
    deposit(accounts, 5000);

    display(accounts);

    Trust_Account t1{"KidsTrust", 5000, 0};
    accounts.push_back(&t1);

    Account *t2 = new Trust_Account("Aditi", 15000, 2.6);
    cout << *t2 << endl;

    accounts.push_back(t2);
    display(accounts);

    //Clean up pointers
    delete acc1;
    delete acc2;
    delete acc3;



    // Savings 

//    vector<Savings_Account> sav_accounts;
//    sav_accounts.push_back(Savings_Account {} );
//    sav_accounts.push_back(Savings_Account {"Superman"} );
//    sav_accounts.push_back(Savings_Account {"Batman", 2000} );
//    sav_accounts.push_back(Savings_Account {"Wonderwoman", 5000, 5.0} );
//
//    display(sav_accounts);
//    deposit(sav_accounts, 1000);
//    withdraw(sav_accounts,2000);
//
//   // Checking
//
//    vector<Checking_Account> check_accounts;
//    check_accounts.push_back(Checking_Account {} );
//    check_accounts.push_back(Checking_Account {"Kirk"} );
//    check_accounts.push_back(Checking_Account {"Spock", 2000} );
//    check_accounts.push_back(Checking_Account {"Bones", 5000} );
//
//    display(check_accounts);
//    deposit(check_accounts, 1000);
//    withdraw(check_accounts, 2000);
//
//    // Trust
//
//    vector<Trust_Account> trust_accounts;
//    trust_accounts.push_back(Trust_Account {} );
//    trust_accounts.push_back(Trust_Account {"Athos", 10000, 5.0} );
//    trust_accounts.push_back(Trust_Account {"Porthos", 20000, 4.0} );
//    trust_accounts.push_back(Trust_Account {"Aramis", 30000} );
//
//    display(trust_accounts);
//    deposit(trust_accounts, 1000);
//    withdraw(trust_accounts, 3000);
//
//    // Withdraw 5 times from each trust account
//    // All withdrawals should fail if there are too many withdrawals or if the withdrawl is > 20% of the balance
//    for (int i=1; i<=5; i++)
//        withdraw(trust_accounts, 1000);
//

    
    return 0;
}

