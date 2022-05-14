// Customer.hh
// Customer.hh
#pragma once
#include <string>
#include <vector>
#include "Rental.h"
#include "Receipt.h"

// The customer class represents the customer of the store

class Customer {
public:
	Customer();
	explicit Customer(const std::string& name, int age);

	void addRental(const Rental& arg);
	std::string getName() const;

	// Generate a statement for the customer
	std::string get_receipt(Receipt skeleton);

	void add_point(int input_point);
	int get_point() const;

	int get_age() const;

private:
	std::string customer_name = "";
	std::vector< Rental > customer_rental_list;
	int point = 0;
	int age = 0;
};