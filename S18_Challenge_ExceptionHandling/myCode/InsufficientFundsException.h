/*
 * InsufficientFundsException.h
 *
 *  Created on: 23-Mar-2022
 *      Author: Aditi Prakash
 */

#ifndef INSUFFICIENTFUNDSEXCEPTION_H_
#define INSUFFICIENTFUNDSEXCEPTION_H_

#include <iostream>

class InsufficientFundsException : public std::exception
{
public:
	InsufficientFundsException() noexcept = default;

	virtual const char *what() const noexcept { return "Insufficient balance exception"; }

	~InsufficientFundsException() noexcept = default;
};




#endif /* INSUFFICIENTFUNDSEXCEPTION_H_ */
