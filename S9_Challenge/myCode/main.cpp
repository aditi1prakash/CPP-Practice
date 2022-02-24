// Standard (system) header files
#include "S9Challenge.hpp"

using namespace std;

// Add your project's header files here
// #include "CFraction.h"

// Main program
int main (void)
{
    // TODO: Add your program code here
	char choice;
	vector <int> q {1,2};

	do
	{
		displayMenu();
		choice = getSelection ();

		switch (choice)
		{
		case 'P':
			printFunction(q);
			break;
		case 'A':
			addFunction(q);
			break;
		case 'M':
			meanFunction(q);
			break;
		case 'L':
			largestFunction(q);
			break;
		case 'S':
			smallestFunction(q);
			break;
		case 'O':
			searchFunction(q);
			break;
		case 'C':
			clearFunction(q);
			break;
		case 'Q':
			cout<<"Goodbye"<<endl;
			break;
		default:
			cout<<"Incorrect choice"<<endl;
			break;
		}

	}
	while (choice != 'Q');



	return 0;
}
