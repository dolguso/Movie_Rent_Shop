// Rental.hh
#pragma once
#include "Movie.h"
#include <ctime>

class Rental {
public:
	Rental(const Movie& movie, int daysRented);

	int getDaysRented() const;
	const Movie& getMovie() const;
	int get_point() const;
	int get_fee() const;
	time_t get_rent_time() const;
	void set_rent_time(time_t input_rent_time);

private:
	Movie rentedMovie;
	int nDaysRented;
	int point;
	int fee;
	time_t rent_time;
};