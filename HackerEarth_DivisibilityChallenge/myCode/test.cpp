/*
 * test.cpp
 *
 *  Created on: 16-Jan-2022
 *      Author: Aditi Prakash
 */


#include <iostream>
using namespace std;

#include <fstream>
#include <vector>
#include <bits/stdc++.h>

#include "test.h"

ifstream readFile;
uint32_t numOfValues;


/* Function definition */
RC_t testFunction ()
{
	vector<int> A_test;
	//Read the values from the file
	readFile.open ("input7.txt");

	while(readFile >> numOfValues)
	{
		vector<int> A_test(numOfValues);
	}

	for (size_t i = 0; i < numOfValues; i++)
	{
		readFile >> A_test.at(i);

		while (i < 10){
			cout << A_test.at(i);
		}
	}
	//Call the solve function
	string funcOutput{};
	funcOutput = solve(A_test);

	//Compare the return value with the expected output
	cout << "Expected output: OUI\n" << "Obtained output: " << funcOutput << "\n";

	readFile.close();

	return RC_SUCCESS;
}

string solve (vector<int> A) {

   vector<int> digits;
   int numOfDigits{0}, newNumber{0};

   /* Iterate through first half of the array */
   for (size_t i = 0; i < (A.size()/2); i++)
   {
//	   while(A.at(i) >= 10)
//	   {
//		   A.at(i) /= 10;
//	   }
//	   digits.push_back(A.at(i));
      /* Number of digits - 1*/
	  numOfDigits = (int)log10(A.at(i));

      /* Get first digit of numbers */
      digits.push_back((A.at(i))/pow(10, numOfDigits));
   }

   /* Iterate through second half of the array */
   for (size_t i = (A.size()/2); i < A.size(); i++)
   {
      /* Get last digit of the numbers */
      digits.push_back((A.at(i) % 10));
   }

   for (size_t i = 0; i < 10; i++)
   {
	   cout << "digits [" << i << "]: " << digits.at(i) << "\n";
   }

   /* Form new number using individual digits */
   for (size_t  i = 0; i < 10; i++)
   {
      newNumber = newNumber + (digits.at(i) * pow(10, digits.size() - i - 1));
      cout << "New Number: " << newNumber << "\n";
   }

   /* Check for divisibility by 11 */
   if(newNumber % 11 == 0)
   {
      return "OUI";
   }
   return "NON";
}
