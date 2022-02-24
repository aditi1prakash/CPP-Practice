#include <iostream>
#include <cstdlib>

using namespace std;

// Main program
int main ()
{
	const int dollar_value{100};
	const int quarter_value{25};
	const int dime_value{10};
	const int nickel_value{5};

	int dollars{0}, quarters{0}, dimes{0}, nickels{0}, pennies{0};
	int amount_in_cents{0};

	cout << "Enter the amount in cents: ";
	cin >> amount_in_cents;

	cout << endl << "You can provide change as follows: " << endl;

	dollars = amount_in_cents / dollar_value;
	amount_in_cents %= dollar_value;

	cout << "dollars: " << dollars << endl;

	quarters = amount_in_cents / quarter_value;
	amount_in_cents %= quarter_value;

	cout << "quarters: " << quarters << endl;

	dimes = amount_in_cents / dime_value;
	amount_in_cents %= dime_value;

	cout << "dimes: " << dimes << endl;

	nickels = amount_in_cents / nickel_value;
	amount_in_cents %= nickel_value;

	cout << "nickels: " << nickels << endl;

	pennies = amount_in_cents;

	cout << "pennies: " << pennies << endl;


	return 0;
}
