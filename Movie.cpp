// Movie.cpp
#include "Movie.h"

Movie::Movie(const std::string& title, Genre genre) :movie_title(title), Genre(genre) {}

std::string Movie::get_movie_title() const { return movie_title; }

void Movie::set_movie_title(std::string input_title) { movie_title = input_title; }