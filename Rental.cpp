#include "Rental.h"

inline Rental::Rental(const Movie& movie, int daysRented) :
	rentedMovie(movie),
	nDaysRented(daysRented),
	point(movie.get_additional_point() + ((daysRented >= movie.get_default_day_for_point()) ? (daysRented - movie.get_default_day_for_point() + 1) * movie.get_additional_point() : 0))
{}

inline int Rental::getDaysRented() const { return nDaysRented; }

inline const Movie& Rental::getMovie() const { return rentedMovie; }

inline int Rental::get_point() const { return point; }
