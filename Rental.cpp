#include "Rental.h"
#include <chrono>
#include <ctime>

Rental::Rental(const Movie& movie, int daysRented) :
	rentedMovie(movie),
	nDaysRented(daysRented),
	point(movie.get_additional_point() + ((daysRented >= movie.get_default_day_for_point()) ? (daysRented - movie.get_default_day_for_point() + 1) * movie.get_additional_point() : 0)),
	fee(movie.get_additional_fee() + ((daysRented >= movie.get_default_day_for_fee()) ? ((double)daysRented - (double)movie.get_default_day_for_fee() + 1) * movie.get_additional_fee() : 0)),
	rent_time(std::chrono::system_clock::to_time_t(std::chrono::system_clock::now()))
{}

int Rental::getDaysRented() const { return nDaysRented; }
const Movie& Rental::getMovie() const { return rentedMovie; }

int Rental::get_point() const { return point; }
int Rental::get_fee() const { return fee; }

time_t Rental::get_rent_time() const { return rent_time; }
void Rental::set_rent_time(time_t input_rent_time) { rent_time = input_rent_time; }