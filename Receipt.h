#pragma once
#include <string>
#include <vector>

class Receipt {
private:
	std::vector<std::string> receipt_origin;
public:
	Receipt();
	void set_receipt_origin(std::string path);
	std::vector<std::string> get_receipt_origin();
};