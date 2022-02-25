/*
 * Mystring.cpp
 *
 *  Created on: 24-Feb-2022
 *      Author: Aditi Prakash
 */

#include <iostream>

#include "Mystring.h"

Mystring::Mystring()
	:str{nullptr}
{
	//Empty string, allocate memory and set to null character
	str = new char[1];
	*str = '\0';
}

// Overloaded constructor
Mystring::Mystring(char *mystring)
	:str{nullptr}
{
	//Check for nullptr object
	if(mystring == nullptr)
	{
		str = new char [1];
		*str = '\0';
	}
	else //Allocate memory and copy
	{
		str = new char[std::strlen(mystring) + 1];
		std::strcpy(str, mystring);
	}
}

//Copy constructor
Mystring::Mystring (const Mystring &source)
	:str{nullptr}
{
	//Deep copy
	str = new char [std::strlen(source.str) + 1];
	std::strcpy(str, source.str);
}

//Move constructor
Mystring::Mystring (Mystring &&source)
	:str{source.str}
{
	//Source string is moved to current object, set the pointer to null
	source.str = nullptr;
}

//Copy assignment
Mystring& Mystring::operator=(const Mystring &rhs)
{
	/* Check if same object is being assigned, p1 = p1 */
	if (this == &rhs)
	{
		//Expects a reference in return, hence this object has to be dereferenced
		return *this;
	}
	/* Current object could be pointing to a memory, delete it before new assignment */
	delete [] str;

	/* Allocate memory to the object, and copy rhs to lhs */
	this->str = new char [std::strlen(rhs.str) + 1];
	std::strcpy(this->str, rhs.str);

	/* Return the new object */
	return *this;
}

//Move assignment
Mystring& Mystring::operator= (Mystring &&rhs)
{
	//Check if the objects are same
	if(this == &rhs)
	{
		return *this;
	}

	//Current object could be pointing to a memory, delete it before new assignment
	delete [] this->str;

	//Steal the pointer from rhs and assign it to lhs
	this->str = rhs.str;

	/* Set the temporary object to nullptr - not doing this will erase the data
	 * pointed to by the temporary object when its destructor is called. This can
	 * lead to program crash
	 */
	rhs.str = nullptr;

	return *this;
}

const int Mystring::get_str_length() const
{
	return std::strlen(str);
}

const char* Mystring::get_str_value() const
{
	return str;
}

void Mystring::display() const
{
	std::cout << this->str << std::endl;
}


Mystring::~Mystring()
{
	delete [] str;
}

