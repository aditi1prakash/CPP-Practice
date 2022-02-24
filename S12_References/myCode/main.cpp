// Standard (system) header files
#include <iostream>
#include <stdlib.h>
// Add more standard header files as required
#include <vector>
#include <string>

using namespace std;

// Add your project's header files here
// #include "CFraction.h"

// Main program
int main (void)
{
	int num{100};
	int &ref{num};

	cout << num << endl;		//100
	cout << ref << endl;		//100

	cout << "-------------------------" << endl;

	num = 200;
	cout << num << endl;		//200
	cout << ref << endl;		//200

	cout << "-------------------------" << endl;

	ref = 300;
	cout << num << endl;		//300
	cout << ref << endl;		//300

	cout << "-------------------------" << endl;
	//Using references in range based for loops
	vector <string> stooges {"Larry", "Moe", "Curly"};

	for(auto str:stooges)
		str = "Funny";			//str is a COPY of the each vector element

	for(auto str:stooges)
		cout << str << endl;	//No change

	cout << "-------------------------" << endl;
	for (auto &str:stooges)		//str is a reference to each vector element
		str = "Funny";

	for (auto const &str:stooges)
		cout << str << endl;

	cout << endl;
	return 0;
}
