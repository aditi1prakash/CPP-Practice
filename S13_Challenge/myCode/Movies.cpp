/*
 * Movies.cpp
 *
 *  Created on: 11-Feb-2022
 *      Author: aditi
 */

#include <iostream>
#include "Movies.h"


Movies::Movies()
{}

bool Movies::addMovie(std::string name, std::string rating, int watched)
{
	/* const & - The values within the vector cannot be modified */
	for (const Movie &movieObj: movie)
	{
		/* Search in the vector based on name*/
		if (movieObj.getName() == name)
		{
			return false;
		}
	}
	/* Add movie to the vector */
	movie.push_back(Movie{name, rating, watched});
	return true;
}

bool Movies::incrementWatched(std::string name)
{
	/* Passing reference modifies the source object, otherwise only
	 * the copy is incremented and source object will be unaffected*/
	for (auto &movieObj: movie)
	{
		if (movieObj.getName() == name)
		{
			movieObj.incrementWatched();
			return true;
		}
	}
	return false;
}

void Movies::display() const
{
	if(movie.size() != 0)
	{
		std::cout << "====================================" << std::endl;
		for(const auto &movieObj: movie)
		{
			movieObj.display();
		}
		std::cout << "====================================" << std::endl;
	}
	else
	{
		std::cout << "Sorry, there are no movies to display" << std::endl;
	}
}

Movies::~Movies()
{}

