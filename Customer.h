// Customer.hh
#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <string>
#include <vector>
#include "Rental.h"

// The customer class represents the customer of the store

class Customer {
public:
	Customer();
	explicit Customer(const std::string& name);

	void addRental(const Rental& arg);
	std::string getName() const;

	// Generate a statement for the customer
	std::string get_receipt();

private:
	std::string customer_name;
	std::vector< Rental > customer_rental_list;
};
#endif // CUSTOMER_HH
