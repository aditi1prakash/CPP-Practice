#include <iostream>
#include <cmath>
using namespace std;

double fahrenheit_to_celsius(double fahrenheit);
double fahrenheit_to_kelvin(double fahrenheit);

void temperature_conversion (double fahrenheit);

void temperature_conversion(double fahrenheit_temperature) {

    double celsius_temperature {0}, kelvin_temperature {0};

    celsius_temperature = (fahrenheit_to_celsius(fahrenheit_temperature));
    kelvin_temperature = (fahrenheit_to_kelvin(fahrenheit_temperature));

    cout << "The fahrenheit temperature " << fahrenheit_temperature << " degrees is equivalent to " << celsius_temperature << " degrees celsius and " << kelvin_temperature << " degrees kelvin.";
}


double fahrenheit_to_celsius(double fahrenheit)
{
    return round(((fahrenheit - 32)*5)/9);


}

double fahrenheit_to_kelvin(double fahrenheit)
{
    return round(((fahrenheit - 32)*5)/9 + 273);
}

int main()
{
	double fahrenheit{0.0};

	cout << "Enter the temperature in Fahrenheit: " << endl;
	cin >> fahrenheit;

	temperature_conversion(fahrenheit);

	return 1;

}

