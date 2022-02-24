# Section 13 Challenge - Classes and Objects #

For this challenge you are to develop the foundation for a program for movie fanatics to 
keep track of what movies they have watched and how many times they have watched each movie.


## Requirements ##

The program must support the following:

class Movie - models a movie which includes
-	movie name
-	movie rating (G, PG, PG-13, R)
-	watched - the number of times the movie has been watched


class Movies - models a collection of movie objects

Obviously, Movies needs to know about Movie since it is a collection of Movie object.
However, our main driver should only interact with the Movies class.

For example, a simple main should be able to 
-	create a Movies object
-	ask the movies object to add a movie by providing the movie name, rating and watched count
-	ask the movies object to increment the watched count by 1 for a movie given its name
-	ask the movies object to display all of its movies


Additionally, 
-	if we try to add a movie whose name is already in the movies collection we should 
display this error to the user
-	 if we try to increment the watched count for a movie whose name is not in the movies 
collection we should display this error to the user

Here is what your project files should look like:
-	Movie.h		-	 include file with the Movie class specification
-	Movie.cpp 	-	 file with the Movie class implementation
-	Movies.h 	- 	 include file with the Movies class specification
-	Movies.cpp  -	 file with the Movies class implementsation
-	main.cpp	-	 the main driver that creates a Movies object and adds and increments movies