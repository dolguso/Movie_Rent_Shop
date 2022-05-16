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
    ~Customer();

	void addRental(const Rental& arg);
	std::string getName() const;

	// Generate a statement for the customer
	std::string getReceipt(Receipt& skeleton);

	void addPoint(int input_point);
	int getPoint() const;

	int getAge() const;

private:
	std::string customer_name = "";
	std::vector< Rental > customer_rental_list;
	int customer_point = 0;
	int customer_age = 0;
};