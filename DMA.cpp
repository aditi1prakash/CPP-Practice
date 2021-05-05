// Standard (system) header files
#include <iostream>
#include <stdlib.h>
// Add more standard header files as required
// #include <string>

using namespace std;

// Add your project's header files here
// #include "CFraction.h"

// Main program
int main (void)
{

	//Exmaple 1
//	int *int_ptr {nullptr};			//Initializing a pointer to nowhere
//	int_ptr = new int;				//Dynamically allocating an integer on the heap
//
//	cout << int_ptr << endl;		//Prints the address of the allocated memory on the heap
//
//	delete int_ptr;					//Deallocates the memory in the heap

	//Example 2
	size_t size {0};
	double *temp_ptr {nullptr};

	cout << "How many temperatures do you need?";
	cin >> size;

	temp_ptr = new double[size];		//Allocates 'size (say 10)' number of double type storage on the heap
	//and assigns the address of the first memory location (out of allocated 10) to temp_ptr
	cout << temp_ptr << endl;			//The address of the first memory location (out of 'size') is printed

	delete [] temp_ptr;					//Deallocate the memory

	return 0;
}
