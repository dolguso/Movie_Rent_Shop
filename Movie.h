// Movie.hh
#pragma once
#include "Genre.h"

#include <string>

class Movie
{
private:
	std::string movie_title;
	Genre movie_genre;
public:
	Movie();
	Movie(const std::string& title, Genre& genre);
	~Movie();
	std::string getMovieTitle() const;
};
