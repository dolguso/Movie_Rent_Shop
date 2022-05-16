// Movie.hh
#pragma once
#include "Genre.h"

#include <string>

class Movie : public Genre
{
private:
    std::string movie_title;

public:
    Movie();
    Movie(const std::string& title, Genre& genre);
    ~Movie();
    std::string getMovieTitle() const;
};
