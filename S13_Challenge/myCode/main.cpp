// Standard (system) header files
#include <iostream>
#include <cstdlib>

#include "Movies.h"

using namespace std;

/* Helper functions to add and increment movies */
void add_movie(Movies &source, std::string name, std::string rating, int watched);
void increment_watch(Movies &source, std::string name);

/* Function definitions of helper functions */
void add_movie(Movies &source, std::string name, std::string rating, int watched)
{
	if(source.addMovie(name, rating, watched))
	{
		std::cout << name << " added" << std::endl;
	}
	else
	{
		std::cout << "Movie already exists" << std::endl;
	}
}

void increment_watch(Movies &source, std::string name)
{
	if(source.incrementWatched(name))
	{
		std::cout << "Watch incremented" << std::endl;
	}
	else
	{
		std::cout << "Movie " << name << " does not exist" << std::endl;
	}
}

int main ()
{
	Movies movies;

	/* Test 1: Display error message when no movies are in the list */
	movies.display();

	/* Test 2: Add movies to the list and display*/
	add_movie(movies, "Harry Potter", "PG-13", 5);
	add_movie(movies, "Shutter Island", "R", 3);
	movies.display();

	/* Test 3: Trying to add the same movie again */
	add_movie(movies, "Harry Potter", "PG-13", 5);

	/* Test 4: Increment the count of a movie */
	increment_watch(movies, "Harry Potter");

	movies.display();

	/* Test 5: Increment non-existing movie */
	increment_watch(movies, "XYZ");

	return 0;
}
