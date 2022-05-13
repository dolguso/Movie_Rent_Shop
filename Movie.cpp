// Movie.cpp
#include "Movie.h"

inline Movie::Movie(const std::string& title, GENRE input_genre) :
	movieTitle(title),
	genre(input_genre)
{}

inline GENRE Movie::get_genre() const { return genre; }

inline void Movie::set_genre(GENRE input_genre) { genre = input_genre; }

inline std::string Movie::getTitle() const { return movieTitle; }
