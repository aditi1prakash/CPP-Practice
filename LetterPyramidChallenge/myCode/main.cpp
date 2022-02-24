/*
 * main.cpp
 *
 *  Created on: 09-Feb-2022
 *      Author: Aditi Prakash
 */

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main ()
{
	std::string userString;//{"123456789"};

	/* Read input from the user */
	cout << "Enter a string to build the pyramid" << endl;
	getline (cin, userString);

	/* Check for empty string */
	if (userString.length() == 0)
	{
		cout << "Empty string cannot be used to build a pyramid" << endl;
	}
	else
	{
		/* Iterate over the length of the string */
		for (size_t i = 1; i <= userString.length(); i++)
		{
			/* Adjust width to decrease proportionally in every iteration */
			cout << setw(userString.length() - i + 1);

			/* Print the ascending order */
			for (size_t j = 0; j < i; j++)
			{
				cout << userString.at(j);
			}
			/* Move to next line for the first iteration */
			if (i == 1)
			{
				cout << endl;
				continue;
			}
			else
			{
				/* Print the descending order */
				for (size_t k = (i - 1); k > 0; k--)
				{
					cout << userString.at(k - 1);
				}
			}
			cout << endl;
		}
	}
	return 1;
}



