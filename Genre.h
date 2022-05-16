#pragma once
#include <string>

class Genre
{
private:
    std::string genre_name;
    double default_fee;
    double additional_fee;
    int default_day_for_fee;
    int default_point;
    int additional_point;
    int default_day_for_point;

public:
    Genre();
    Genre(std::string genre_name, double default_fee, double additional_fee, int default_day_for_fee, int default_point, int additional_point, int default_day_for_point);
    ~Genre();

    std::string getGenreName() const;

    double getDefaultFee() const;

    double getAdditionalFee() const;

    int getDefaultDayForFee() const;

    int getDefaultPoint() const;

    int getAdditionalPoint() const;

    int getDefaultDayForPoint() const;
};