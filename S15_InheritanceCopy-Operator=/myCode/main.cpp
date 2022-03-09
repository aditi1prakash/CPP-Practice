/* Program to demonstrate usage of copy constructor
 * and overloaded copy assignment operator in derived class
 * and invoking base class constructors and operators
 */

#include <iostream>
#include <cstdlib>

using namespace std;

class Base
{
private:
	int value;

public:
	Base()
		:value{0}
	{
		cout << "Base constructor called" << endl;
	}

	//Overloaded construcotr
	Base (int x)
		: value{x}
	{
		cout << "Base (int) constructor called" << endl;
	}

	//Copy constructor
	Base (const Base &other)
		:value{other.value}
	{
		cout << "Base copy constructor" << endl;
	}

	//Copy assignment operator
	Base &operator=(const Base &rhs)
	{
		cout << "Base operator= " << endl;
		if(this == &rhs)
			return *this;

		value = rhs.value;
		return *this;
	}

	//Destructor
	~Base()
	{
		cout << "Base destructor called" << endl;
	}

};

class Derived : public Base
{
private:
	int doubled_value;

public:
	//Constructor
	Derived() : Base {}, doubled_value {0}
	{
		cout << "Derived constructor called" << endl;
	}

	//Overloaded constructor
	Derived(int x) : Base{x}, doubled_value{2*x}
	{
		cout << "Derived (int) constructor called" << endl;
	}

	//Copy constructor
	Derived (const Derived &other)
		:Base{other}, doubled_value{other.doubled_value}
	{
		cout << "Derived copy constructor" << endl;
	}

	//Copy assignment operator
	Derived &operator=(const Derived &rhs)
	{
		cout << "Derived operator= " << endl;
		if(this == &rhs)
			return *this;

		// IMPORTANT - Assign base object //
		Base::operator=(rhs);

		doubled_value = rhs.doubled_value;
		return *this;
	}

	//Destructor
	~Derived()
	{
		cout << "Derived destructor called" << endl;
	}
};
// Main program
int main ()
{
	Base b1{100};		//Overloaded constructor
	Base b2 {b1};		//Copy constructor
	b1 = b2;			//Copy assignment operator


	Derived d1 {200};	//Overloaded constructor
	Derived d2 {d1};	//Copy constructor
	d1 = d2;			//Copy assignment operator

	return 0;
}
