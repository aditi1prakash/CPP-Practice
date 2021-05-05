// Standard (system) header files
#include <iostream>
#include <stdlib.h>
// Add more standard header files as required
// #include <string>

using namespace std;

class Deep {
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
	Deep (int d);

	//Copy constructor
	Deep (const Deep &source);

	//Destructor
	~Deep ();

};

Deep::Deep(int d)
{
	data = new int;
	*data = d;
}

Deep::Deep(const Deep &source)
{
	data = new int;
	*data = *source.data;									//Creates new storage and then copies the data - two pointers pointing to
	cout << "Copy constructor - deep copy" <<endl;			//two different locations on the heap
}

//The copy constructor can be delegated to the constructor as well
//Deep::Deep(const Deep &source)
//	:Deep(*source.data){									//Delegate to Deep (int) and pass in the int (*source.data) source is pointing to
//	cout << "Copy cosntructor - deep copy" << endl;			//Both source and the newly copied data have unique storage space on the heap
//}

Deep::~Deep ()
{
	delete data;
	cout << "Destructor freeing data" << endl;
}

void dispDeep (Deep s)
{															//When s goes out of scope the destructor is called and releases data
	cout << s.getDataValue() << endl;						//There wont be any problem since the storage being released is unique to s
}

// Main program
int main (void)
{
	Deep obj1{100};
	dispDeep(obj1);											//Copy constructor is called

	Deep obj2 {obj1};										//Copy constructor is called
	obj1.setDataValue (1000);								//Both obj1 and obj2 will have a copy of the data in its own area in memory
	//In Line 70, only the data pointed by obj2 changes and not both


	return 0;
}
