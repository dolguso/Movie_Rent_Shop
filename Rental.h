// Rental.hh
#pragma once
#include "Movie.h"
#include <ctime>

class Rental {
public:
	Rental(const Movie& movie, int daysRented);

	int getDaysRented() const;
	const Movie& getMovie() const;
	int getPoint() const;
	int getFee() const;
	time_t getRentTime() const;
	void setRentTime(time_t input_rent_time);

private:
	Movie rented_movie;
	int rental_date;
	int rental_point;
	int rental_fee;
	time_t rent_time;
};