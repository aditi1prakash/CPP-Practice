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

void ruler()
{
	cout << "12345678901234567890123456789012345678901234567890123456789012345678901234567890" << endl << endl;
}

void init (Tours &tours)
{
	/* Build the structure based on Uniform Initialization */
		tours =
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
}

int main ()
{
	Tours tours;
	init (tours);

	ruler();

	const int total_field_width{80};
	const int field_width1{20};			//Country
	const int field_width2{20};			//City
	const int field_width3{20};			//Population
	const int field_width4{20};			//Cost

	/* To center align the title:
	 * Find the length of the title string
	 * Subtract it from the total field width, and divide it by 2 */
	int title_length = tours.title.length();
	cout << setw((total_field_width - title_length)/2) << "" << tours.title << endl << endl;


	/* Display columns */
	cout << setw(field_width1) << left << "Country"
		 << setw(field_width2) << left << "City"
		 << setw(field_width3) << right << "Population"
		 << setw(field_width4) << right << "Cost" << endl;

	/* Display divider */
	string emptychar{};
    cout << setw(total_field_width) << setfill('-') << emptychar << endl;

    /* setfill() is persistent, so reset back to null */
    cout << setfill(' ');
    cout << setprecision(2) << fixed;	/*for displaying the cost with 2 decimal digits*/

    /* Solution 1 */
    for(Country country: tours.countries)
    {
    	for(size_t i = 0; i < country.cities.size(); i++)
    	{
    		cout << setw(field_width1) << left << ((i == 0) ? country.name : "")
				 << setw(field_width2) << left << country.cities.at(i).name
    			 << setw(field_width3) << right << country.cities.at(i).population
    			 << setw(field_width4) << right << country.cities.at(i).cost << endl;
    	}
    }

    /* Solution 2 */
    //	for (auto country: tours.countries)
    //	{
    //		cout << setw(field_width1) << left << country.name;
    //		bool firstCity{true};
    //
    //		for (auto city: country.cities)
    //		{
    //			if (!firstCity)
    //			{
    //				cout << setw(field_width1) << ' ';
    //			}
    //			cout << setw(field_width2) << left << city.name
    //				 << setw(field_width3) << right << city.population
    //				 << setw(field_width4) << right << city.cost << endl;
    //
    //			firstCity = false;
    //		}
    //	}

	return 0;
}
