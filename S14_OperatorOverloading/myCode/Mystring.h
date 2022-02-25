/*
 * Mystring.h
 *
 *  Created on: 24-Feb-2022
 *      Author: Aditi Prakash
 */

#ifndef MYSTRING_H_
#define MYSTRING_H_

#include <cstring>

class Mystring
{
private:
	char *str;

public:
	//Default constructor
	Mystring();

	//Overloaded or Parametrised constructor
	Mystring (char *mystring);

	//Getter functions
	const int get_str_length() const;

	const char* get_str_value() const;

	//Copy constructor
	Mystring (const Mystring &source);

	//Move constructor
	Mystring(Mystring &&rhs);

	//Copy assignment operator
	Mystring& operator=(const Mystring &rhs);

	//Move assignment operator
	Mystring &operator= (Mystring &&rhs);

	void display() const;

	~Mystring();
};

#endif /* MYSTRING_H_ */
