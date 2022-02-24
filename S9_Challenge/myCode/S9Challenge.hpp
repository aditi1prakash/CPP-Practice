/*
 * S9Challenge.h
 *
 *  Created on: 04-Nov-2020
 *      Author: aditi
 */

#ifndef S9CHALLENGE_HPP_
#define S9CHALLENGE_HPP_

#include <iostream>
#include <vector>

using namespace std;

/*
 * @brief: Function to display the menu
 * @param: NONE
 * @return: NONE
 */
void displayMenu ();

/*
 * @brief: To get the choice in the menu from the user
 * @param: NONE
 * @return: char - The choice of the user in upper case
 */
char getSelection ();

/*
 * @brief: Prints the values in the vector
 * @param: [IN]: q - Reference of the vector
 * @return: NONE
 */
void printFunction(const vector <int> &q);

/*
 * @brief: Adds a number into the vector
 * @param: [IN]: q - Reference of the vector
 * @return: NONE
 */
void addFunction(vector <int> &q);

/*
 * @brief: Function to find the mean of the numbers in the vector
 * @param: [IN]: q - Reference of the vector
 * @return: NONE
 */
void meanFunction(const vector <int> &q);

/*
 * @brief: Function to find the smallest number in the vector
 * @param: [IN]: q - Reference of the vector
 * @return: NONE
 */
void smallestFunction(const vector <int> &q);

/*
 * @brief: Function to find the largest number in the vector
 * @param: [IN]: q - Reference of the vector
 * @return: NONE
 */
void largestFunction(const vector <int> &q);

/*
 * @brief: Function to search for the number
 * @param: [IN]: q - Reference of the vector
 * @return: NONE
 */
void searchFunction(const vector <int> &q);

/*
 * @brief: Function to clear the list
 * @param: [IN]: q - Reference of the vector
 * @return: NONE
 */
void clearFunction(vector <int> &q);




#endif /* S9CHALLENGE_HPP_ */
