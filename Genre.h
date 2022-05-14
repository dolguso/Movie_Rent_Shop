#pragma once
#ifndef GENRE_H
#define GENRE_H
#include <string>


class Genre {
private:
	std::string genre_name;
	double default_fee;
	double additional_fee;
public:
	Genre(std::string genre_name, double default_fee, double additional_fee);
	std::string get_name() const;
	void set_name(std::string input_name);
	double get_default_fee() const;
	double get_additional_fee() const;
	void set_default_fee(double new_default_fee);
	void set_additional_fee(double new_additional_fee);
};

#endif // MOVIE_HH