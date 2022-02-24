#include <iostream>
#include <cstdlib>

#include <string>
#include <vector>

#undef PLAYER_CLASS
#undef SHALLOW_CLASS
#undef DEEP_CLASS
#define MOVE_CLASS

class Player {

private:

	std::string name;
	int health;
	int xp;


public:
	/* Parametrised constructor with default values*/
	Player(std::string name = "None", int health = 0, int xp = 0);

	std::string getName() const {return name;}
	int getHealth() const {return health;}
	int getXP() const {return xp;}

	void setName(std::string name) {this->name = name;}
	void setHealt(int health) {this->health = health;}
	void setXP(int xp) {this->xp = xp;}

	/* Copy constructor */
	Player (const Player &source)
		:name{source.name}, health{source.health}, xp{source.xp}
	{}

	/* Destructor */
	~Player();
};

/* Display function, player object passed by value - copy constructor will be called*/
void display (Player p)
{
	std::cout << "Name: " << p.getName() << " Health: " << p.getHealth() << " xp: " << p.getXP() << std::endl;
}

Player::Player(std::string name, int health, int xp)
	:name{name}, health{health},xp{xp}
{}

Player::~Player()
{}

class Shallow {

private:
	int *data;

public:
	/* Constructor */
	Shallow(int d);

	/* Copy constructor */
	Shallow (const Shallow &source);

	int getDataValue () const {return *data;}

	void setDataValue (int d) {*data = d;}

	/* Destructor */
	~Shallow();
};

Shallow::Shallow (int d)
{
	data = new int;				// allocate memory
	*data = d;					// assign value
}

Shallow::Shallow (const Shallow &source)
	:data (source.data){
	std::cout << "Copy constructor - shallow copy" << std::endl;
}

void displayShallow (Shallow s)
{
	std::cout << s.getDataValue() << std::endl;
}

Shallow::~Shallow()
{
	delete data;
	std::cout << "Destructor freeing data" << std::endl;
}

class Deep{

private:
	int *data;

public:
	/* Constructor */
	Deep(int d);

	/* Copy constructor */
	Deep (const Deep &source);

	int getDataValue () const {return *data;}

	void setDataValue (int d) {*data = d;}

	/* Destructor */
	~Deep();

};

Deep::Deep (int d)
{
	data = new int;				// allocate memory
	*data = d;					// assign value
}

Deep::Deep (const Deep &source)
	:Deep (*source.data){

	/* data = new int;
	 * *data = *source.data;
	 */
	std::cout << "Copy constructor - deep copy" << std::endl;
}

void displayDeep (Deep d)
{
	std::cout << d.getDataValue() << std::endl;
}

Deep::~Deep()
{
	delete data;
	std::cout << "Destructor freeing data" << std::endl;
}

class Move{

private:
	int *data;

public:
	//Constructor
	Move(int d);

	//Getter function
	int getDataValue() const { return *data;}

	//Setter function
	void setDataValue (int d) { *data = d; }

	//Copy constructor
	Move(const Move &source);

	//Move constructor
	Move(Move &&source);

	//Destructor
	~Move();

};

//Constructor
Move::Move (int d)
{
	data = new int;
	*data = d;

	std::cout << "Constructor - Move" << std::endl;
}

//Copy constructor
Move::Move(const Move &source)
	:Move{*source.data}
{
	std::cout << "Copy constructor - Move" << std::endl;
}

//Move constructor
Move::Move(Move &&source)
	:data{source.data}
{
	source.data = nullptr;
	std::cout << "Move constructor" << std::endl;
}

//Destructor
Move::~Move()
{
	if(data != nullptr)
	{
		std::cout << "Destructor freeing data for: " << *data << std::endl;
	}
	else
	{
		std::cout << "Destructor freeing data for nullptr" << std::endl;
	}
	delete data;
}

void displayMove (Move m)
{
	std::cout << m.getDataValue() << std::endl;
}

int main ()
{

#ifdef PLAYER_CLASS

    Player empty;
    display(empty);

    Player Aditi;

    /* Copy constructor will be invoked */
    display(Aditi);

    Player Andreas("Andreas", 100, 0);

    Player Frank("Frank");

    /* Copy constructor will be invoked */
    Player Julian {Aditi};

#endif

#ifdef SHALLOW_CLASS

	Shallow object1 {100};
	displayShallow(object1);

	Shallow object2 {object1};
	object2.setDataValue (1000);

	displayShallow(object1);

	std::cout << "Hello world" << std::endl;

#endif

#ifdef DEEP_CLASS

	Deep obj1{100};
	displayDeep(obj1);

	Deep obj2{obj1};

	obj2.setDataValue (1000);
	displayDeep(obj1);
	displayDeep(obj2);

	std::cout << "Hello World" << std::endl;

#endif

#ifdef MOVE_CLASS

	std::vector <Move> vec;

	vec.push_back(Move{10});

	vec.push_back(Move{20});
	vec.push_back(Move{30});
	vec.push_back(Move{40});
	vec.push_back(Move{50});
	vec.push_back(Move{60});


#endif

	return 0;
}
