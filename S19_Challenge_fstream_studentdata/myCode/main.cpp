#include <iostream>
#include <cstdlib>

#include <vector>
#include <string>
#include <fstream>
#include <iomanip>

using namespace std;

int calculateScore (const std::string &studentSolution, const std::string &solutionString)
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

void printHeader()
{
	//Formatting for printing the output on the console
	cout << setw(20) << left << "Student"
		 << setw(10) << "Score" << endl;
}

void printDivider()
{
	cout << setw(30) << setfill ('-') << "";
	cout << setfill (' ') << " " << endl;
}

void printStudent(const std::string &studentName, const int &score)
{
	cout << setw(20) << left << studentName
		 << setw(10) << left << score << endl;
}

int main ()
{
	//Local variables to store student name and their solution
	std::string studentName{};
	std::string studentSolution{};
	std::string solutionString{};
	int studentCount{}, sum{};
	double average{};

	// Open file and connect it to filestream object
	std::ifstream in_file{"responses.txt"};

	//Error handling
	if(!in_file)
	{
		std::cerr << "Error opening file" << std::endl;
		return -1;
	}
	
	//Get the solution string
	getline(in_file, solutionString);

	//Formatting
	printHeader();
	printDivider();

	//Read from file
	while (in_file >> studentName >> studentSolution)
	{
		//Increment number of student
		++studentCount;

		//Calculate score of each student
		int score = calculateScore(studentSolution, solutionString);

		//Calculate sum
		sum += score;

		//Print on the console
		printStudent(studentName, score);
	}

	//Calculate the average
	if(studentCount != 0)
	{
		average = static_cast<double>(sum)/studentCount;

		//Formatting
		printDivider();

		//Print the average
		cout  << "Average = " << average << endl;
	}

	//Close the file
	in_file.close();

	return 0;
}
