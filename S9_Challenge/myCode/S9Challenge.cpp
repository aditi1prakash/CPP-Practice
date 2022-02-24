/*
 * S9Challenge.cpp
 *
 *  Created on: 04-Nov-2020
 *      Author: aditi
 */

#include "S9Challenge.hpp"

/*
 * @brief: Function to display the menu
 * @param: NONE
 * @return: NONE
 */
void displayMenu ()
{
	cout << endl <<"P - Print numbers" << endl <<
				   "A - Add a number" << endl <<
				   "M - Display mean of the numbers" << endl <<
				   "S - Display the smallest number" << endl <<
				   "L - Display the largest number" << endl <<
				   "O - Search a number" << endl <<
				   "C - Clear the list" << endl <<
				   "Q - Quit" << endl << endl <<
				   "Enter your choice" << endl;
}

/*
 * @brief: To get the choice in the menu from the user
 * @param: NONE
 * @return: char - The choice of the user in upper case
 */
char getSelection ()
{
	char choice {};
	cin >> choice;

	return toupper(choice);
}

/*
 * @brief: Prints the values in the vector
 * @param: [IN]: q - Reference of the vector
 * @return: NONE
 */
void printFunction(const vector <int> &q)
{
	if(q.size() == 0)
	{
		cout << "[] - List is empty"<<endl;
	}
	else
	{
		cout<<"[ ";
		for(auto num: q)
		{
			cout << num << " ";
		}
		cout<< " ]"<<endl;
	}
}

/*
 * @brief: Adds a number into the vector
 * @param: [IN]: q - Reference of the vector
 * @return: NONE
 */
void addFunction(vector <int> &q)
{
	int numberToBeAdded {};

	cout<<"Enter the number to added"<<endl;

	cin>>numberToBeAdded;
	q.push_back(numberToBeAdded);
	cout<<numberToBeAdded<<" Added"<<endl;

	cout<<"[ ";
	for(size_t i = 0; i < q.size(); i++)
	{
		cout<< q.at(i)<< " ";
	}
	cout<< " ]"<<endl;

}

/*
 * @brief: Function to find the mean of the numbers in the vector
 * @param: [IN]: q - Reference of the vector
 * @return: NONE
 */
void meanFunction(const vector <int> &q)
{
	if(q.size() == 0)
	{
		cout << "Unable to calculate the mean - no data"<<endl;
	}
	else
	{
		int sum {0};
		double mean {0};

		for (auto num:q)
		{
			sum = sum + num;
		}

		mean = static_cast<double>(sum) / q.size();

		cout<<"Mean of the numbers is "<<mean<<endl;
	}
}

/*
 * @brief: Function to find the smallest number in the vector
 * @param: [IN]: q - Reference of the vector
 * @return: NONE
 */
void smallestFunction(const vector <int> &q)
{
	int smallestNumber = q.at(0);

	if(q.size() == 0)
	{
		cout << "Unable to determine the smallest number - list is empty"<<endl;
	}
	else
	{
		for (size_t j = 0; j < q.size(); j++)				//A range based for loop can also be used
		{
			if(q.at(j) < smallestNumber)
				{
					smallestNumber = q.at(j);
				}
		}
	}
	cout<<"Smallest number is "<<smallestNumber<<endl;
}

/*
 * @brief: Function to find the largest number in the vector
 * @param: [IN]: q - Reference of the vector
 * @return: NONE
 */
void largestFunction(const vector <int> &q)
{
	int largestNumber = q.at(0);

	if (q.size() == 0)
	{
		cout << "Unable to determine the largest number - list is empty"<<endl;
	}
	else
	{
		for (auto num:q)							//Range based for loop
		{
			if(num > largestNumber)
			{
				largestNumber = num;
			}
		}
	}
	cout<<"Largest number is "<<largestNumber<<endl;


}

/*
 * @brief: Function to search for the number
 * @param: [IN]: q - Reference of the vector
 * @return: NONE
 */
void searchFunction(const vector <int> &q)
{
	int number {}, count {};

	cout <<"Enter the number to be searched"<<endl;
	cin>>number;

	for(size_t i = 0; i < q.size(); i++)
	{
		if (q.at(i) == number)
		{
			count++;
		}
	}

	if (count != 0)
	{
		cout << "The number is in the list for "<<count<<" times"<<endl;
	}
	else
	{
		cout<<"The number is not present in the list"<<endl;
	}
}

void clearFunction(vector<int> &q)
{
	q.clear();
}
