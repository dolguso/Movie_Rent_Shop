// Genre.cpp
#include "Genre.h"
#include <string>

Genre::Genre(std::string genre_name, double default_fee, double additional_fee, int default_day_for_fee, int default_point, int additional_point, int default_day_for_point) :
	genre_name(genre_name), default_fee(default_fee), additional_fee(additional_fee), default_day_for_fee(default_day_for_fee), default_point(default_point), additional_point(additional_point), default_day_for_point(default_day_for_point) {};

std::string Genre::get_genre_name() const { return genre_name; }
void Genre::set_genre_name(std::string input_genre_name) { genre_name = input_genre_name; }

double Genre::get_default_fee() const { return default_fee; }
void Genre::set_default_fee(double new_default_fee) { default_fee = new_default_fee; }

double Genre::get_additional_fee() const { return additional_fee; }
void Genre::set_additional_fee(double new_additional_fee) { additional_fee = new_additional_fee; }

int Genre::get_default_day_for_fee() const { return default_day_for_fee; };
void Genre::set_default_day_for_fee(int new_default_day_for_fee) { default_day_for_fee = new_default_day_for_fee; }

int Genre::get_defualt_point() const { return default_point; }
void Genre::set_defualt_point(int new_default_point) { default_point = new_default_point; }

int Genre::get_additional_point() const { return additional_point; }
void Genre::set_additional_point(int new_additional_point) { additional_point = new_additional_point; }

int Genre::get_default_day_for_point() const { return default_day_for_point; }
void Genre::set_default_day_for_point(int new_default_day_for_point) { default_day_for_point = new_default_day_for_point; }