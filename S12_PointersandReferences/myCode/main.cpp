// Standard (system) header files
#include <iostream>
#include <stdlib.h>

#include <vector>
// Add more standard header files as required
// #include <string>

using namespace std;

// Add your project's header files here
// #include "CFraction.h"

// Main program
int main (void)
{
	//Example 1 - Size of variable and size of a pointer
//	int num {10};
//
//	cout << "Value of num is: " << num << endl;
//	cout << "sizeof of num is: " << sizeof num << endl;
//	cout << "Address of num is: " << &num << endl;
//
//	int *p;
//
//	cout << "Value of p is: " << p << endl;
//	cout << "sizeof of p is: " << sizeof p << endl;
//	cout << "Address of p is: " << &p << endl;
//
//	p = nullptr;
//	cout << "Value of p is: " << p << endl;

//	cout << "---------------------------------------------" << endl;

	//Example 2 - Data type mismatch in pointers, assigning address to pointer
//	int score {10};
//	double high_temp {100.7};
//
//	int *score_ptr {nullptr};
//
//	score_ptr = &score;
//
//	cout << "Value of score is: " << score << endl;
//	cout << "Address of score is: " << &score << endl;
//	cout << "Value of score_ptr is: " << score_ptr << endl;

//	score_ptr = &high_temp;			//Compiler error - data type mismatch

//	cout << "---------------------------------------------" << endl;

	//Example 3.1 - Dereferencing a pointer
//	int score {10};
//	int *score_ptr {&score};		//Initializing a pointer
//
//	cout << *score_ptr << endl; 	//Dereferencing a pointer, fetches the value present in the address stored in score_ptr
//
//	*score_ptr = 200; 			    //Stores 200 in the address that is pointed by score_ptr (i.e., in the address of score)
//	cout << *score_ptr << endl;
//	cout << score << endl;

//	cout << "---------------------------------------------" << endl;

	//Example 3.2
//	double high_temp {100.7};
//	double low_temp {37.4};
//
//	double *temp_ptr {&high_temp};			//Initializing a pointer
//
//	cout << *temp_ptr << endl;				//Dereferencing - 100.7
//
//	temp_ptr = &low_temp;					//Now the pointer holds the address of low_temp
//
//	cout << *temp_ptr << endl;				//37.4

//	cout << "---------------------------------------------" << endl;

	//Example 3.3
//	string name {"Aditi"};
//	string *string_ptr {&name};
//
//	cout << *string_ptr << endl;			//Dereferencing - prints Aditi
//	name = "Prakash";						//Since the string present in the variable name is changed
//	cout << *string_ptr << endl;			//When the pointer accesses name using its address it prints the string stored in name
//											//i.e., Prakash
	cout << "---------------------------------------------" << endl;

	//Example 3.4
//	vector <string> stooges {"Larry", "Moe", "Curly"};
//	vector <string> *vector_ptr {nullptr};
//
//	vector_ptr = &stooges;
//
//	cout << "First stooge is: " << (*vector_ptr).at(0) << endl;
//
//	cout << "Stooges:";
//	for (auto stooge: *vector_ptr)
//		cout << stooge << " ";
//	cout << endl;

	//Example 4 -- POINTERS AND ARRAYS!!!

	int scores [] {100, 95, 89};
	cout << "Value of scores: " << scores << endl;

	int *score_ptr{scores};
	cout << "Value of score_ptr: " << score_ptr << endl;

	cout << "\nArray Subscript notation------------------------" << endl;
	cout << scores[0] << endl;
	cout << scores[1] << endl;
	cout << scores[2] << endl;

	cout << "\nPointer Subscript notation------------------------" << endl;
	cout << score_ptr[0] << endl;
	cout << score_ptr[1] << endl;
	cout << score_ptr[2] << endl;

	cout << "\nPointer Offset notation------------------------" << endl;
	cout << *(score_ptr) << endl;
	cout << *(score_ptr + 1) << endl;
	cout << *(score_ptr + 2) << endl;

	cout << "\nArray Offset notation------------------------" << endl;
	cout << *(scores) << endl;
	cout << *(scores + 1) << endl;
	cout << *(scores + 2) << endl;

	return 0;
}
