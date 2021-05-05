// Standard (system) header files
#include <iostream>
#include <stdlib.h>
// Add more standard header files as required
#include <string>
#include <vector>

using namespace std;

// Add your project's header files here
// #include "CFraction.h"

//Function used for Example 1
void doubleData (int *int_ptr)
{
	*int_ptr *= 2;
}

//Function used for Example 2
void swap (int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

//Functions used for Example 3
void display (const vector <string> *const v)
{
	for (auto str: *v)
		cout << str << " ";
}

void display (const int *array, int sentinel)
{
	while (*array != sentinel)
		cout << *array++ << " "; 		//Dereference --> Print --> Increment
}
// Main program
int main (void)
{
	/*===========Example 1============*/
//	int value {10};
//	int *int_ptr {nullptr};

	//Two different ways to pass pointers to the function.
	//1> Address of the value is passed to the function
//	cout << "Value is: " << value << endl;
//	doubleData(&value);
//	cout << "Value is: " << value << endl;
//
//	cout << "-----------------------------------" << endl;

	//2> The natural pointer is first assigned with the address of the value and then
	//is passed as a parameter to the function.
//	int_ptr = &value;
//	doubleData (int_ptr);
//	cout << "Value is: " << value << endl;

	/*===========Example 2============*/
//	int a{200}, b{300};
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//
//	swap (&a, &b);
//
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;

	/*===========Example 3============*/
	cout << "-----------------------------" << endl;
	vector <string> stooges {"Larry", "Moe", "Curly"};
	display(&stooges);

	cout << "\n-----------------------------" << endl;
	int scores[]{100, 99, 85, 96, 87, -1};
	display (scores, -1);

	cout << endl;

	return 0;
}
