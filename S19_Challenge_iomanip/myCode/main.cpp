#include <iostream>
#include <cstdlib>

#include <vector>
#include <string>
#include <iomanip>

using namespace std;

struct City
{
	std::string name;
	long population;
	double cost;
};

//Assume each country has at least 1 city
struct Country
{
	std::string name;
	std::vector<City> cities;
};

struct Tours
{
	std::string title;
	std::vector<Country> countries;
};


int main ()
{
	/* Build the structure based on Uniform Initialization */
	Tours tours
	{
		"Tour ticket prices from Berlin",
		{
				{
					"Colombia", {
						{ "Bogota", 8778000, 400.98},
						{ "Cali", 2401000, 424.12},
						{ "Medellin", 2464000, 350.98},
						{ "Cartagena", 972000, 345.34}
					},

				},
				{
					"Brazil", {
						{ "Rio de Janeiro", 13500000, 567.45},
						{ "Sao Paulo", 11310000, 975.45},
						{ "Salvador", 18234000, 855.99}
					},
				},
				{
					"Chile", {
						{"Valdivia", 260000, 569.12},
						{"Santiago", 7040000, 520.00}
					},
				},
				{
					"Argentina", {
						{"Buenos Aires", 3010000, 728.77}
					}
				},
		}
	};

	cout << "12345678901234567890123456789012345678901234567890123456789012345678901234567890" << endl << endl;

	/* Display title */
	cout << setw(55);
	cout << right << tours.title << endl << endl;

	/* Display columns */
	cout << setw(20) << left << "Country"
		 << setw(20) << left << "City"
		 << setw(20) << right << "Population"
		 << setw(20) << right << "Cost" << endl;

	/* Display divider */
	char emptychar{' '};
    cout << setfill ('-') << setw(81) << emptychar << endl;

    cout << setfill(' ');

	for (auto country: tours.countries)
	{
		cout << setw(20) << left << country.name;
		bool firstCity{true};

		for (auto city: country.cities)
		{
			if (!firstCity)
			{
				cout << setw(20) << ' ';
			}
			cout << setw(20) << left << city.name
				 << setw(20) << right << city.population
				 << setw(20) << right << city.cost << endl;

			firstCity = false;
		}
	}


	return 0;
}
