/*
 * IPrintable.cpp
 *
 *  Created on: 13-Mar-2022
 *      Author: Aditi Prakash
 */

#include "IPrintable.h"

std::ostream &operator<<(std::ostream &os, const I_Printable &obj)
{
	obj.print(os);
	return os;
}




