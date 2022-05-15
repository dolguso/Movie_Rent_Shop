// Movie.hh
#pragma once
#include <string>
#include "Genre.h"

class Movie : public Genre {
private:
	std::string movie_title;
public:
	Movie(const std::string& title, Genre genre);
	std::string get_movie_title() const;
	void set_movie_title(std::string input_title);
};
