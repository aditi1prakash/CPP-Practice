/*
 * Movie.h
 *
 *  Created on: 11-Feb-2022
 *      Author: Aditi Prakash
 */

#ifndef MOVIE_H_
#define MOVIE_H_

#include <string>

class Movie
{

private:
	std::string name;				/* <! Name of the movie */
	std::string rating;				/* <! Rating of the movie */
	int watched;					/* <! Watcehd times of the movie */

public:

	/*
	 * @brief: Parametrised constructor
	 * @param: std::string name 	- name of the movie
	 * 		   std::string rating 	- rating for the movie
	 * 		   int watched 			- Number of times watched
	 * @return: NONE
	 */
	Movie(std::string name, std::string rating, int watched);

	/*
	 * @brief: Copy constructor
	 * @param: const Movie &source	- Movie object
	 * @return: NONE
	 */
	Movie (const Movie &source);

	/*
	 * @brief: Getter function for name
	 * @param: NONE
	 * @return: const std::string& 	- Name of the movie
	 */
	const std::string& getName() const
	{
		return name;
	}

	/*
	 * @brief: Setter function for name
	 * @param: const std::string &name	- Name of the movie
	 * @return: NONE
	 */
	void setName(const std::string &name)
	{
		this->name = name;
	}

	/*
	 * @brief: Getter function for rating
	 * @param: NONE
	 * @return: const std::string& 	- Rating of the movie
	 */
	const std::string& getRating() const
	{
		return rating;
	}

	/*
	 * @brief: Setter function for rating
	 * @param: const std::string &rating	- rating of the movie
	 * @return: NONE
	 */
	void setRating(const std::string &rating)
	{
		this->rating = rating;
	}

	/*
	 * @brief: Getter function for number of times watched
	 * @param: NONE
	 * @return: const int	- Number of times watched
	 */
	const int getWatched() const
	{
		return watched;
	}

	/*
	 * @brief: Setter function for watched times
	 * @param: int watched	- Number of times movie is watched
	 * @return: NONE
	 */
	void setWatched(int watched)
	{
		this->watched = watched;
	}

	/*
	 * @brief: Increment number of watched times by 1
	 * @param: NONE
	 * @return: NONE
	 */
	void incrementWatched()
	{
		watched++;
	}

	/*
	 * @brief: Method to display the movies
	 * @param: NONE
	 * @return: NONE
	 */
	void display () const;

	/*
	 * @brief: Default destructor
	 * @param: NONE
	 * @return: NONE
	 */
	~Movie();

};

#endif /* MOVIE_H_ */
