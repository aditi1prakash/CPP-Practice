//Comment the move constructor prototype and definition to observe the overhead incurred by using only copy constructor
// Standard (system) header files
#include <iostream>
#include <stdlib.h>

#include <vector>

using namespace std;

class Move {
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
	Move (int d);

	//Copy constructor
	Move (const Move &source);

	//Move constructor
	Move(Move &&source)noexcept;

	//Destructor
	~Move ();

};

Move::Move(int d)
{
	data = new int;
	*data = d;
	cout << "Constructor for " << d << endl;
}

Move::Move(const Move &source)
	:Move(*source.data){									//Delegate to Deep (int) and pass in the int (*source.data) source is pointing to
	cout << "Copy constructor - deep copy for: " << *data << endl;			//Both source and the newly copied data have unique storage space on the heap
}

//Move constructor
Move::Move (Move &&source)noexcept
	:data{source.data}{
		source.data = nullptr;
		cout << "Move constructor - moving resource: " << *data << endl;
}

Move::~Move ()
{
	if(data != nullptr)
	{
		cout << "Destructor freeing data for: " << *data << endl;
	}
	else
	{
		cout << "Destructor freeing data for nullptr" << endl;
	}
	delete data;
}

// Main program
int main (void)
{
	vector<Move> vec;

	vec.push_back(Move{10});			//First calls the constructor to create an object for move class, next it Will create a temp object = r-value; uses copy constructor if there is no move
//constructor defined by the user. Else uses the move constructor.

	//Only using copy constructor will create several deep copies for the vector objects - which is inefficient
	//and also since it is vector, every time a new value is pushed back, it is dynamically growing in size as well - requires more memory as it grows

	//With move constructor there won't be any copying of resources, it will only move the resource and set the
	//source to nullpointer. This reduces the overhead
	vec.push_back(Move{20});
	vec.push_back(Move{30});
	vec.push_back(Move{40});
	vec.push_back(Move{50});
	vec.push_back(Move{60});
	vec.push_back(Move{70});
	vec.push_back(Move{80});


	return 0;
}
