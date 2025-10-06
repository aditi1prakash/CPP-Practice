#include <iostream>
#include "max.h"
#include "array.h"

using namespace std;

int main() {

	Maximum obj1;

	// Integers
	int Iresult = obj1.max(5, 10);
	cout << "Integer result: " << Iresult << endl;

	// Floating point numbers
	float Fresult = obj1.max(25.9f, 13.4f);
	cout << "Floating point result: " << Fresult << endl;

	// Strings
	std::string Sresult = obj1.max(std::string("Purple"), std::string("Green"));
	cout << "String result: " << Sresult << endl;

	//Array class
	Array<int, 10> arrayObj;
	for (int i = 0; i < arrayObj.getSize(); i++)
	{
		arrayObj.writeArrayElement(i, i+10);
	}
	for (int i = 0; i < arrayObj.getSize(); i++)
	{
		cout << "Array[" << i << "] = " << arrayObj.readArrayElement(i) << endl;
	}

	return 0;
}
