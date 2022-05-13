/*
 * IPrintable.h
 *
 *  Created on: 10-Mar-2022
 *      Author: Aditi Prakash
 */

#include <iostream>

#ifndef IPRINTABLE_H_
#define IPRINTABLE_H_

class I_Printable
{
	friend std::ostream &operator<<(std::ostream &os, const I_Printable &obj);

public:
	I_Printable(){}

	virtual void print(std::ostream &os) const = 0;

	virtual ~I_Printable() = default;
};

#endif /* IPRINTABLE_H_ */
