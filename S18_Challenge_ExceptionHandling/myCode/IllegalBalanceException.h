/*
 * IllegalBalanceException.h
 *
 *  Created on: 23-Mar-2022
 *      Author: Aditi Prakash
 */

#ifndef ILLEGALBALANCEEXCEPTION_H_
#define ILLEGALBALANCEEXCEPTION_H_

#include <iostream>

class IllegalBalanceException : public std::exception
{

public:

	IllegalBalanceException () noexcept = default;

	virtual const char* what() const noexcept { return "Illegal Balance Exception raised";}

	~IllegalBalanceException () noexcept = default;

};




#endif /* ILLEGALBALANCEEXCEPTION_H_ */
