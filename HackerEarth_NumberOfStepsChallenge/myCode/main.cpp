// Standard (system) header files
#include <iostream>
#include <stdlib.h>

using namespace std;

// Main program
int main (void)
{
	int num {0};

	cout << "Enter the number of array elements: ";
	cin >> num;

	int a[num], b[num];

	cout << endl <<  "Enter values of a: ";

	for (int i = 0; i < num; i++)
	{
		cin >> a[i];
	}

	cout << endl <<  "Enter values of b: ";

	for (int i = 0; i < num; i++)
	{
		cin >> b[i];
	}

	for (int i = 0; i < num; i++)
	{
		if(a[i] > b[i])
		{
			a[i] -= b[i];
		}
	}

	return 0;
}
