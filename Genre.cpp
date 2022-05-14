// Genre.cpp
// Genre.cpp
#include "Genre.h"
#include <string>

inline Genre::Genre(std::string genre_name, double default_fee, double additional_fee) : genre_name(genre_name), default_fee(default_fee), additional_fee(additional_fee) {};

inline std::string Genre::get_name() const { return genre_name; }

inline void Genre::set_name(std::string input_name) { genre_name = input_name; }

inline double Genre::get_default_fee() const { return default_fee; }

inline void Genre::set_default_fee(double new_default_fee) { default_fee = new_default_fee; }

inline double Genre::get_additional_fee() const { return additional_fee; }

inline void Genre::set_additional_fee(double new_additional_fee) { additional_fee = new_additional_fee; }