/*
 * Movie.cpp
 *
 *  Created on: 11-Feb-2022
 *      Author: Aditi Prakash
 */

#include <iostream>
#include "Movie.h"


Movie::Movie(std::string name, std::string rating, int watched)
	:name(name), rating(rating), watched(watched)
{}

/* Copy constructor */
Movie::Movie(const Movie &source)
	:Movie{source.name, source.rating, source.watched}
{}

void Movie::display() const
{
	std::cout << name << "\t" << rating << "\t" << watched << std::endl;
}

Movie::~Movie()
{
	// TODO Auto-generated destructor stub
}

