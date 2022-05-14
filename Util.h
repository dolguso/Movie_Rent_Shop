#pragma once
#include <string>
#include <iomanip>
#include <ctime>
#include <sstream>
#include "Customer.h"
#include <vector>

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
	wss << std::put_time(&tm, L"%F %T");
	return std::string(wss.str().begin(), wss.str().end());
}

std::string fill_receipt_line(Customer customer, std::vector<Rental> customer_rental_list, std::string line) {
	std::string base_str = line;
	ReplaceAll(base_str, "{customer_name}", customer.getName());
	ReplaceAll(base_str, "{customer_rent_count}", std::to_string(customer_rental_list.size()));
	ReplaceAll(base_str, "{customer_age}", std::to_string(customer.get_age()));

	std::vector< Rental >::iterator iter = customer_rental_list.begin();
	std::vector< Rental >::iterator iter_end = customer_rental_list.end();

	int earn_point = 0;
	int whole_fee = 0;
	for (; iter != iter_end; ++iter) {
		Rental temp = *iter;
		earn_point += temp.get_point();
		whole_fee += temp.get_fee();
	}

	ReplaceAll(base_str, "{customer_earn_point}", std::to_string(earn_point));
	ReplaceAll(base_str, "{customer_point}", std::to_string(customer.get_point() - earn_point));
	ReplaceAll(base_str, "{movie_rent_whole_fee}", std::to_string(whole_fee));

	return base_str;
}

std::string fill_receipt_line_by_rental(Rental rental, std::string line) {
	std::string base_str = line;
	ReplaceAll(base_str, "{movie_title}", rental.getMovie().get_movie_title());
	ReplaceAll(base_str, "{movie_genre}", rental.getMovie().get_genre_name());
	ReplaceAll(base_str, "{movie_rent_start}", wtime(rental.get_rent_time()));
	ReplaceAll(base_str, "{movie_rent_term}", std::to_string(rental.getDaysRented()));
	ReplaceAll(base_str, "{movie_rent_fee}", std::to_string(rental.get_fee()));

	return base_str;
}