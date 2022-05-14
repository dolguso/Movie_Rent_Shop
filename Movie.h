// Movie.hh
#pragma once
#include <string>
#include "Genre.h"

class Movie : public Genre {
private:
	std::string movieTitle;
public:
	Movie(const std::string& title, Genre genre);
	std::string getTitle() const;
	void setTitle(std::string input_title);
};
