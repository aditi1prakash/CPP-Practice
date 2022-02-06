#include <iostream>
#include <stdlib.h>

#include <string>

using namespace std;


int main (void)
{

	int valid{1};

	string vowels = "AEIOUY";
	string tag;

	cout  << "Enter the tag string " << endl;
	getline(cin, tag);

	/* Incorrect length of the tag */
	if(tag.size() != 9)
	{
		return -1;
	}

	cout << (tag.at(0) - '0') + (tag.at(1) - '0') << endl;

	size_t found = vowels.find(tag.at(2));

	/* Vowel is not present in the tag*/
	if (found == string::npos)
	{
		cout << "Found the vowel" << endl;

		for (size_t i = 0; i < (tag.size() - 1); i++)
		{
			if ((i == 1) || (i == 2) || (i == 5) || (i == 6))
			{
				cout << "Skipping iteration " << i << endl;
				continue;
			}

			int x = (tag.at(i) - '0') + (tag.at(i+1) - '0');
			if (x % 2 != 0)
			{
				valid = 0;
				break;
			}
			cout << "Iteration " << i << ", x = " << x << endl;
		}
	}
	else
	{
		/* Vowel present in the tag */
		valid = 0;
	}

	if(valid == 1)
	{
		cout << "valid" << endl;
	}
	else
	{
		cout << "invalid" << endl;
	}


	return 0;
}
