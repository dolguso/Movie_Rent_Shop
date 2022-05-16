// Receipt.cpp
#include "Receipt.h"

#include <fstream>
#include <string>>

Receipt::Receipt() : receipt_origin() {}
Receipt::Receipt(std::string path) : receipt_origin()
{
    std::ifstream file(path);
    std::string str;
    while (std::getline(file, str))
    {
        receipt_origin.push_back(str);
    }
};

Receipt::~Receipt()
{
    receipt_origin.clear();
    receipt_origin.~vector();
}

std::vector<std::string> Receipt::getReceiptOrigin()
{
    return receipt_origin;
}
