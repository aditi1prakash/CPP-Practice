#include <iostream>
#include "max.h"

using namespace std;

void main {

	Maximum obj1;

	//Integers
	int Iresult = obj1.max(5, 10);
	std::cout << "Integer result: " << Iresult << std::endl;

	//Floating point numbers
	float Fresult = obj1.max(25.9, 13.4);
	std::cout << "Floating point result: " << Fresult << std::endl;
}
