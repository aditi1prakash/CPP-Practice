/*
 * Mystring.h
 *
 *  Created on: 25-Feb-2022
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

	//Parametrised/Overloaded constructor
	Mystring (char *mystring);

	//Copy constructor
	Mystring (const Mystring& obj);

	//Move constructor
	Mystring (Mystring &&obj);

	//Copy assignment
	Mystring &operator=(const Mystring &obj);

	//Move assignment
	Mystring &operator=(Mystring &&obj);

	//Getter functions
	int get_str_length() const;

	char* get_str() const;

	//Operator overloading functions
	//Unary - : Convert to lowercase
	Mystring operator-() const;

	//Operator==, equality operator
	bool operator==(const Mystring &obj);

	//Inequality operator
	bool operator!=(const Mystring &obj);

	//Comparison operator
	bool operator<(const Mystring &obj);

	//Comparison operator
	bool operator>(const Mystring &obj);

	//Concatenation
	Mystring operator+(const Mystring &obj);

	//Repetition
	Mystring operator*(const int value);

	//Compound operator
	Mystring& operator+=(const Mystring &obj);

	Mystring& operator*=(const int value);

	//Pre increment - convert to upper case
	Mystring& operator++();

	//Post increment - convert to upper case
	Mystring operator++(int);

	//Stream insertion
	friend std::ostream& operator<<(std::ostream &os, const Mystring &obj);

	//Stream extraction
	friend std::istream& operator>>(std::istream &in, Mystring &obj);

	~Mystring();
};

#endif /* MYSTRING_H_ */
