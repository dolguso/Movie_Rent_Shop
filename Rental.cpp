#include "Rental.h"
#include <chrono>
#include <ctime>

Rental::Rental(const Movie& movie, int daysRented) :
	rented_movie(movie),
	rental_date(daysRented),
	rental_point(movie.getAdditionalPoint() + ((daysRented >= movie.getDefaultDayForPoint()) ? (daysRented - movie.getDefaultDayForPoint() + 1) * movie.getAdditionalPoint() : 0)),
	rental_fee(movie.getAdditionalFee() + ((daysRented >= movie.getDefaultDayForFee()) ? ((double)daysRented - (double)movie.getDefaultDayForFee() + 1) * movie.getAdditionalFee() : 0)),
	rent_time(std::chrono::system_clock::to_time_t(std::chrono::system_clock::now()))
{}

int Rental::getDaysRented() const { return rental_date; }
const Movie& Rental::getMovie() const { return rented_movie; }

int Rental::getPoint() const { return rental_point; }
int Rental::getFee() const { return rental_fee; }

time_t Rental::getRentTime() const { return rent_time; }
void Rental::setRentTime(time_t input_rent_time) { rent_time = input_rent_time; }