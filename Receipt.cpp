// Receipt.cpp
#include "Receipt.h"
#include <string>>
#include <fstream>

void Receipt::set_receipt_origin(std::string path) {
	std::ifstream file(path);
	std::string str;
	while (std::getline(file, str))
	{
		receipt_origin.push_back(str);
	}
}