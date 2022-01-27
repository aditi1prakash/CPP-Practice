// Sample code to perform I/O:
#include <iostream>
#include <vector>

using namespace std;

typedef enum
{
	E_OK,
	E_OUTOFRANGE,
	E_INVALID
} RC_t;

static int testCases {0};
static int greenCost {0};
static int purpleCost {0};
static int numOfParticipants {0};
static int result {0};

static const int MIN_RANGE = 1;
static const int MAX_RANGE = 10;

RC_t readInput ();
int compute ();
void printOutput (const int result);

int main()
{
	RC_t err = E_OK;

	/* Read number of testcases */
	cout << "Test cases: " << endl;
	cin >> testCases;

	if(testCases < MIN_RANGE || testCases > MAX_RANGE)
	{
		err = E_OUTOFRANGE;
	}

	for(int k = 0; k < testCases; k++)
	{
		vector<vector<int>> userStatus_vect (10, vector<int> (10, 0));
		int res1{0}, res2{0};

		/* Read cost of balloons */
		cout << "Cost of balloons: " << endl;
		cin >> greenCost >> purpleCost;

		/* Read number of participants*/
		cout << "Number of participants: " << endl;
		cin >> numOfParticipants;

		if(numOfParticipants < MIN_RANGE || numOfParticipants > MAX_RANGE)
		{
			err = E_OUTOFRANGE;
		}

		for (int i = 0; i < numOfParticipants; i++)
		{
			for (int j = 0; j < 2; j++)
			{
				cout << "User status [" << i << "][" << j  << "]: " << endl;
				cin >> userStatus_vect[i][j];
			}

			res1 = res1 + (greenCost * userStatus_vect[i][0]) + (purpleCost * userStatus_vect[i][1]);
			res2 = res2 + (purpleCost * userStatus_vect[i][0]) + (greenCost * userStatus_vect[i][1]);
		}

		cout << res1 << " " << res2 << endl;

		cout << ((res1 < res2) ? res1 : res2) << endl;
	}
}
