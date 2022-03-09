// Standard (system) header files
#include <iostream>
#include <cstdlib>

using namespace std;

#include "Mystring.h"


int main ()
{

	cout << boolalpha << endl;
	Mystring empty;

	//Overloaded constructor
	Mystring Aditi{"Aditi"};
	Mystring blue{"Blue"};

	//Copy assignment
	blue = Aditi;

	Mystring deep;

	//Move assignment
	deep = "DEEP";

	//to lowercase, Unary- operator
	deep = -deep;

	//Equality operator
	cout << (deep == blue) << endl;		//0-false
	cout << (blue == Aditi) << endl;	//1-true

	//Inequality operator
	cout << (deep != blue) << endl;		//1-true
	cout << (blue != Aditi) << endl;	//0-false

	//Comparison operator
	cout << (deep > blue) << endl;		//1-true
	cout << (blue > Aditi) << endl;		//0-false
	cout << (deep > Aditi) << endl;		//1-true

	//Comparison operator
	cout << (deep < blue) << endl;		//0-false
	cout << (blue < Aditi) << endl;		//0-false
	cout << (deep < Aditi) << endl;		//0-false

	//Concatenation and insertion operator
	empty = deep + " " + blue;
	cout << "Empty: " << empty << endl;

	Mystring test = empty + " sky";
	cout << "Test: " << test << endl;

	//Repetition operator
	Mystring red{"red"};
	empty = red * 3;
	cout << empty << endl;

	//Compound operator
	empty += test;
	cout << empty << endl;

	blue = "blue";
	blue *= 4;
	cout << blue << endl;

	//Pre and post increment
	++blue;
	 cout << blue << endl;

	 cout << red++ << endl;
	 Aditi = red;
	 cout << Aditi << " " << red << endl;

	return 0;
}
