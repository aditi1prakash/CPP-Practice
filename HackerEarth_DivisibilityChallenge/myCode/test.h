/*
 * test.h
 *
 *  Created on: 17-Jan-2022
 *      Author: aditi
 */

#ifndef TEST_H_
#define TEST_H_

using namespace std;

#include <string>
#include <vector>

/* Enumerators, MACROS and variable definitions */
typedef enum
{
	RC_ERROR, RC_SUCCESS
}RC_t;

/* Function declaration */
RC_t testFunction ();

string solve (vector<int> A);



#endif /* TEST_H_ */
