#include <iostream>
#include <cstdlib>

#include <vector>

using namespace std;

int main ()
{
	vector <int> vector1 {}, vector2{};

	vector1.push_back(10);
	vector1.push_back(20);

	cout << vector1.at(0) << ", " << vector1.at(1) << endl;
	cout << vector1.size() << endl;

	vector2.push_back(100);
	vector2.push_back(200);

	cout << vector2.at(0) << ", " << vector2.at(1) << endl;
	cout << vector2.size() << endl;

	vector <vector <int>> vector_2d;

	vector_2d.push_back(vector1);
	vector_2d.push_back(vector2);

	for (size_t i = 0; i < vector_2d.size(); i++)
	{
		for(size_t j = 0; j < vector1.size(); j++)
		{
			cout << vector_2d.at(i).at(j) << " ";
		}
	}

	vector1.at(0) = 1000;

	for (size_t i = 0; i < vector_2d.size(); i++)
	{
		for(size_t j = 0; j < vector1.size(); j++)
		{
			cout << vector_2d.at(i).at(j) << " ";
		}
	}

	cout << endl << vector1.at(0) << ", " << vector1.at(1) << endl;

	return 0;
}
