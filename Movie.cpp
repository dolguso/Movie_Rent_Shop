// Movie.cpp
#include "Movie.h"

inline Movie::Movie(const std::string& title, Genre genre) :movieTitle(title), Genre(genre) {}

inline std::string Movie::getTitle() const { return movieTitle; }

inline void Movie::setTitle(std::string input_title) { movieTitle = input_title; }