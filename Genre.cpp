// Genre.cpp
#include "Genre.h"

#include <string>

Genre::Genre() : genre_name(""), default_fee(0), additional_fee(0), default_day_for_fee(0), default_point(0), additional_point(0), default_day_for_point(0){};

Genre::Genre(std::string genre_name, double default_fee, double additional_fee, int default_day_for_fee, int default_point, int additional_point, int default_day_for_point)
    : genre_name(genre_name), default_fee(default_fee), additional_fee(additional_fee), default_day_for_fee(default_day_for_fee), default_point(default_point), additional_point(additional_point),
      default_day_for_point(default_day_for_point){};

Genre::~Genre(){};

std::string Genre::getGenreName() const
{
    return genre_name;
}

double Genre::getDefaultFee() const
{
    return default_fee;
}

double Genre::getAdditionalFee() const
{
    return additional_fee;
}

int Genre::getDefaultDayForFee() const
{
    return default_day_for_fee;
};

int Genre::getDefaultPoint() const
{
    return default_point;
}

int Genre::getAdditionalPoint() const
{
    return additional_point;
}

int Genre::getDefaultDayForPoint() const
{
    return default_day_for_point;
}