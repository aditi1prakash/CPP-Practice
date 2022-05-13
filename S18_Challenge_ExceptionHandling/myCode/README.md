# Section 18 Challenge - Exception Handling #

For this challenge we want to integrate our own user-defined exception classes into the Account class heirarchy.

Consider the Account class examples from previous challenges. `IllegalBalanceException.h` file contains the declaration of the `IllegalBalanceException` class.

### Problem Description ###

1.  Derive `IllegalBalanceException` from std::exception and implement the what() method to provide an exception message. This exception should be thrown from the Account class constructor when an account object is created with a negative balance.

2.  Derive `InsufficientFundsException` from std::exception and implement the what() method to provided an exception messafe. This exception object should be thrown if a withdraw results in a negative balance. You should throw this exception from the Account withdraw method.

Test your code in the main driver. 

Have fun and experiment!