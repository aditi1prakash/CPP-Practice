# Section 15 Challenge - Inheritance #

You are provided with a simple Account class heirarchy that contains
-   Account : Base class
-   Savings account : Derived class

An Account has a name and a balance.
A Savings account is an Account and adds an interest rate

Your challenge is the following:

1.  Add a Checking account class to the Account heirarchy
    A Checking account has a name and a balance and has a fee of 1.50$ per withdrawal transaction.
    Every withdrawal transaction will be assessed this flat fee.

2.  Add a Trust account class to the Account heirarchy
    A Trust account has a name and a balance, and an interest rate.
    The Trust account deposit works just like a savings account deposit.
    However, any deposits of 5000.0$ or more will receive a $50.00 bonus deposited to the account.

    The trust account withdrawal should allow only 3 withdrawals per year and each of these must be less than 20% of the account balance.
    You don't to have to keep track of the calendar time for this application, just make sure the fourth withdrawal fails :)

### Hints ###
-   Reuse existing functionality!!
-   Think about what the Base class will be for the new classes.
-   Add helper functions to Accounts_Util.h and Accounts_Util.cpp if you wish to work with your new classes.
    (You don't have to, but it will make your main much easier to use)

If you want to practice with operator overloading, you can overload operator+= and -= for deposit and withdrawal :)