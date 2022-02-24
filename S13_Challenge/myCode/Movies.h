/*
 * Movies.h
 *
 *  Created on: 11-Feb-2022
 *      Author: Aditi Prakash
 */

#ifndef MOVIES_H_
#define MOVIES_H_

#include <vector>

#include "Movie.h"

class Movies
{

private:
	std::vector <Movie> movie;			/* <! Collection of movie objects */

public:
	/*
	 * @brief: Default constructor
	 * @param: NONE
	 * @return: NONE
	 */
	Movies();

	/*
	 * @brief: Add movie to the collection
	 * @param: std::string name 	- name of the movie
	 * 		   std::string rating 	- rating for the movie
	 * 		   int watched 			- Number of times watched
	 * @return: bool	- True: on successful addition, false otherwise
	 */
	bool addMovie (std::string name, std::string rating, int watched);

	/*
	 * @brief: Increment watch count of the movie
	 * @param: std::string name 	- name of the movie
	 * @return: bool	- True: on successful increment, false otherwise
	 */
	bool incrementWatched(std::string name);

	/*
	 * @brief: Method to display the movies
	 * @param: NONE
	 * @return: NONE
	 */
	void display() const;

	/*
	 * @brief: Default destructor
	 * @param: NONE
	 * @return: NONE
	 */
	~Movies();
};

#endif /* MOVIES_H_ */
