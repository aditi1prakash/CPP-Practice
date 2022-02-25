/*
 * Demonstrates concepts of Operator overloading
 * 	1.	Overloaded constructor
 * 	2. 	Overloaded assignment operator
 * 		 - Copy assignment and move assignment
 */

#include <iostream>
#include <cstdlib>

using namespace std;

#include "Mystring.h"

int main ()
{
	//Creates an object, empty string
	Mystring empty;

	//Creates an object Aditi, stores Aditi
	Mystring Aditi{"Aditi"};

	//Creates an object str2, copies Aditi - copy constructor
	Mystring str2{Aditi};
	str2.display();

	//NOT Assignment, same as Mystring s1{s2}; - object is yet to be created. Copy constructor
	Mystring blue = Aditi;
	blue.display();

	//Objects are created and initialized already, assignment happens - copy assignment
	str2 = empty;

	//Creates temporary object for rhs, move assignment is called
	blue = "blue";

	empty.display();
	str2.display();
	Aditi.display();
	blue.display();

	// Creates new object and instantiates with overloaded constructor
	Mystring move {"Pillar"};

	//Creates temporary object for rhs, move assignment
	move = Mystring{"Example"};
	move.display();

	//Creates temporary object for rhs, move assignment
	move = "Problem";
	move.display();


	return 0;
}
