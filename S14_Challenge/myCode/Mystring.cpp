/*
 * Mystring.cpp
 *
 *  Created on: 25-Feb-2022
 *      Author: Aditi Prakash
 */

#include <iostream>
#include "Mystring.h"

//No argument constructor
Mystring::Mystring()
	:str{nullptr}
{
	str = new char[1];
	*str = '\0';
}

//Overloaded constructor
Mystring::Mystring (char *mystring)
	:str{nullptr}
{
	if(mystring == nullptr)
	{
		str = new char[1];
		*str = '\0';
	}
	else
	{
//		delete [] str;		//Check;
		str = new char[std::strlen(mystring) + 1];
		std::strcpy(str, mystring);
	}
}

//Copy constructor
Mystring::Mystring(const Mystring &obj)
	:str {nullptr}
{
//	delete [] str;	//check;
	//Allocate new memory on the heap and copy
	str = new char[std::strlen(obj.str) + 1];
	std::strcpy(str, obj.str);
}

//Move constructor
Mystring::Mystring(Mystring &&obj)
	:str{obj.str}
{
	//Set source object(temp) to str object and nullify the source object (temp)
	obj.str = nullptr;
}

//Copy assignment
Mystring& Mystring::operator=(const Mystring &obj)
{
	//Check for same objects, p1 = p1
	if(this == &obj)
	{
		return *this;
	}

	//Delete the current memory to which the pointer is pointing to
	delete [] this->str;

	//Allocate new memory on heap and copy the string
	str = new char [std::strlen(obj.str) + 1];
	std::strcpy(str, obj.str);

	return *this;
}

//Move assignment
Mystring& Mystring::operator=(Mystring &&obj)
{
	//Check for same objects
	if(this == &obj)
	{
		return *this;
	}

	//Delete the current memory to which the pointer is pointing to
	delete [] str;

	//Steal the pointer from the temporary r-value object
	str = obj.str;

	//Null the temporary object pointer
	obj.str = nullptr;

	return *this;
}

//Unary- operator
Mystring Mystring::operator-() const
{
	//Allocate memory for temporary buffer and copy the string
	char *buff = new char[std::strlen(this->str) + 1];
	std::strcpy(buff, this->str);

	//Convert to lower case
	for(size_t i = 0; i < std::strlen(buff); i++)
	{
		buff[i] = tolower(buff[i]);
	}

	//Create new object
	Mystring temp{buff};

	//Delete alloted memory
	delete [] buff;

	//Return new object by value
	return temp;
}

//Equality operator
bool Mystring::operator==(const Mystring &obj)
{
	return (std::strcmp(this->str, obj.str) == 0);
}

//InEquality operator
bool Mystring::operator!=(const Mystring &obj)
{
	return (std::strcmp(this->str, obj.str) != 0);
}


//Comparison operator
bool Mystring::operator<(const Mystring &obj)
{
	return (std::strcmp(str, obj.str) < 0);
}

//Comparison operator
bool Mystring::operator>(const Mystring &obj)
{
	return (std::strcmp(this->str, obj.str) > 0);
}

//Concatenation
Mystring Mystring::operator+(const Mystring &obj)
{
	//Allocate memory of length equal to sum of both strings
	char *buff = new char[std::strlen(this->str) + std::strlen(obj.str) + 1];
	//Copy first string into the buffer
	std::strcpy(buff, str);
	//Concatenate second string to the buffer
	std::strcat(buff, obj.str);

	//Create temporary object to store the buffer
	Mystring temp{buff};

	//Delete memory allocated to buffer
	delete [] buff;

	//Return new object
	return temp;
}

//Repetition
Mystring Mystring::operator*(const int value)
{
	char *buff = new char[(std::strlen(str) * value) + 1];

	std::strcpy(buff,str);
	for(size_t i = 0; i < value - 1; i++)
	{
		std::strcat(buff, str);
	}

	Mystring temp{buff};
	delete [] buff;

	return temp;
}

//Stream insertion operator
std::ostream& operator<<(std::ostream &os, const Mystring &obj)
{
	//Insert the object into the stream and return stream object for chaining the output
	os << obj.str;
	return os;
}

//Stream extraction operator
std::istream& operator>>(std::istream &in, Mystring &obj)
{
	//Allocate memory to store the extracted value from the stream
	char *buff = new char[1000];

	//Extract the value and store it in buffer
	in >> buff;

	//Create new object from the buffer and assign it to the string object in which the input will be read
	obj = Mystring{buff};

	//Delete the temporary alloted memory
	delete [] buff;

	//Return the input stream object for chaining the input
	return in;
}

//Compound operator
Mystring Mystring::operator+=(const Mystring &obj)
{
	//Concatenate (already overloaded) rhs object with the existing object and assign it to the same object
	*this = *this + obj;

	return *this;
}

Mystring Mystring::operator*=(const int value)
{
	//Repeat (already overloaded) rhs times the exising object and assign it to the same object
	*this = *this * value;

	return *this;
}

Mystring::~Mystring()
{
	delete [] str;
}

