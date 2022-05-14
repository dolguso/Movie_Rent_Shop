#pragma once
#include <string>
#include <vector>

class Receipt {
private:
	std::vector<std::string> receipt_origin;
public:
	void set_receipt_origin(std::string path);
};