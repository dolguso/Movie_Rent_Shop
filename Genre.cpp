// Genre.cpp
#include "Genre.h"
#include <string>

inline Genre::Genre(std::string genre_name, double default_fee, double additional_fee, int default_day_for_fee, int default_point, int additional_point, int default_day_for_point) :
	genre_name(genre_name), default_fee(default_fee), additional_fee(additional_fee), default_day_for_fee(default_day_for_fee), default_point(default_point), additional_point(additional_point), default_day_for_point(default_day_for_point) {};

inline std::string Genre::get_name() const { return genre_name; }
inline void Genre::set_name(std::string input_name) { genre_name = input_name; }

inline double Genre::get_default_fee() const { return default_fee; }
inline void Genre::set_default_fee(double new_default_fee) { default_fee = new_default_fee; }

inline double Genre::get_additional_fee() const { return additional_fee; }
inline void Genre::set_additional_fee(double new_additional_fee) { additional_fee = new_additional_fee; }

inline int Genre::get_default_day_for_fee() const { return default_day_for_fee; };
inline void Genre::set_default_day_for_fee(int new_default_day_for_fee) { default_day_for_fee = new_default_day_for_fee; }

inline int Genre::get_defualt_point() const { return default_point; }
inline void Genre::set_defualt_point(int new_default_point) { default_point = new_default_point; }

inline int Genre::get_additional_point() const { return additional_point; }
inline void Genre::set_additional_point(int new_additional_point) { additional_point = new_additional_point; }

inline int Genre::get_default_day_for_point() const { return default_day_for_point; }
inline void Genre::set_default_day_for_point(int new_default_day_for_point) { default_day_for_point = new_default_day_for_point; }