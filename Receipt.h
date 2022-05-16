#pragma once
#include <string>
#include <vector>

class Receipt
{
private:
    std::vector<std::string> receipt_origin;

public:
    Receipt();
    Receipt(std::string path);
    ~Receipt();
    std::vector<std::string> getReceiptOrigin();
};