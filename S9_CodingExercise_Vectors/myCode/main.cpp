/*
 * Nested Loops: Sum of the product of all pairs of Vector elements
 * For example, given the vector to be {1,2,3}, the possible pairs are (1,2), (1,3) and (2,3).
 * So the result would be (1*2) + (1*3) + (2*3) which is 11.
 *
 * If the vector is empty or has only one element then the result should be 0.
 *
 * Author: Aditi Prakash
 * Date: 02-11-2020
 */

#include <stdlib.h>
#include <iostream>
#include <vector>

using namespace std;

// Main program
int main (void)
{
	int result {};
	vector <int> vec {1};

	for (size_t i = 0; i < vec.size(); ++i)
	{
		for (size_t j = i+1; j < vec.size(); ++j)
		{
			result = result + (vec.at(i) * vec.at(j));
		}
	}

	cout << result << endl;

	return 0;
}
