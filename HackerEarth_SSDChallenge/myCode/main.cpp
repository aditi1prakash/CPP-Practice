#include <iostream>

using namespace std;

const int arr[10] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};

int calcMatchsticks (string number);
void calcLargestNumber (long long int matchsticks);

int main()
{
	/* Number of test cases */
	int testCases {0}, matchsticks {0};
	string number{0};

	cout << "Test cases: " << endl;
	cin >> testCases;

	/* Read the number */
	for (int i = 0; i < testCases; i++)
	{
		cout << "Enter number "<< i << ":" << endl;
		cin >> number;

		/* Calculate number of match sticks */
		matchsticks = calcMatchsticks(number);

		/* Calculate the numerically largest number possible*/
		calcLargestNumber(matchsticks);
	}
}

int calcMatchsticks (string number)
{
	long long int matchsticks{0}, temp{0};

	for (size_t i = 0; i < number.size(); i++)
	{
		/* ASCII bias - subtract 48*/
		matchsticks += arr[number[i] - 48];
	}
/*
	while (number > 9)
	{
		temp = number % 10;
		number = number / 10;

		matchsticks += arr[temp];
	}
	if (number < 10)
	{
		matchsticks += arr[number];
	}
*/
	cout << "Match sticks: " << matchsticks << endl;

	return matchsticks;
}
void calcLargestNumber (long long int matchsticks)
{
	if (0 == matchsticks % 2)
	{
		for (int i = 0; i < matchsticks/2; i++)
		{
			cout << "1";
		}
	}
	else
	{
		cout << "7";
		matchsticks -= 3;

		for (int i = 0; i < (matchsticks/2); i++)
		{
			cout << "1";
		}
	}
}
