// Movie.cpp
#include "Movie.h"

Movie::Movie() : movie_title(""), movie_genre(){};

Movie::Movie(const std::string& title, Genre& genre) : movie_title(title), movie_genre(genre) {}

Movie::~Movie(){};

std::string Movie::getMovieTitle() const
{
    return movie_title;
}