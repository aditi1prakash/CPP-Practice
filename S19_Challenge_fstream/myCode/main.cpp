#include <iostream>
#include <cstdlib>

#include <vector>
#include <string>
#include <fstream>
#include <iomanip>

using namespace std;

std::string solutionString{};

int calculateScore (std::string studentSolution)
{
	int score {};

	for(size_t i = 0; i < studentSolution.size(); i++)
	{
		if (studentSolution[i] == solutionString[i])
		{
			++score;
		}
		else
		{
			//do nothing
		}
	}
	return score;
}

int main ()
{
	// Open file and connect it to filestream object
	std::ifstream in_file{"responses.txt"};

	//Error handling
	if(!in_file)
	{
		std::cerr << "Error opening file" << std::endl;
		return -1;
	}

	//Student database
	std::vector<std::pair<std::string, int>> studentData;
	
	//Get the solution string
	getline(in_file, solutionString);

	//Local variables to store student name and their solution
	std::string studentName{};
	std::string studentSolution{};
	float sum{}, average{};

	//Read from file
	while (!in_file.eof())
	{
		getline(in_file, studentName);			//Get student name
		getline(in_file, studentSolution);		//Get student solution

		//Calculate score of each student
		int score = calculateScore(studentSolution);

		//Score the record in the database
		studentData.push_back(std::make_pair(studentName, score));
	}

	//Formatting for printing the output on the console
	cout << setw(20) << left << "Student" 
		 << setw(20) << "Score" << endl;

	cout << setw(40) << setfill ('-') << "";
	cout << setfill (' ') << " " << endl;

	//Print the student name and respective score
	for (size_t i = 0; i < studentData.size(); i++)
	{
		cout << setw(20) << left << studentData[i].first 
			 << setw(20) << left << studentData[i].second << endl;

		//Calculate sum of scores
		sum += studentData[i].second;		
	}

	//Calculate the average
	average = sum/studentData.size();

	//Formatting
	cout << setw(40) << setfill ('-') << "";
	cout << setfill (' ') << " " << endl;

	//Print the average
	cout  << "Average = " << average << endl;

	//Close the file
	in_file.close();

	return 0;
}
