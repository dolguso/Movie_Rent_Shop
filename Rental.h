// Rental.hh
#ifndef RENTAL_H
#define RENTAL_H
#include "Movie.h"

class Rental {
public:
	Rental(const Movie& movie, int daysRented);

	int getDaysRented() const;
	const Movie& getMovie() const;
	int get_point() const;
	int get_fee() const;

private:
	Movie rentedMovie;
	int nDaysRented;
	int point;
	int fee;
};
#endif // RENTAL_H
