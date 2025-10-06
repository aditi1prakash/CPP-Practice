#include <iostream>
#include "max.h"

using namespace std;

int main() {

	Maximum obj1;

	// Integers
	int Iresult = obj1.max(5, 10);
	cout << "Integer result: " << Iresult << endl;

	// Floating point numbers
	float Fresult = obj1.max(25.9f, 13.4f);
	cout << "Floating point result: " << Fresult << endl;

	return 0;
}
