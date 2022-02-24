/* Problem
 * You are given an array A of size N that contains integers.
 * Here, N is an even number. You are required to perform the following operations:
 * 		Divide the array of numbers in two equal halves
 * 			Note: Here, two equal parts of a test case are created by dividing the array into two equal parts.
 * 		Take the first digit of the numbers that are available in the first half of the array (first 50% of the test case)
 * 		Take the last digit of the numbers that are available in the second half of the array (second 50% of the test case)
 * 		Generate a number by using the digits that have been selected in the above steps

 * Your task is to determine whether the newly-generated number is divisible by 11.

 * Input format
 * First line: A single integer  denoting the size of array
 * Second line:  space-separated integers denoting the elements of array
 *
 */

/* Standard (system) header files */
#include <iostream>
#include <stdlib.h>

#include <vector>

#include "test.h"

using namespace std;

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);

//    int N{6};
//    cin >> N;

//    vector<int> A{1, 74246, 72705, 79599, 25233, 26356};

//    if (N % 2 == 0)
//    {
//      for(int i_A = 0; i_A < N; i_A++)
//      {
//      	cin >> A[i_A];
//      }
//    }

//    string out;
//    out = solve(A);
//    cout << out;

    testFunction();
}

//1 74246 72705 79599 25233 26351
