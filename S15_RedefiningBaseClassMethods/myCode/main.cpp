// Standard (system) header files
#include <iostream>
#include <cstdlib>

using namespace std;

#include "SavingsAccount.h"

// Main program
int main ()
{

	cout << "=================Accounts class==================" << endl;

	Account a1{1000.0};				//Account constructor, balance = 1000
	cout << a1 << endl;

	a1.deposit(2000.0);				//Account deposit method, balance = 3000
	cout << a1 << endl;

	a1.withdraw(1000.0);			//Account withdraw method, balance = 2000
	cout << a1 << endl;

	a1.withdraw(5000.0);			//Account withdraw method, insufficient funds
	cout << a1 << endl;

	cout << "=================Savings Account class==================" << endl;

	Savings_Account s1{1000.0, 5.0};				//Savings account constructor, balance = 1000 int_rate = 5
	cout << s1 << endl;

	s1.deposit(3000);						//Savings Account deposit method, balance = 4150 int_rate = 5
	cout << s1 << endl;

	s1.withdraw(2000);						//Accounts class withdraw method, balance = 2150 int_rate = 5
	cout << s1 << endl;

	s1.withdraw(5000);						//Insufficient funds
	cout << s1 << endl;

	return 0;
}
