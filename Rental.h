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

private:
	Movie rentedMovie;
	int nDaysRented;
	int point;
};
#endif // RENTAL_H
