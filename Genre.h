#pragma once
#include <string>

class Genre {
private:
	std::string genre_name;
	double default_fee;
	double additional_fee;
	int default_day_for_fee;
	int default_point;
	int additional_point;
	int default_day_for_point;
public:
	Genre(std::string genre_name, double default_fee, double additional_fee, int default_day_for_fee, int default_point, int additional_point, int default_day_for_point);

	std::string get_genre_name() const;
	void set_genre_name(std::string input_genre_name);

	double get_default_fee() const;
	void set_default_fee(double new_default_fee);

	double get_additional_fee() const;
	void set_additional_fee(double new_additional_fee);

	int get_default_day_for_fee() const;
	void set_default_day_for_fee(int new_default_day_for_fee);

	int get_defualt_point() const;
	void set_defualt_point(int new_default_point);

	int get_additional_point() const;
	void set_additional_point(int new_additional_point);

	int get_default_day_for_point() const;
	void set_default_day_for_point(int new_default_day_for_point);
};