// Movie.cpp
#include "Movie.h"

Movie::Movie() : movie_title(""), Genre(){};

Movie::Movie(const std::string& title, Genre& genre) : movie_title(title), Genre(genre) {}

Movie::~Movie(){};

std::string Movie::getMovieTitle() const
{
    return movie_title;
}