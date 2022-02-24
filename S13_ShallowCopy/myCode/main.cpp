//This code demonstrates the problems with using shallow copy with raw pointers and will crash
// Standard (system) header files
#include <iostream>
#include <stdlib.h>
// Add more standard header files as required
// #include <string>

using namespace std;

class Shallow {
private:
	int *data;

public:
	void setDataValue(int d)
	{
		*data = d;
	}
	int getDataValue ()
	{
		return *data;
	}

	//Constructor
	Shallow (int d);

	//Copy constructor
	Shallow (const Shallow &source);

	//Destructor
	~Shallow ();

};

Shallow::Shallow(int d)
{
	data = new int;
	*data = d;
}

Shallow::Shallow(const Shallow &source)
	:data(source.data){									//This is copying only the pointer and not what the pointer is pointing to
	cout << "Copy constructor - Shallow copy" <<endl;	//Both pointers (source and copy) will be pointing to the same part of memory on the heap
}

Shallow::~Shallow ()
{
	delete data;
	cout << "Destructor freeing data" << endl;
}

void dispShallow (Shallow s)							//Pass by value --> This will make a copy of the source to s - problem starts here
{														//Copy is made using the copy constructor
	cout << s.getDataValue() << endl;
}

// Main program
int main (void)
{
	Shallow obj1{100};
	dispShallow(obj1);									//Pass by value -- Copy constructor is called, copy of the pointer is made and function is executed
														//After the function, the copy goes out of scope and destructor is called, which will make the memory area on the heap invalid
	Shallow obj2{obj1};									//Which means obj1 is pointing to an invalid memory on the heap. Although the data might still be there on the memory, the memory itself is invalid
	obj2.setDataValue(1000);							//With Line 62, we are again making another copy of obj1, i.e., creating another pointer to the same invalid memory
//Furthermore, with Line 63, we are changing the data of both obj1 and obj2 since both are pointing to the same memory location on the heap. When main function goes out of scope, destructors are called for both
//the objects. Since both are pointing at invalid memory on the heap, the program will crash.
	return 0;
}
