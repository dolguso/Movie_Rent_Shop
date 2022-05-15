// Customer.cpp
#include <sstream>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <ctime>
#include "Receipt.h"
#include "Customer.h"

using std::ostringstream;
using std::vector;

std::string ReplaceAll(std::string str, const std::string& from, const std::string& to) {
	size_t start_pos = 0;
	while ((start_pos = str.find(from, start_pos)) != std::string::npos) {
		str.replace(start_pos, from.length(), to);
		start_pos += to.length(); // Handles case where 'to' is a substring of 'from'
	}
	return str;
}

std::string wtime(const time_t& t) {
	std::tm tm;
	localtime_s(&tm, &t);
	std::wstringstream wss;
	std::string time = std::to_string(tm.tm_year + 1900) + "-" + std::to_string(tm.tm_mon + 1) + "-" + std::to_string(tm.tm_mday) + " " + std::to_string(tm.tm_hour) + ":" + std::to_string(tm.tm_min) + ":" + std::to_string(tm.tm_sec);
	//wss << std::put_time(&tm, L"%F %T");
	//return std::string(wss.str().begin(), wss.str().end());
	return time;
}

std::string fill_receipt_line(Customer customer, std::vector<Rental> customer_rental_list, std::string line) {
	std::string base_str = line;
	base_str = ReplaceAll(base_str, "{customer_name}", customer.getName());
	base_str = ReplaceAll(base_str, "{customer_rent_count}", std::to_string(customer_rental_list.size()));
	base_str = ReplaceAll(base_str, "{customer_age}", std::to_string(customer.get_age()));

	std::vector< Rental >::iterator iter = customer_rental_list.begin();
	std::vector< Rental >::iterator iter_end = customer_rental_list.end();

	int earn_point = 0;
	int whole_fee = 0;
	for (; iter != iter_end; ++iter) {
		Rental temp = *iter;
		earn_point += temp.get_point();
		whole_fee += temp.get_fee();
	}

	base_str = ReplaceAll(base_str, "{customer_earn_point}", std::to_string(earn_point));
	base_str = ReplaceAll(base_str, "{customer_point}", std::to_string(customer.get_point()));
	base_str = ReplaceAll(base_str, "{movie_rent_whole_fee}", std::to_string(whole_fee));

	return base_str;
}

std::string fill_receipt_line_by_rental(Rental rental, std::string line) {
	std::string base_str = line;
	base_str.erase(0, 1);
	base_str = ReplaceAll(base_str, "{movie_title}", rental.getMovie().get_movie_title());
	base_str = ReplaceAll(base_str, "{movie_genre}", rental.getMovie().get_genre_name());
	base_str = ReplaceAll(base_str, "{movie_rent_start}", wtime(rental.get_rent_time()));
	base_str = ReplaceAll(base_str, "{movie_rent_term}", std::to_string(rental.getDaysRented()));
	base_str = ReplaceAll(base_str, "{movie_rent_fee}", std::to_string(rental.get_fee()));
	base_str = ReplaceAll(base_str, "{movie_rent_point}", std::to_string(rental.get_point()));

	return base_str;
}

Customer::Customer() :customer_name(""), point(0), age(0) {}

Customer::Customer(const std::string& name, int age) : customer_name(name), point(0), age(age) {}

void Customer::add_point(int input_point) { point += input_point; }

int Customer::get_point() const { return point; };

void Customer::addRental(const Rental& arg) { customer_rental_list.push_back(arg); add_point(arg.get_point()); }

std::string Customer::getName() const { return customer_name; }

int Customer::get_age() const { return age; }

std::string Customer::get_receipt(Receipt skeleton)
{
	double totalAmount = 0.;
	int frequentRenterPoints = 0;
	std::ostringstream result;

	std::vector< Rental >::iterator iter = customer_rental_list.begin();
	std::vector< Rental >::iterator iter_end = customer_rental_list.end();

	std::vector<std::string> receipt_list = skeleton.get_receipt_origin();
	for (int i = 0; i < receipt_list.size(); i++) {
		std::string line = receipt_list[i];
		if (line[0] != '$')
		{
			result << fill_receipt_line(*this, this->customer_rental_list, line) << std::endl;
		}
		else {
			for (; iter != iter_end; ++iter) {
				result << fill_receipt_line_by_rental(*iter, line) << std::endl;
			}
		}
	}
	return result.str();
}


