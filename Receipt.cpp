// Receipt.cpp
#include "Receipt.h"
#include <string>>
#include <fstream>

Receipt::Receipt() {}

void Receipt::set_receipt_origin(std::string path) {
	std::ifstream file(path);
	std::string str;
	while (std::getline(file, str))
	{
		receipt_origin.push_back(str);
	}
}

std::vector<std::string> Receipt::get_receipt_origin() { return receipt_origin; }
