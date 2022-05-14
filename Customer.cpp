// Customer.cpp
#include <sstream>
#include <vector>
#include <algorithm>
#include "Customer.h"
#include "Receipt.h"
#include "Util.h"

using std::ostringstream;
using std::vector;

inline Customer::Customer() {}

inline Customer::Customer(const std::string& name, int age) : customer_name(name), age(age) {}

void Customer::add_point(int input_point) { point += input_point; }

int Customer::get_point() const { return point; };

inline void Customer::addRental(const Rental& arg) { customer_rental_list.push_back(arg); add_point(arg.get_point()); }

inline std::string Customer::getName() const { return customer_name; }

inline int Customer::get_age() const { return age; }

std::string Customer::get_receipt()
{
	double totalAmount = 0.;
	int frequentRenterPoints = 0;

	std::vector< Rental >::iterator iter = customer_rental_list.begin();
	std::vector< Rental >::iterator iter_end = customer_rental_list.end();

	// result will be returned by statement()
	std::ostringstream result;
	result << "Rental Record for " << getName() << "\n";

	// Loop over customer's rentals
	for (; iter != iter_end; ++iter) {

		double thisAmount = 0.;
		Rental each = *iter;

		int get_days_rented = each.getDaysRented();

		thisAmount += each.getMovie().get_default_fee();
		if (get_days_rented > 2)
			thisAmount += (((double)get_days_rented - 2) * each.getMovie().get_additional_fee());

		frequentRenterPoints += get_days_rented > 1 ? 2 : 1;

		// Show figures for this rental
		result << "\t" << each.getMovie().getTitle() << "\t"
			<< thisAmount << std::endl;
		totalAmount += thisAmount;
	}

	// Add footer lines
	result << "Amount owed is " << totalAmount << "\n";
	result << "You earned " << frequentRenterPoints
		<< " frequent renter points";

	return result.str();
}

std::string Customer::get_receipt(Receipt skeleton)
{
	double totalAmount = 0.;
	int frequentRenterPoints = 0;

	std::vector< Rental >::iterator iter = customer_rental_list.begin();
	std::vector< Rental >::iterator iter_end = customer_rental_list.end();

	// result will be returned by statement()
	std::ostringstream result;
	result << "Rental Record for " << getName() << "\n";

	// Loop over customer's rentals
	for (; iter != iter_end; ++iter) {

		double thisAmount = 0.;
		Rental each = *iter;

		int get_days_rented = each.getDaysRented();

		thisAmount += each.getMovie().get_default_fee();
		if (get_days_rented > 2)
			thisAmount += (((double)get_days_rented - 2) * each.getMovie().get_additional_fee());

		frequentRenterPoints += get_days_rented > 1 ? 2 : 1;

		// Show figures for this rental
		result << "\t" << each.getMovie().getTitle() << "\t"
			<< thisAmount << std::endl;
		totalAmount += thisAmount;
	}

	// Add footer lines
	result << "Amount owed is " << totalAmount << "\n";
	result << "You earned " << frequentRenterPoints
		<< " frequent renter points";

	return result.str();
}
