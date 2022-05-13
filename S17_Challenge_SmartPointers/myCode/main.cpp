#include <iostream>
#include <cstdlib>
#include <memory>
#include <vector>

using namespace std;

class Test
{
private:
	int data;

public:
	Test () : data {0} {cout << "Test constructor (" << data << ")" << endl;}
	Test (int data) : data {data} {cout << "Test constructor (" << data << ")" << endl;}

	int get_data() const { return data;}

	~Test () {cout << "Test destructor (" << data << ")" << endl;}
};

/* Function prototypes */

/* -- entire return type can be replaced with auto since the compiler can deduce the return type
 *    std::unique_ptr<vector<std::shared_ptr<Test>>> make();
 */

auto make();

void fill(std::vector<std::shared_ptr<Test>> &vec, int num);
void display (const std::vector<std::shared_ptr<Test>> &vec);

auto make()
{
	return std::make_unique<vector<std::shared_ptr<Test>>>();
}

void fill(std::vector<std::shared_ptr<Test>> &vec, int num)
{
	for (auto i = 1; i <= num; i++)
	{
		/* Prompt user input */
		cout << "Enter data point [" << i << "] : " ;
		int dataPoint{0};
		cin >> dataPoint;

		/* Dynamically add the shared pointer into the vector */
		vec.push_back(std::make_shared<Test> (dataPoint));
	}
}

void display (const std::vector<std::shared_ptr<Test>> &vec)
{
	for (const auto &sp_ptr:vec)
	{
		cout << sp_ptr->get_data() << endl;
	}
}

int main ()
{

	std::unique_ptr<std::vector<std::shared_ptr<Test>>> vec_ptr;
	vec_ptr = make();

	cout << "How many data points do you want to enter: ";
	int num;
	cin >> num;

	/* Dereferencing the unique_ptr gives vector */
	fill (*vec_ptr, num);
	display(*vec_ptr);

	return 0;
}
