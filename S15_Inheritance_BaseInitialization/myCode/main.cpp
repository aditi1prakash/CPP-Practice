/* Program to demonstrate passing of arguments to
 * base class constructor from derived class
 * --or--
 * How to invoke a particular constructor of the Base class
 * from derived class
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

	//Destructor
	~Derived()
	{
		cout << "Derived destructor called" << endl;
	}
};
// Main program
int main ()
{
	Derived d;

	Derived d2 {1000};

	return 0;
}
