#pragma once
#ifndef GENRE_H
#define GENRE_H
#include <string>


class Genre {
private:
	std::string genre_name;
	double default_fee;
	double additional_fee;
	int default_point;
	int additional_point;
	int default_day_for_point;
public:
	Genre(std::string genre_name, double default_fee, double additional_fee, int default_point, int additional_point, int default_day_for_point);
	std::string get_name() const;
	void set_name(std::string input_name);
	double get_default_fee() const;
	double get_additional_fee() const;
	void set_default_fee(double new_default_fee);
	void set_additional_fee(double new_additional_fee);
	int get_defualt_point() const;
	int get_additional_point() const;
	int get_default_day_for_point() const;
	void set_defualt_point(int new_default_point);
	void set_additional_point(int new_additional_point);
	void set_default_day_for_point(int new_default_day_for_point);
};

#endif // MOVIE_HH